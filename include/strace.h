/*
** EPITECH PROJECT, 2024
** strace
** File description:
** strace include headers
*/

#ifndef _STRACE_
    #define _STRACE_

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    #include <sys/wait.h>
    #include <sys/user.h>
    #include <sys/ptrace.h>
    #include <ctype.h>

    #define EXIT_ERROR 84
    #define FLAG_NONE 0
    #define FLAG_S 1
    #define FLAG_P 2
    #define SYS_EXECVE 59

typedef struct sys_call_list {
    int idx;
    char *name;
    int nbr_arg;
    int ret;
    int ag1;
    int ag2;
    int ag3;
    int ag4;
    int ag5;
    int ag6;
} syscall_t;

typedef struct tools {
    int flag;
    char **env;
    char **av;
    int arg_pos;
    char *arg;
    int vars;
    int pid;
    struct user_regs_struct *regs;
} utils_t;


//Function prototypes:

void help(const char *exec);
void usage(const char *name);
int find_flag(int ac, char **av);
void check_av(char *av);
void my_strace(int ac, char **av, char **env);
void p_strace(utils_t *tool);
void basic_strace(utils_t *tool);
int count_env_vars(char **env);
int ret_arg_pos(int flag);
void display_syscalls(utils_t *tool);
void display_hexa(utils_t *tool);
void display_s(utils_t *tool);
void check_pid(char *arg);
void pid_strace(utils_t *tool);
void read_tracee_regs(pid_t pid, int *status, utils_t *tool);
void check_flag_arg(utils_t *tool);
#endif
