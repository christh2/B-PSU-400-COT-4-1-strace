/*
** EPITECH PROJECT, 2024
** strace
** File description:
** implement a simpler strace program
*/

#include "../include/strace.h"

int find_flag(int ac, char **av)
{
    int flag = 0;

    for (int i = 1; i < ac; i++) {
        if (av[i] && strcmp(av[i], "-s") == 0)
            flag += FLAG_S;
        if (av[i] && strcmp(av[i], "-p") == 0)
            flag += FLAG_P;
        flag += FLAG_NONE;
    }
    return flag;
}

int ret_arg_pos(int flag)
{
    int pos;

    if (flag == FLAG_NONE) {
        pos = 1;
    }
    if (flag == 1 || flag == 2) {
        pos = 2;
    }
    if (flag == 3) {
        pos = 3;
    }
    return pos;
}

void check_flag_arg(utils_t *tool)
{
    if ((tool->flag == 1 && !tool->av[2]) || (tool->flag == 2 && !tool->av[2])
    || (tool->flag == 3 && !tool->av[3])) {
        fprintf(stderr, "Not enough argument\n");
        exit(EXIT_ERROR);
    }
    return;
}
