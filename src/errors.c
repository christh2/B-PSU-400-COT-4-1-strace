/*
** EPITECH PROJECT, 2024
** strace
** File description:
** implement a simpler strace program
*/

#include "../include/strace.h"

void check_av(char *av)
{
    if (access(av, F_OK) == -1) {
        fprintf(stderr, "./strace: Cannot find executable '%s'\n", av);
        exit(EXIT_ERROR);
    }
    return;
}
