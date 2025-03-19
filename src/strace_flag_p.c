/*
** EPITECH PROJECT, 2024
** strace
** File description:
** implement a simpler strace program
*/

#include "../include/strace.h"

void check_pid(char *arg)
{
    int i = 0;

    while (arg[i]) {
        if (!isdigit(arg[i])) {
            fprintf(stderr, "./strace: Invalid process id: '%s'\n", arg);
            exit(EXIT_ERROR);
        }
        i++;
    }
    return;
}

void ptrace_attach(utils_t *tool)
{
    if (ptrace(PTRACE_ATTACH, tool->pid, NULL, NULL) == -1) {
        fprintf(stderr, "./strace: attach: ptrace(PTRACE_SEIZE, ");
        fprintf(stderr, "%d): No such process\n", tool->pid);
        exit(EXIT_FAILURE);
    }
}

void pid_strace(utils_t *tool)
{
    int status = 0;

    ptrace_attach(tool);
    waitpid(tool->pid, &status, 0);
    while (1) {
        if (!WIFSTOPPED(status))
            break;
        if (ptrace(PTRACE_GETREGS, tool->pid, NULL, tool->regs) == -1)
            break;
        if ((int)tool->regs->orig_rax != -1)
            display_syscalls(tool);
        if (ptrace(PTRACE_SINGLESTEP, tool->pid, NULL, NULL) == -1)
            break;
        waitpid(tool->pid, &status, 0);
    }
    if (ptrace(PTRACE_DETACH, tool->pid, NULL, NULL) == -1)
        exit(EXIT_FAILURE);
}
