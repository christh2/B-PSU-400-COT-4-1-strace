/*
** EPITECH PROJECT, 2024
** strace
** File description:
** implement a simpler strace program
*/

#include "../include/strace.h"

void my_strace(int ac, char **av, char **env)
{
    utils_t tool;

    tool.flag = find_flag(ac, av);
    tool.av = av;
    check_flag_arg(&tool);
    tool.arg_pos = ret_arg_pos(tool.flag);
    tool.arg = av[tool.arg_pos];
    tool.env = env;
    tool.vars = count_env_vars(tool.env);
    if (tool.flag == 2 || tool.flag == 3) {
        check_pid(av[tool.arg_pos]);
        tool.pid = atoi(av[tool.arg_pos]);
        pid_strace(&tool);
    } else {
        basic_strace(&tool);
    }
    return;
}

int main(int ac, char **av, char **env)
{
    if (ac == 1)
        usage("./strace");
    if (ac >= 2 && strcmp(av[1], "--help") == 0)
        help("./strace");
    my_strace(ac, av, env);
    return 0;
}
