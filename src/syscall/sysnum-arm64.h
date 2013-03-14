/* -*- c-set-style: "K&R"; c-basic-offset: 8 -*-
 *
 * This file was generated thanks to the following command:
 *
 *     cpp -Iinclude -dM linux/arch/arm64/include/asm/unistd.h  | grep '#define __NR_' | sed s/__NR_/PR_/g | sort -u
 */

#include "syscall/sysnum-undefined.h"

#define PR_accept 202
#define PR_accept4 242
#define PR_acct 89
#define PR_add_key 217
#define PR_adjtimex 171
#define PR_arch_specific_syscall 244
#define PR_bind 200
#define PR_brk 214
#define PR_capget 90
#define PR_capset 91
#define PR_chdir 49
#define PR_chroot 51
#define PR_clock_adjtime 266
#define PR_clock_getres 114
#define PR_clock_gettime 113
#define PR_clock_nanosleep 115
#define PR_clock_settime 112
#define PR_clone 220
#define PR_close 57
#define PR_connect 203
#define PR_delete_module 106
#define PR_dup 23
#define PR_dup3 24
#define PR_epoll_create1 20
#define PR_epoll_ctl 21
#define PR_epoll_pwait 22
#define PR_eventfd2 19
#define PR_execve 221
#define PR_exit 93
#define PR_exit_group 94
#define PR_faccessat 48
#define PR_fadvise64 __NR3264_fadvise64
#define PR_fallocate 47
#define PR_fanotify_init 262
#define PR_fanotify_mark 263
#define PR_fchdir 50
#define PR_fchmod 52
#define PR_fchmodat 53
#define PR_fchown 55
#define PR_fchownat 54
#define PR_fcntl __NR3264_fcntl
#define PR_fdatasync 83
#define PR_fgetxattr 10
#define PR_flistxattr 13
#define PR_flock 32
#define PR_fremovexattr 16
#define PR_fsetxattr 7
#define PR_fstat __NR3264_fstat
#define PR_fstatfs __NR3264_fstatfs
#define PR_fsync 82
#define PR_ftruncate __NR3264_ftruncate
#define PR_futex 98
#define PR_get_mempolicy 236
#define PR_get_robust_list 100
#define PR_getcpu 168
#define PR_getcwd 17
#define PR_getdents64 61
#define PR_getegid 177
#define PR_geteuid 175
#define PR_getgid 176
#define PR_getgroups 158
#define PR_getitimer 102
#define PR_getpeername 205
#define PR_getpgid 155
#define PR_getpid 172
#define PR_getppid 173
#define PR_getpriority 141
#define PR_getresgid 150
#define PR_getresuid 148
#define PR_getrlimit 163
#define PR_getrusage 165
#define PR_getsid 156
#define PR_getsockname 204
#define PR_getsockopt 209
#define PR_gettid 178
#define PR_gettimeofday 169
#define PR_getuid 174
#define PR_getxattr 8
#define PR_init_module 105
#define PR_inotify_add_watch 27
#define PR_inotify_init1 26
#define PR_inotify_rm_watch 28
#define PR_io_cancel 3
#define PR_io_destroy 1
#define PR_io_getevents 4
#define PR_io_setup 0
#define PR_io_submit 2
#define PR_ioctl 29
#define PR_ioprio_get 31
#define PR_ioprio_set 30
#define PR_kcmp 272
#define PR_kexec_load 104
#define PR_keyctl 219
#define PR_kill 129
#define PR_lgetxattr 9
#define PR_linkat 37
#define PR_listen 201
#define PR_listxattr 11
#define PR_llistxattr 12
#define PR_lookup_dcookie 18
#define PR_lremovexattr 15
#define PR_lseek __NR3264_lseek
#define PR_lsetxattr 6
#define PR_madvise 233
#define PR_mbind 235
#define PR_migrate_pages 238
#define PR_mincore 232
#define PR_mkdirat 34
#define PR_mknodat 33
#define PR_mlock 228
#define PR_mlockall 230
#define PR_mmap __NR3264_mmap
#define PR_mount 40
#define PR_move_pages 239
#define PR_mprotect 226
#define PR_mq_getsetattr 185
#define PR_mq_notify 184
#define PR_mq_open 180
#define PR_mq_timedreceive 183
#define PR_mq_timedsend 182
#define PR_mq_unlink 181
#define PR_mremap 216
#define PR_msgctl 187
#define PR_msgget 186
#define PR_msgrcv 188
#define PR_msgsnd 189
#define PR_msync 227
#define PR_munlock 229
#define PR_munlockall 231
#define PR_munmap 215
#define PR_name_to_handle_at 264
#define PR_nanosleep 101
#define PR_newfstatat __NR3264_fstatat
#define PR_nfsservctl 42
#define PR_open_by_handle_at 265
#define PR_openat 56
#define PR_perf_event_open 241
#define PR_personality 92
#define PR_pipe2 59
#define PR_pivot_root 41
#define PR_ppoll 73
#define PR_prctl 167
#define PR_pread64 67
#define PR_preadv 69
#define PR_prlimit64 261
#define PR_process_vm_readv 270
#define PR_process_vm_writev 271
#define PR_pselect6 72
#define PR_ptrace 117
#define PR_pwrite64 68
#define PR_pwritev 70
#define PR_quotactl 60
#define PR_read 63
#define PR_readahead 213
#define PR_readlinkat 78
#define PR_readv 65
#define PR_reboot 142
#define PR_recvfrom 207
#define PR_recvmmsg 243
#define PR_recvmsg 212
#define PR_remap_file_pages 234
#define PR_removexattr 14
#define PR_renameat 38
#define PR_request_key 218
#define PR_restart_syscall 128
#define PR_rt_sigaction 134
#define PR_rt_sigpending 136
#define PR_rt_sigprocmask 135
#define PR_rt_sigqueueinfo 138
#define PR_rt_sigreturn 139
#define PR_rt_sigsuspend 133
#define PR_rt_sigtimedwait 137
#define PR_rt_tgsigqueueinfo 240
#define PR_sched_get_priority_max 125
#define PR_sched_get_priority_min 126
#define PR_sched_getaffinity 123
#define PR_sched_getparam 121
#define PR_sched_getscheduler 120
#define PR_sched_rr_get_interval 127
#define PR_sched_setaffinity 122
#define PR_sched_setparam 118
#define PR_sched_setscheduler 119
#define PR_sched_yield 124
#define PR_semctl 191
#define PR_semget 190
#define PR_semop 193
#define PR_semtimedop 192
#define PR_sendfile __NR3264_sendfile
#define PR_sendmmsg 269
#define PR_sendmsg 211
#define PR_sendto 206
#define PR_set_mempolicy 237
#define PR_set_robust_list 99
#define PR_set_tid_address 96
#define PR_setdomainname 162
#define PR_setfsgid 152
#define PR_setfsuid 151
#define PR_setgid 144
#define PR_setgroups 159
#define PR_sethostname 161
#define PR_setitimer 103
#define PR_setns 268
#define PR_setpgid 154
#define PR_setpriority 140
#define PR_setregid 143
#define PR_setresgid 149
#define PR_setresuid 147
#define PR_setreuid 145
#define PR_setrlimit 164
#define PR_setsid 157
#define PR_setsockopt 208
#define PR_settimeofday 170
#define PR_setuid 146
#define PR_setxattr 5
#define PR_shmat 196
#define PR_shmctl 195
#define PR_shmdt 197
#define PR_shmget 194
#define PR_shutdown 210
#define PR_sigaltstack 132
#define PR_signalfd4 74
#define PR_socket 198
#define PR_socketpair 199
#define PR_splice 76
#define PR_statfs __NR3264_statfs
#define PR_swapoff 225
#define PR_swapon 224
#define PR_symlinkat 36
#define PR_sync 81
#define PR_sync_file_range 84
#define PR_syncfs 267
#define PR_syscalls 273
#define PR_sysinfo 179
#define PR_syslog 116
#define PR_tee 77
#define PR_tgkill 131
#define PR_timer_create 107
#define PR_timer_delete 111
#define PR_timer_getoverrun 109
#define PR_timer_gettime 108
#define PR_timer_settime 110
#define PR_timerfd_create 85
#define PR_timerfd_gettime 87
#define PR_timerfd_settime 86
#define PR_times 153
#define PR_tkill 130
#define PR_truncate __NR3264_truncate
#define PR_umask 166
#define PR_umount2 39
#define PR_uname 160
#define PR_unlinkat 35
#define PR_unshare 97
#define PR_utimensat 88
#define PR_vhangup 58
#define PR_vmsplice 75
#define PR_wait4 260
#define PR_waitid 95
#define PR_write 64
#define PR_writev 66

