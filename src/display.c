/*
** EPITECH PROJECT, 2024
** strace
** File description:
** implement a simpler strace program
*/

#include "../include/strace.h"
#include "../include/syscall.h"

void display_name(utils_t *tool)
{
    unsigned long long replace = tool->regs->rdi;

    if (tool->regs->orig_rax == SYS_EXECVE && tool->flag != FLAG_NONE
        && tool->flag != FLAG_P) {
        fprintf(stderr, "execve(\"%s\", [\"%s\"], ", tool->arg, tool->arg);
        fprintf(stderr, "[/* %d vars */]) = %lld\n", tool->vars, replace);
        return;
    }
    if (tool->regs->orig_rax == SYS_EXECVE) {
        fprintf(stderr, "execve(\"%s\", [\"%s\"], ", tool->arg, tool->arg);
        fprintf(stderr, "[/* %d vars */]) = 0x%llx\n", tool->vars, replace);
    } else {
        fprintf(stderr, "%s(", table[tool->regs->orig_rax].name);
    }
    return;
}

void display_exit(utils_t *tool)
{
    if (tool->regs->orig_rax == 231) {
        fprintf(stderr, "+++ exited with %lld +++\n", tool->regs->rdi);
    }
    return;
}

void display_retvalue(utils_t *tool)
{
    if (tool->regs->orig_rax == SYS_EXECVE) {
        return;
    }
    if (table[tool->regs->orig_rax].ret == VOID) {
        fprintf(stderr, ") = ?\n");
        return;
    }
    if (tool->flag == FLAG_S || tool->flag == 3) {
        fprintf(stderr, ") = %lld\n", tool->regs->rax);
        return;
    }
    if (tool->flag == FLAG_NONE || tool->flag == FLAG_P) {
        fprintf(stderr, ") = 0x%llx\n", tool->regs->rax);
        return;
    }
}

void display_args(utils_t *tool)
{
    if (tool->flag == FLAG_NONE || tool->flag == FLAG_P) {
        display_hexa(tool);
    } else {
        display_s(tool);
    }
    return;
}

void display_syscalls(utils_t *tool)
{
    if (tool->regs->orig_rax > 328) {
        fprintf(stderr, "Unknown\n");
    } else {
        display_name(tool);
        display_args(tool);
        display_retvalue(tool);
        display_exit(tool);
    }
    return;
}
