/*
** EPITECH PROJECT, 2021
** strace
** File description:
** syscalls table
*/

#ifndef SYSCALL_H_
    #define SYSCALL_H_
    #include <stdlib.h>
    #include "strace.h"
    #define NUM 1
    #define     STRING  2
    #define     UNSIGNED    3
    #define     VOID_P  (4)
    #define     CONST_VOID_P    (5)
    #define     STRUCT_P    (7)
    #define     STRUCT_STAT_P   (8)
    #define     STRUCT_FD_P     (9)
    #define     PVOID   (12)
    #define     CONST_KERNEL_SIGSET_T_P     (13)
    #define     KERNEL_SIGSET_T_P   (14)
    #define     VARGS   (16)
    #define     CONST_STRUCT_IOVEC_P    (17)
    #define     FD_SET_P    (18)
    #define     STRUCT_TIMEVAL_P    (19)
    #define     VOID    (20)
    #define     STRUCT_SHMID_DS_P   (23)
    #define     CONST_STRUCT_TIMESPEC_P     (24)
    #define     STRUCT_TIMESPEC_P   (25)
    #define     STRUCT_ITIMERVAL_P      (26)
    #define     CONST_STRUCT_ITIMERVAL_P        (28)
    #define     CONST_STRUCT_SOCKADDR_P     (31)
    #define     SOCKLEN_T       (32)
    #define     STRUCT_SOCKADDR_P       (33)
    #define     SOCKLEN_T_P     (34)
    #define     CONST_STRUCT_MSGHDR_P       (35)
    #define     STRUCT_MSGHDR_P     (36)
    #define     STRUCT_RUSAGE_P     (39)
    #define     STRUCT_UTSNAME_P        (40)
    #define     STRUCT_SEMBUF_P     (41)
    #define     STRUCT_MSQID_DS_P       (43)
    #define     STRUCT_LINUX_DIRENT_P       (44)
    #define     MODE_T      (49)
    #define     UID_T       (51)
    #define     GID_T       (52)
    #define     STRUCT_TIMEZONE_P       (53)
    #define     STRUCT_RLIMIT_P     (54)
    #define     CLOCK_T     (55)
    #define     STRUCT_TMS_P        (56)
    #define     ENUM_____REQUEST        (57)
    #define     CONST_GID_T_P       (58)
    #define     UID_T_P     (59)
    #define     GID_T_P     (60)
    #define     CAP_USER_HEADER_T       (61)
    #define     CAP_USER_DATA_T     (62)
    #define     CONST_CAP_USER_DATA_T       (63)
    #define     CONST_STACK_T_P     (64)
    #define     STACK_T_P       (65)
    #define     CONST_STRUCT_UTIMBUF_P      (66)
    #define     DEV_T       (67)
    #define     STRUCT_STATFS_P     (68)
    #define     ID_T        (69)
    #define     CONST_STRUCT_SCHED_PARAM_P      (70)
    #define     STRUCT_SCHED_PARAM_P        (71)
    #define     STRUCT_TIMESPEC_P_      (72)
    #define     STRUCT____ARGS_P        (73)
    #define     STRUCT_TIMEX_P      (74)
    #define     CONST_STRUCT_RLIMIT_P       (75)
    #define     CONST_STRUCT_TIMEVAL_P      (76)
    #define     CONST_STRUCT_TIMEZONE_P     (77)
    #define     CADDR_T     (78)
    #define     STRUCT_KERNEL_SYM_P     (79)
    #define     NUM_P       (80)
    #define     STRUCT_NFSCTL_ARG_P     (81)
    #define     UNION_NFSCTL_RES_P      (82)
    #define     OFF64_T     (83)
    #define     TIME_T      (84)
    #define     _T___T_P        (85)
    #define     CONST_CPU_SET_T_P       (86)
    #define     CPU_SET_T_P     (87)
    #define     STRUCT_USER_DESC_P      (88)
    #define     AIO_CONTEXT_T_P     (90)
    #define     AIO_CONTEXT_T       (91)
    #define     STRUCT_IO_EVENT_P       (92)
    #define     STRUCT_IOCB_P       (93)
    #define     U64     (94)
    #define     STRUCT_LINUX_DIRENT64_P     (95)
    #define     CLOCKID_T       (96)
    #define     STRUCT_SIGEVENT_P       (97)
    #define     TIMER_T_P       (98)
    #define     TIMER_T     (99)
    #define     CONST_STRUCT_ITIMERSPEC_P       (100)
    #define     STRUCT_ITIMERSPEC_P     (101)
    #define     STRUCT_EPOLL_EVENT_P        (102)
    #define     CONST_STRUCT_TIMEVAL        (103)
    #define     CONST_UNSIGNED_P        (104)
    #define     UNSIGNED_P      (105)
    #define     MQD_T       (106)
    #define     CONST_STRUCT_SIGEVENT_P     (108)
    #define     STRUCT_MQ_ATTR_P        (109)
    #define     STRUCT_KEXEC_SEGMENT_P      (110)
    #define     IDTYPE_T        (111)
    #define     SIGINFO_T_P     (112)
    #define     KEY_SERIAL_T        (113)
    #define     UNUM32_T        (114)
    #define     STRUCT_POLLFD_P     (115)
    #define     CONST_SIGSET_T_P        (116)
    #define     STRUCT_ROBUST_LIST_HEAD_P       (117)
    #define     LNUM_P      (118)
    #define     CONST_NUM_P     (119)
    #define     CONST_STRUCT_TIMESPEC       (120)
    #define     STRUCT_PERF_EVENT_ATTR_P        (121)
    #define     STRUCT_MMSGHDR_P        (122)
    #define     UNUM64_T        (123)
    #define     STRUCT_FILE_HANDLE_P        (124)
    #define     STRUCT__CACHE_P     (126)
    #define     STRUCT_SCHED_ATTR_P     (127)
    #define     UNION__ATTR_P       (128)
    #define     PTR     (129)


