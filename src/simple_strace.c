/*
** EPITECH PROJECT, 2024
** strace
** File description:
** implement a simpler strace program
*/

#include "../include/strace.h"
#include "../include/syscall.h"

void display_hexa(utils_t *tool)
{
    int times = table[tool->regs->orig_rax].nbr_arg;
    unsigned long long regs_values[6] = {tool->regs->rdi, tool->regs->rsi,
    tool->regs->rdx, tool->regs->rcx, tool->regs->r8, tool->regs->r9};

    if (tool->regs->orig_rax == SYS_EXECVE) {
        return;
    }
    for (int i = 0; i < times; i++) {
        fprintf(stderr, "0x%llx", regs_values[i]);
        if (i + 1 < times) {
            fprintf(stderr, ", ");
        }
    }
    return;
}

void execve_tracee(pid_t pid, char *av)
{
    if (ptrace(PTRACE_TRACEME, pid, NULL, NULL) == -1) {
        perror("TRACEME");
        exit(EXIT_ERROR);
    }
    if (execvp(av, &av) == -1) {
        perror("execvp");
        exit(EXIT_ERROR);
    }
    return;
}

void read_tracee_regs(pid_t pid, int *status, utils_t *tool)
{
    if (ptrace(PTRACE_SETOPTIONS, pid, NULL, PTRACE_O_TRACEEXIT) == -1) {
        exit(EXIT_ERROR);
    }
    while (!WIFEXITED(*status)) {
        if (ptrace(PTRACE_GETREGS, pid, NULL, tool->regs) == -1) {
            break;
        }
        if ((int)tool->regs->orig_rax != -1) {
            display_syscalls(tool);
        }
        if (ptrace(PTRACE_SINGLESTEP, pid, NULL, NULL) == -1) {
            break;
        }
        waitpid(pid, status, 0);
    }
    return;
}

void basic_strace(utils_t *tool)
{
    pid_t pid = fork();
    int status;

    if (pid == -1) {
        perror("fork");
        exit(EXIT_ERROR);
    } else if (pid == 0) {
        execve_tracee(pid, tool->av[tool->arg_pos]);
    } else {
        waitpid(pid, &status, 0);
        tool->pid = pid;
        read_tracee_regs(pid, &status, tool);
    }
    return;
}
