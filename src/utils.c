/*
** EPITECH PROJECT, 2024
** strace
** File description:
** implement a simpler strace program
*/

#include "../include/strace.h"

int count_env_vars(char **env)
{
    int counted = 0;

    for (int i = 0; env[i]; i++) {
        counted++;
    }
    return counted;
}
