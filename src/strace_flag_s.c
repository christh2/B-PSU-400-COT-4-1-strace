/*
** EPITECH PROJECT, 2024
** strace
** File description:
** implement a simpler strace program
*/

#include "../include/strace.h"
#include "../include/syscall.h"

char *read_d(long addr, pid_t pid)
{
    char *buffer = (char *)malloc(sizeof(char) * 1024);
    int offset = 0;
    long rd_word = 0;

    while (1) {
        if (offset > 1024)
            buffer = realloc(buffer, sizeof(buffer) * 2);
        rd_word = ptrace(PTRACE_PEEKTEXT, pid, addr + offset, NULL);
        if ((int)rd_word == -1)
            return NULL;
        memcpy(buffer + offset, &rd_word, sizeof(long));
        if (memchr(&rd_word, 0, sizeof(long)) != NULL)
            break;
        offset += 1;
    }
    return buffer;
}

void display_s(utils_t *tool)
{
    int times = table[tool->regs->orig_rax].nbr_arg;
    unsigned long long regs_values[6] = {tool->regs->rdi, tool->regs->rsi,
    tool->regs->rdx, tool->regs->rcx, tool->regs->r8, tool->regs->r9};
    int list_args[6] = {table[tool->regs->orig_rax].ag1,
    table[tool->regs->orig_rax].ag2, table[tool->regs->orig_rax].ag3,
    table[tool->regs->orig_rax].ag4, table[tool->regs->orig_rax].ag5,
    table[tool->regs->orig_rax].ag6};

    if (tool->regs->orig_rax == SYS_EXECVE)
        return;
    for (int i = 0; i < times; i++) {
        if (list_args[i] == STRING)
            fprintf(stderr, "\"%s\"", read_d((long)regs_values[i], tool->pid));
        if (list_args[i] == PTR)
            fprintf(stderr, "0x%llx", regs_values[i]);
        if (list_args[i] != STRING && list_args[i] != 0)
            fprintf(stderr, "%lld", regs_values[i]);
        if (i + 1 < times)
            fprintf(stderr, ", ");
    }
}
