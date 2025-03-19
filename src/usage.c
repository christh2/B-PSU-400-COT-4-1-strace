/*
** EPITECH PROJECT, 2024
** strace
** File description:
** usage and help
*/

#include "../include/strace.h"

void help(const char *exec)
{
    fprintf(stdout, "USAGE: %s [-s] [-p <pid>|<command>]\n", exec);
    exit(0);
}

void usage(const char *name)
{
    fprintf(stderr, "%s: must have PROG [ARGS] or -p PID\n\
    Try \'%s --help\' for more information.\n", name, name);
    exit(84);
}