static syscall_t table[330] = {{0, "read", 3, NUM, NUM, STRING, NUM, 0, 0, 0},
    {1, "write", 3, NUM, NUM, STRING, NUM, 0, 0, 0},
    {2, "open", 2, NUM, STRING, NUM, 0, 0, 0, 0},
    {3, "close", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {4, "stat", 2, NUM, STRING, PTR, 0, 0, 0, 0},
    {5, "fstat", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {6, "lstat", 2, NUM, STRING, PTR, 0, 0, 0, 0},
    {7, "poll", 3, NUM, PTR, NUM, NUM, 0, 0, 0},
    {8, "lseek", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {9, "mmap", 6, PTR, PTR, NUM, NUM, NUM, NUM, NUM},
    {10, "mprotect", 3, NUM, PTR, NUM, NUM, 0, 0, 0},
    {11, "munmap", 2, NUM, PTR, NUM, 0, 0, 0, 0},
    {12, "brk", 1, NUM, PTR, 0, 0, 0, 0, 0},
    {13, "rt_sigaction", 4, NUM, NUM, PTR, PTR, 0, 0, 0},
    {14, "rt_sigprocmask", 4, NUM, NUM, PTR,
        PTR, NUM, 0, 0},
    {15, "rt_sigreturn", 6, NUM, PTR, PTR, PTR, PTR, PTR, PTR},
    {16, "ioctl", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {17, "pread64", 4, NUM, NUM, PTR, NUM, NUM, 0, 0},
    {18, "pwrite64", 4, NUM, NUM, PTR, NUM, NUM, 0, 0},
    {19, "readv", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {20, "writev", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {21, "access", 2, NUM, PTR, NUM, 0, 0, 0, 0},
    {22, "pipe", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {23, "select", 5, NUM, NUM, PTR, PTR, PTR, PTR, 0},
    {24, "sched_yield", 0, NUM, 0, 0, 0, 0, 0, 0},
    {25, "mremap", 5, NUM, NUM, NUM, NUM, NUM, NUM, 0},
    {26, "msync", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {27, "mincore", 3, NUM, NUM, NUM, STRING, 0, 0, 0},
    {28, "madvise", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {29, "shmget", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {30, "shmat", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {31, "shmctl", 3, NUM, NUM, NUM, PTR, 0, 0, 0},
    {32, "dup", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {33, "dup2", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {34, "pause", 1, NUM, 0, 0, 0, 0, 0, 0},
    {35, "nanosleep", 2, NUM, PTR, PTR, 0, 0, 0, 0},
    {36, "getitimer", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {37, "alarm", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {38, "setitimer", 3, NUM, NUM, PTR, PTR, 0, 0, 0},
    {39, "getpid", 0, NUM, 0, 0, 0, 0, 0, 0},
    {40, "sendfile", 4, NUM, NUM, NUM, PTR, NUM, 0, 0},
    {41, "socket", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {42, "connect", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {43, "accept", 3, NUM, NUM, PTR, PTR, 0, 0, 0},
    {44, "sendto", 6, NUM, NUM, PTR, NUM, NUM, PTR, NUM},
    {45, "recvfrom", 6, NUM, NUM, PTR, NUM, NUM, PTR, PTR},
    {46, "sendmsg", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {47, "recvmsg", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {48, "shutdown", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {49, "bind", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {50, "listen", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {51, "getsockname", 3, NUM, NUM, PTR, PTR, 0, 0, 0},
    {52, "getpeername", 3, NUM, NUM, PTR, PTR, 0, 0, 0},
    {53, "socketpair", 4, NUM, NUM, NUM, NUM, NUM, 0, 0},
    {54, "setsockopt", 5, NUM, NUM, NUM, NUM, PTR, NUM, 0},
    {55, "getsockopt", 5, NUM, NUM, NUM, NUM, PTR, PTR, 0},
    {56, "clone", 5, NUM, NUM, NUM, PTR, PTR, NUM, 0},
    {57, "fork", 0, NUM, 0, 0, 0, 0, 0, 0},
    {58, "vfork", 0, NUM, 0, 0, 0, 0, 0, 0},
    {59, "execve", 3, NUM, STRING, PTR, PTR, 0, 0, 0},
    {60, "exit", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {61, "wait4", 4, NUM, NUM, PTR, NUM, PTR, 0, 0},
    {62, "kill", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {63, "uname", 1, NUM, PTR, 0, 0, 0, 0, 0},
    {64, "semget", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {65, "semop", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {66, "semctl", 4, NUM, NUM, NUM, NUM, NUM, 0, 0},
    {67, "shmdt", 1, NUM, PTR, 0, 0, 0, 0, 0},
    {68, "msgget", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {69, "msgsnd", 4, NUM, NUM, PTR, NUM, NUM, 0, 0},
    {70, "msgrcv", 5, NUM, NUM, PTR, NUM, NUM, NUM, 0},
    {71, "msgctl", 3, NUM, NUM, NUM, PTR, 0, 0, 0},
    {72, "fcntl", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {73, "flock", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {74, "fsync", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {75, "fdatasync", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {76, "truncate", 2, NUM, STRING, NUM, 0, 0, 0, 0},
    {77, "ftruncate", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {78, "getdents", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {79, "getcwd", 2, NUM, STRING, NUM, 0, 0, 0, 0},
    {80, "chdir", 1, NUM, STRING, 0, 0, 0, 0, 0},
    {81, "fchdir", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {82, "rename", 2, NUM, STRING, STRING, 0, 0, 0, 0},
    {83, "mkdir", 2, NUM, STRING, NUM, 0, 0, 0, 0},
    {84, "rmdir", 1, NUM, STRING, 0, 0, 0, 0, 0},
    {85, "creat", 2, NUM, STRING, NUM, 0, 0, 0, 0},
    {86, "link", 2, NUM, STRING, STRING, 0, 0, 0, 0},
    {87, "unlink", 1, NUM, STRING, 0, 0, 0, 0, 0},
    {88, "symlink", 2, NUM, STRING, STRING, 0, 0, 0, 0},
    {89, "readlink", 3, NUM, STRING, STRING, NUM, 0, 0, 0},
    {90, "chmod", 2, NUM, STRING, NUM, 0, 0, 0, 0},
    {91, "fchmod", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {92, "chown", 3, NUM, STRING, NUM, NUM, 0, 0, 0},
    {93, "fchown", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {94, "lchown", 3, NUM, STRING, NUM, NUM, 0, 0, 0},
    {95, "umask", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {96, "gettimeofday", 2, NUM, PTR, PTR, 0, 0, 0, 0},
    {97, "getrlimit", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {98, "getrusage", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {99, "sysinfo", 1, NUM, PTR, 0, 0, 0, 0, 0},
    {100, "times", 1, NUM, PTR, 0, 0, 0, 0, 0},
    {101, "ptrace", 4, NUM, NUM, NUM, NUM, NUM, 0, 0},
    {102, "getuid", 0, NUM, 0, 0, 0, 0, 0, 0},
    {103, "syslog", 3, NUM, NUM, STRING, NUM, 0, 0, 0},
    {104, "getgid", 0, NUM, 0, 0, 0, 0, 0, 0},
    {105, "setuid", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {106, "setgid", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {107, "geteuid", 0, NUM, 0, 0, 0, 0, 0, 0},
    {108, "getegid", 0, NUM, 0, 0, 0, 0, 0, 0},
    {109, "setpgid", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {110, "getppid", 0, NUM, 0, 0, 0, 0, 0, 0},
    {111, "getpgrp", 0, NUM, 0, 0, 0, 0, 0, 0},
    {112, "setsid", 0, NUM, 0, 0, 0, 0, 0, 0},
    {113, "setreuid", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {114, "setregid", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {115, "getgroups", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {116, "setgroups", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {117, "setresuid", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {118, "getresuid", 3, NUM, PTR, PTR, PTR, 0, 0, 0},
    {119, "setresgid", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {120, "getresgid", 3, NUM, PTR, PTR, PTR, 0, 0, 0},
    {121, "getpgid", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {122, "setfsuid", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {123, "setfsgid", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {124, "getsid", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {125, "capget", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {126, "capset", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {127, "rt_sigpending", 2, NUM, PTR, 0, 0, 0, 0, 0},
    {128, "rt_sigtimedwait", 4, NUM, PTR, PTR, PTR, NUM, 0, 0},
    {129, "rt_sigqueueinfo", 2, NUM, PTR, NUM, 0, 0, 0, 0},
    {130, "rt_sigsuspend", 2, NUM, PTR, NUM, 0, 0, 0, 0},
    {131, "sigaltstack", 2, NUM, PTR, PTR, 0, 0, 0, 0},
    {132, "utime", 2, NUM, STRING, PTR, 0, 0, 0, 0},
    {133, "mknod", 3, NUM, STRING, NUM, NUM, 0, 0, 0},
    {134, "uselib", 1, NUM, STRING, 0, 0, 0, 0, 0},
    {135, "personality", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {136, "ustat", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {137, "statfs", 2, NUM, STRING, PTR, 0, 0, 0, 0},
    {138, "fstatfs", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {139, "sysfs", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {140, "getpriority", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {141, "setpriority", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {142, "sched_setparam", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {143, "sched_getparam", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {144, "sched_setscheduler", 3, NUM, NUM, NUM, PTR, 0, 0, 0},
    {145, "sched_getscheduler", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {146, "sched_get_priority_max", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {147, "sched_get_priority_min", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {148, "sched_rr_get_interval", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {149, "mlock", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {150, "munlock", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {151, "mlockall", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {152, "munlockall", 0, NUM, 0, 0, 0, 0, 0, 0},
    {153, "vhangup", 0, NUM, 0, 0, 0, 0, 0, 0},
    {154, "modify_ldt", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {155, "pivot_root", 2, NUM, STRING, STRING, 0, 0, 0, 0},
    {156, "_sysctl", 1, NUM, PTR, 0, 0, 0, 0, 0},
    {157, "prctl", 5, NUM, NUM, NUM, NUM, NUM, NUM, 0},
    {158, "arch_prctl", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {159, "adjtimex", 1, NUM, PTR, 0, 0, 0, 0, 0},
    {160, "setrlimit", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {161, "chroot", 1, NUM, STRING, 0, 0, 0, 0, 0},
    {162, "sync", 0, VOID, 0, 0, 0, 0, 0, 0},
    {163, "acct", 1, NUM, STRING, 0, 0, 0, 0, 0},
    {164, "settimeofday", 2, NUM, PTR, PTR, 0, 0, 0, 0},
    {165, "mount", 5, NUM, STRING, STRING, STRING, NUM, PTR, 0},
    {166, "umount2", 2, NUM, STRING, NUM, 0, 0, 0, 0},
    {167, "swapon", 2, NUM, STRING, NUM, 0, 0, 0, 0},
    {168, "swapoff", 1, NUM, STRING, 0, 0, 0, 0, 0},
    {169, "reboot", 4, NUM, NUM, NUM, NUM, PTR, 0, 0},
    {170, "sethostname", 2, NUM, STRING, NUM, 0, 0, 0, 0},
    {171, "setdomainname", 2, NUM, STRING, NUM, 0, 0, 0, 0},
    {172, "iopl", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {173, "ioperm", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {174, "create_module", 2, NUM, STRING, NUM, 0, 0, 0, 0},
    {175, "init_module", 3, NUM, PTR, NUM, STRING, 0, 0, 0},
    {176, "delete_module", 2, NUM, STRING, NUM, 0, 0, 0, 0},
    {177, "get_kernel_syms", 1, NUM, PTR, 0, 0, 0, 0, 0},
    {178, "query_module", 5, NUM, STRING, NUM, PTR, NUM, PTR, 0},
    {179, "quotactl", 4, NUM, NUM, STRING, NUM, NUM, 0, 0},
    {180, "nfsservctl", 3, NUM, NUM, PTR, PTR, 0, 0, 0},
    {181, "getpmsg", 0, NUM, 0, 0, 0, 0, 0, 0},
    {182, "putpmsg", 0, NUM, 0, 0, 0, 0, 0, 0},
    {183, "afs_syscall", 0, NUM, 0, 0, 0, 0, 0, 0},
    {184, "tuxcall", 0, NUM, 0, 0, 0, 0, 0, 0},
    {185, "security", 0, NUM, 0, 0, 0, 0, 0, 0},
    {186, "gettid", 0, NUM, 0, 0, 0, 0, 0, 0},
    {187, "readahead", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {188, "setxattr", 5, NUM, STRING, STRING, STRING, NUM, NUM, 0},
    {189, "lsetxattr", 5, NUM, STRING, STRING, STRING, NUM, NUM, 0},
    {190, "fsetxattr", 5, NUM, NUM, STRING, STRING, NUM, NUM, 0},
    {191, "getxattr", 4, NUM, STRING, STRING, STRING, NUM, 0, 0},
    {192, "lgetxattr", 4, NUM, STRING, STRING, STRING, NUM, 0, 0},
    {193, "fgetxattr", 4, NUM, NUM, STRING, STRING, NUM, 0, 0},
    {194, "listxattr", 3, NUM, STRING, STRING, NUM, 0, 0, 0},
    {195, "llistxattr", 3, NUM, STRING, STRING, NUM, 0, 0, 0},
    {196, "flistxattr", 3, NUM, NUM, STRING, NUM, 0, 0, 0},
    {197, "removexattr", 2, NUM, STRING, STRING, 0, 0, 0, 0},
    {198, "lremovexattr", 2, NUM, STRING, STRING, 0, 0, 0, 0},
    {199, "fremovexattr", 2, NUM, NUM, STRING, 0, 0, 0, 0},
    {200, "tkill", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {201, "time", 1, NUM, PTR, 0, 0, 0, 0, 0},
    {202, "futex", 6, NUM, PTR, NUM, NUM, PTR, PTR, NUM},
    {203, "sched_setaffinity", 3, NUM, NUM, NUM, PTR, 0, 0, 0},
    {204, "sched_getaffinity", 3, NUM, NUM, NUM, PTR, 0, 0, 0},
    {205, "set_thread_area", 1, NUM, PTR, 0, 0, 0, 0, 0},
    {206, "io_setup", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {207, "io_destroy", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {208, "io_getevents", 5, NUM, NUM, NUM, NUM, PTR, PTR, 0},
    {209, "io_submit", 3, NUM, NUM, NUM, PTR, 0, 0, 0},
    {210, "io_cancel", 3, NUM, NUM, PTR, PTR, 0, 0, 0},
    {211, "get_thread_area", 1, NUM, PTR, 0, 0, 0, 0, 0},
    {212, "lookup_dcookie", 3, NUM, NUM, STRING, NUM, 0, 0, 0},
    {213, "epoll_create", 0, NUM, 0, 0, 0, 0, 0, 0},
    {214, "epoll_ctl_old", 0, NUM, 0, 0, 0, 0, 0, 0},
    {215, "epoll_wait_old", 0, NUM, 0, 0, 0, 0, 0, 0},
    {216, "remap_file_pages", 5, NUM, NUM, NUM, NUM, NUM, NUM, 0},
    {217, "getdents64", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {218, "set_tid_address", 1, NUM, PTR, 0, 0, 0, 0, 0},
    {219, "restart_syscall", 0, NUM, 0, 0, 0, 0, 0, 0},
    {220, "semtimedop", 4, NUM, NUM, PTR, NUM, PTR, 0, 0},
    {221, "fadvise64", 4, NUM, NUM, NUM, NUM, NUM, 0, 0},
    {222, "timer_create", 3, NUM, NUM, PTR, PTR, 0, 0, 0},
    {223, "timer_settime", 4, NUM, NUM, NUM, PTR, PTR, 0, 0},
    {224, "timer_gettime", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {225, "timer_getoverrun", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {226, "timer_delete", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {227, "clock_settime", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {228, "clock_gettime", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {229, "clock_getres", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {230, "clock_nanosleep", 4, NUM, NUM, NUM, PTR, PTR, 0, 0},
    {231, "exit_group", 1, VOID, NUM, 0, 0, 0, 0, 0},
    {232, "epoll_wait", 4, NUM, NUM, PTR, NUM, NUM, 0, 0},
    {233, "epoll_ctl", 4, NUM, NUM, NUM, NUM, PTR, 0, 0},
    {234, "tgkill", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {235, "utimes", 2, NUM, STRING, PTR, 0, 0, 0, 0},
    {236, "vserver", 0, NUM, 0, 0, 0, 0, 0, 0},
    {237, "mbind", 6, NUM, NUM, NUM, NUM, PTR, NUM, NUM},
    {238, "set_mempolicy", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {239, "get_mempolicy", 5, NUM, PTR, PTR, NUM, NUM, NUM, 0},
    {240, "mq_open", 2, NUM, STRING, NUM, NUM, PTR, 0, 0},
    {241, "mq_unlink", 1, NUM, STRING, 0, 0, 0, 0, 0},
    {242, "mq_timedsend", 5, NUM, NUM, STRING, NUM, NUM, PTR, 0},
    {243, "mq_timedreceive", 5, NUM, NUM, STRING, NUM, PTR, PTR, 0},
    {244, "mq_notify", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {245, "mq_getsetattr", 3, NUM, NUM, PTR, PTR, 0, 0, 0},
    {246, "kexec_load", 4, NUM, NUM, NUM, PTR, NUM, 0, 0},
    {247, "waitid", 4, NUM, NUM, NUM, PTR, NUM, 0, 0},
    {248, "add_key", 5, NUM, STRING, STRING, PTR, NUM, NUM, 0},
    {249, "request_key", 4, NUM, STRING, STRING, STRING, NUM, 0, 0},
    {250, "keyctl", 5, NUM, NUM, NUM, NUM, NUM, NUM, 0},
    {251, "ioprio_set", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {252, "ioprio_get", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {253, "inotify_init", 0, NUM, 0, 0, 0, 0, 0, 0},
    {254, "inotify_add_watch", 3, NUM, NUM, STRING, NUM, 0, 0, 0},
    {255, "inotify_rm_watch", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {256, "migrate_pages", 4, NUM, NUM, NUM, PTR, PTR, 0, 0},
    {257, "openat", 3, NUM, NUM, STRING, NUM, 0, 0, 0},
    {258, "mkdirat", 3, NUM, NUM, STRING, NUM, 0, 0, 0},
    {259, "mknodat", 4, NUM, NUM, STRING, NUM, NUM, 0, 0},
    {260, "fchownat", 5, NUM, NUM, STRING, NUM, NUM, NUM, 0},
    {261, "futimesat", 3, NUM, NUM, STRING, PTR, 0, 0, 0},
    {262, "newfstatat", 4, NUM, NUM, STRING, PTR, NUM, 0, 0},
    {263, "unlinkat", 3, NUM, NUM, STRING, NUM, 0, 0, 0},
    {264, "renameat", 4, NUM, NUM, STRING, NUM, STRING, 0, 0},
    {265, "linkat", 5, NUM, NUM, STRING, NUM, STRING, NUM, 0},
    {266, "symlinkat", 3, NUM, STRING, NUM, STRING, 0, 0, 0},
    {267, "readlinkat", 4, NUM, NUM, STRING, STRING, NUM, 0, 0},
    {268, "fchmodat", 3, NUM, NUM, STRING, NUM, 0, 0, 0},
    {269, "faccessat", 4, NUM, NUM, STRING, NUM, NUM, 0, 0},
    {270, "pselect6", 6, NUM, PTR, PTR, PTR, PTR, PTR, 0},
    {271, "ppoll", 5, NUM, PTR, NUM, PTR, PTR, NUM, 0},
    {272, "unshare", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {273, "set_robust_list", 2, NUM, PTR, NUM, 0, 0, 0, 0},
    {274, "get_robust_list", 3, NUM, NUM, PTR, PTR, 0, 0, 0},
    {275, "splice", 6, NUM, NUM, PTR, NUM, PTR, NUM, NUM},
    {276, "tee", 4, NUM, NUM, NUM, NUM, NUM, 0, 0},
    {277, "sync_file_range", 4, NUM, NUM, NUM, NUM, NUM, 0, 0},
    {278, "vmsplice", 4, NUM, NUM, PTR, NUM, NUM, 0, 0},
    {279, "move_pages", 6, NUM, NUM, NUM, PTR, PTR, PTR, NUM},
    {280, "utimensat", 4, NUM, NUM, STRING, PTR, NUM, 0, 0},
    {281, "epoll_pwait", 6, NUM, NUM, PTR, NUM, NUM, PTR, NUM},
    {282, "signalfd", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {283, "timerfd_create", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {284, "eventfd", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {285, "fallocate", 4, NUM, NUM, NUM, NUM, NUM, 0, 0},
    {286, "timerfd_settime", 4, NUM, NUM, NUM, PTR, PTR, 0, 0},
    {287, "timerfd_gettime", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {288, "accept4", 4, NUM, NUM, PTR, PTR, NUM, 0, 0},
    {289, "signalfd4", 4, NUM, PTR, NUM, NUM, 0, 0, 0},
    {290, "eventfd2", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {291, "epoll_create1", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {292, "dup3", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {293, "pipe2", 2, NUM, PTR, NUM, 0, 0, 0, 0},
    {294, "inotify_init1", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {295, "preadv", 5, NUM, NUM, PTR, NUM, NUM, NUM, 0},
    {296, "pwritev", 4, NUM, NUM, PTR, NUM, NUM, 0, 0},
    {297, "rt_tgsigqueueinfo", 4, NUM, NUM, NUM, PTR, 0, 0, 0},
    {298, "perf_event_open", 5, NUM, PTR, NUM, NUM, NUM, NUM, 0},
    {299, "recvmmsg", 5, NUM, NUM, PTR, NUM, NUM, PTR, 0},
    {300, "fanotify_init", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {301, "fanotify_mark", 5, NUM, NUM, NUM, NUM, NUM, STRING, 0},
    {302, "prlimit64", 4, NUM, NUM, PTR, PTR, 0, 0, 0},
    {303, "name_to_handle_at", 5, NUM, NUM, STRING, PTR, PTR, NUM, 0},
    {304, "open_by_handle_at", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {305, "clock_adjtime", 2, NUM, NUM, PTR, 0, 0, 0, 0},
    {306, "syncfs", 1, NUM, NUM, 0, 0, 0, 0, 0},
    {307, "sendmmsg", 4, NUM, NUM, PTR, NUM, NUM, 0, 0},
    {308, "setns", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {309, "getcpu", 3, NUM, PTR, PTR, PTR, 0, 0, 0},
    {310, "process_vm_readv", 6, NUM, NUM, PTR, NUM,
        PTR, NUM, NUM},
    {311, "process_vm_writev", 6, NUM, NUM, PTR, NUM,
        PTR, NUM, NUM},
    {312, "kcmp", 5, NUM, NUM, NUM, NUM, NUM, NUM, 0},
    {313, "finit_module", 3, NUM, NUM, STRING, NUM, 0, 0, 0},
    {314, "sched_setattr", 3, NUM, NUM, PTR, NUM, 0, 0,
        0},
    {315, "sched_getattr", 4, NUM, NUM, PTR, NUM,
        NUM, 0, 0},
    {316, "renameat2", 5, NUM, NUM, STRING, NUM, STRING, NUM, 0},
    {317, "seccomp", 3, NUM, NUM, NUM, STRING, 0, 0, 0},
    {318, "getrandom", 3, NUM, PTR, NUM, NUM, 0, 0, 0},
    {319, "memfd_create", 2, NUM, STRING, NUM, 0, 0, 0, 0},
    {320, "kexec_file_load", 5, NUM, NUM, NUM, NUM, STRING, NUM, 0},
    {321, "bpf", 3, NUM, NUM, PTR, NUM, 0, 0, 0},
    {322, "execveat", 5, NUM, NUM, STRING, STRING, STRING, NUM, 0},
    {323, "userfaultfd", 0, NUM, 0, 0, 0, 0, 0, 0},
    {324, "membarrier", 2, NUM, NUM, NUM, 0, 0, 0, 0},
    {325, "mlock2", 3, NUM, NUM, NUM, NUM, 0, 0, 0},
    {326, "copy_file_range", 6, NUM, NUM, PTR, NUM, PTR, NUM, NUM},
    {327, "preadv2", 6, NUM, NUM, PTR, NUM, NUM, NUM, NUM},
    {328, "pwritev2", 6, NUM, NUM, PTR, NUM, NUM, NUM, NUM},
    {-1, NULL, 0, 0, 0, 0, 0, 0, 0, 0}};

#endif
// /* !SYSCALL_H_ */ 22 79 130 fonct sysclt(156); 251; commence sur le 304;