/*
 * These following syscalls are 32/64 specific, this list was
 * generated thanks to the following command:
 *
 *     cpp -dM include/uapi/asm-generic/unistd.h  | grep '#define __NR3264_' | sed s/__NR/PR/g | sort -u
 */
#define __NR3264_fadvise64 223
#define __NR3264_fcntl 25
#define __NR3264_fstat 80
#define __NR3264_fstatat 79
#define __NR3264_fstatfs 44
#define __NR3264_ftruncate 46
#define __NR3264_lseek 62
#define __NR3264_mmap 222
#define __NR3264_sendfile 71
#define __NR3264_statfs 43
#define __NR3264_truncate 45

/*
 * These following syscalls do not exist on ARM.  Note that syscall
 * numbers from -1 to -10 are reserved for PRoot internal usage.
 */

#define PR__llseek ((word_t) -10)
#define PR__newselect ((word_t) -11)
#define PR__sysctl ((word_t) -12)
#define PR_access ((word_t) -13)
#define PR_afs_syscall ((word_t) -14)
#define PR_alarm ((word_t) -15)
#define PR_arch_prctl ((word_t) -16)
#define PR_arm_fadvise64_64 ((word_t) -17)
#define PR_arm_sync_file_range ((word_t) -18)
#define PR_bdflush ((word_t) -19)
#define PR_break ((word_t) -20)
#define PR_cacheflush ((word_t) -21)
#define PR_chmod ((word_t) -22)
#define PR_chown ((word_t) -23)
#define PR_chown32 ((word_t) -24)
#define PR_creat ((word_t) -25)
#define PR_create_module ((word_t) -26)
#define PR_dup2 ((word_t) -27)
#define PR_epoll_create ((word_t) -28)
#define PR_epoll_ctl_old ((word_t) -29)
#define PR_epoll_wait ((word_t) -30)
#define PR_epoll_wait_old ((word_t) -31)
#define PR_eventfd ((word_t) -32)
#define PR_fadvise64_64 ((word_t) -33)
#define PR_fchown32 ((word_t) -34)
#define PR_fcntl64 ((word_t) -35)
#define PR_fork ((word_t) -36)
#define PR_fstat64 ((word_t) -37)
#define PR_fstatat64 ((word_t) -38)
#define PR_fstatfs64 ((word_t) -39)
#define PR_ftime ((word_t) -40)
#define PR_ftruncate64 ((word_t) -41)
#define PR_futimesat ((word_t) -42)
#define PR_get_kernel_syms ((word_t) -43)
#define PR_get_thread_area ((word_t) -44)
#define PR_getdents ((word_t) -45)
#define PR_getegid32 ((word_t) -46)
#define PR_geteuid32 ((word_t) -47)
#define PR_getgid32 ((word_t) -48)
#define PR_getgroups32 ((word_t) -49)
#define PR_getpgrp ((word_t) -50)
#define PR_getpmsg ((word_t) -51)
#define PR_getresgid32 ((word_t) -52)
#define PR_getresuid32 ((word_t) -53)
#define PR_getuid32 ((word_t) -54)
#define PR_gtty ((word_t) -55)
#define PR_idle ((word_t) -56)
#define PR_inotify_init ((word_t) -57)
#define PR_ioperm ((word_t) -58)
#define PR_iopl ((word_t) -59)
#define PR_ipc ((word_t) -60)
#define PR_lchown ((word_t) -61)
#define PR_lchown32 ((word_t) -62)
#define PR_link ((word_t) -63)
#define PR_lock ((word_t) -64)
#define PR_lstat ((word_t) -65)
#define PR_lstat64 ((word_t) -66)
#define PR_mkdir ((word_t) -67)
#define PR_mknod ((word_t) -68)
#define PR_mmap2 ((word_t) -69)
#define PR_modify_ldt ((word_t) -70)
#define PR_mpx ((word_t) -71)
#define PR_nice ((word_t) -72)
#define PR_oldfstat ((word_t) -73)
#define PR_oldlstat ((word_t) -74)
#define PR_oldolduname ((word_t) -75)
#define PR_oldstat ((word_t) -76)
#define PR_olduname ((word_t) -77)
#define PR_open ((word_t) -78)
#define PR_pause ((word_t) -79)
#define PR_pciconfig_iobase ((word_t) -80)
#define PR_pciconfig_read ((word_t) -81)
#define PR_pciconfig_write ((word_t) -82)
#define PR_pipe ((word_t) -83)
#define PR_poll ((word_t) -84)
#define PR_prof ((word_t) -85)
#define PR_profil ((word_t) -86)
#define PR_putpmsg ((word_t) -87)
#define PR_query_module ((word_t) -88)
#define PR_readdir ((word_t) -89)
#define PR_readlink ((word_t) -90)
#define PR_recv ((word_t) -91)
#define PR_rename ((word_t) -92)
#define PR_rmdir ((word_t) -93)
#define PR_security ((word_t) -94)
#define PR_select ((word_t) -95)
#define PR_send ((word_t) -96)
#define PR_sendfile64 ((word_t) -97)
#define PR_set_thread_area ((word_t) -98)
#define PR_setfsgid32 ((word_t) -99)
#define PR_setfsuid32 ((word_t) -100)
#define PR_setgid32 ((word_t) -101)
#define PR_setgroups32 ((word_t) -102)
#define PR_setregid32 ((word_t) -103)
#define PR_setresgid32 ((word_t) -104)
#define PR_setresuid32 ((word_t) -105)
#define PR_setreuid32 ((word_t) -106)
#define PR_setuid32 ((word_t) -107)
#define PR_sgetmask ((word_t) -108)
#define PR_sigaction ((word_t) -109)
#define PR_signal ((word_t) -110)
#define PR_signalfd ((word_t) -111)
#define PR_sigpending ((word_t) -112)
#define PR_sigprocmask ((word_t) -113)
#define PR_sigreturn ((word_t) -114)
#define PR_sigsuspend ((word_t) -115)
#define PR_socketcall ((word_t) -116)
#define PR_ssetmask ((word_t) -117)
#define PR_stat ((word_t) -118)
#define PR_stat64 ((word_t) -119)
#define PR_statfs64 ((word_t) -120)
#define PR_stime ((word_t) -121)
#define PR_stty ((word_t) -122)
#define PR_symlink ((word_t) -123)
#define PR_sync_file_range2 ((word_t) -124)
#define PR_sysfs ((word_t) -125)
#define PR_time ((word_t) -126)
#define PR_truncate64 ((word_t) -127)
#define PR_tuxcall ((word_t) -128)
#define PR_ugetrlimit ((word_t) -129)
#define PR_ulimit ((word_t) -130)
#define PR_umount ((word_t) -131)
#define PR_unlink ((word_t) -132)
#define PR_uselib ((word_t) -133)
#define PR_ustat ((word_t) -134)
#define PR_utime ((word_t) -135)
#define PR_utimes ((word_t) -136)
#define PR_vfork ((word_t) -137)
#define PR_vm86 ((word_t) -138)
#define PR_vm86old ((word_t) -139)
#define PR_vserver ((word_t) -140)
#define PR_waitpid ((word_t) -141)