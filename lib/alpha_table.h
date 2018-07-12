/* alpha_table.h --
 * Copyright 2005-07,2010-12,2014,2016 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *      Steve Grubb <sgrubb@redhat.com>
 */

_S(0, "osf_syscall")
_S(1, "exit")
_S(2, "fork")
_S(3, "read")
_S(4, "write")
_S(5, "osf_old_open")
_S(6, "close")
_S(7, "osf_wait4")
_S(8, "osf_old_creat")
_S(9, "link")
_S(10, "unlink")
_S(11, "osf_execve")
_S(12, "chdir")
_S(13, "fchdir")
_S(14, "mknod")
_S(15, "chmod")
_S(16, "chown")
_S(17, "brk")
_S(18, "osf_getfsstat")
_S(19, "lseek")
_S(20, "getxpid")
_S(21, "osf_mount")
_S(22, "umount")
_S(23, "setuid")
_S(24, "getxuid")
_S(25, "exec_with_loader")
_S(26, "ptrace")
_S(27, "osf_nrecvmsg")
_S(28, "osf_nsendmsg")
_S(29, "osf_nrecvfrom")
_S(30, "osf_naccept")
_S(31, "osf_ngetpeername")
_S(32, "osf_ngetsockname")
_S(33, "access")
_S(34, "osf_chflags")
_S(35, "osf_fchflags")
_S(36, "sync")
_S(37, "kill")
_S(38, "osf_old_stat")
_S(39, "setpgid")
_S(40, "osf_old_lstat")
_S(41, "dup")
_S(42, "pipe")
_S(43, "osf_set_program_attributes")
_S(44, "osf_profil")
_S(45, "open")
_S(46, "osf_old_sigaction")
_S(47, "getxgid")
_S(48, "osf_sigprocmask")
_S(49, "osf_getlogin")
_S(50, "osf_setlogin")
_S(51, "acct")
_S(52, "sigpending")

_S(54, "ioctl")
_S(55, "osf_reboot")
_S(56, "osf_revoke")
_S(57, "symlink")
_S(58, "readlink")
_S(59, "execve")
_S(60, "umask")
_S(61, "chroot")
_S(62, "osf_old_fstat")
_S(63, "getpgrp")
_S(64, "getpagesize")
_S(65, "osf_mremap")
_S(66, "vfork")
_S(67, "stat")
_S(68, "lstat")
_S(69, "osf_sbrk")
_S(70, "osf_sstk")
_S(71, "mmap")
_S(72, "osf_old_vadvise")
_S(73, "munmap")
_S(74, "mprotect")
_S(75, "madvise")
_S(76, "vhangup")
_S(77, "osf_kmodcall")
_S(78, "osf_mincore")
_S(79, "getgroups")
_S(80, "setgroups")
_S(81, "osf_old_getpgrp")
_S(82, "setpgrp")
_S(83, "osf_setitimer")
_S(84, "osf_old_wait")
_S(85, "osf_table")
_S(86, "osf_getitimer")
_S(87, "gethostname")
_S(88, "sethostname")
_S(89, "getdtablesize")
_S(90, "dup2")
_S(91, "fstat")
_S(92, "fcntl")
_S(93, "osf_select")
_S(94, "poll")
_S(95, "fsync")
_S(96, "setpriority")
_S(97, "socket")
_S(98, "connect")
_S(99, "accept")
_S(100, "getpriority")
_S(101, "send")
_S(102, "recv")
_S(103, "sigreturn")
_S(104, "bind")
_S(105, "setsockopt")
_S(106, "listen")
_S(107, "osf_plock")
_S(108, "osf_old_sigvec")
_S(109, "osf_old_sigblock")
_S(110, "osf_old_sigsetmask")
_S(111, "sigsuspend")
_S(112, "osf_sigstack")
_S(113, "recvmsg")
_S(114, "sendmsg")
_S(115, "osf_old_vtrace")
_S(116, "osf_gettimeofday")
_S(117, "osf_getrusage")
_S(118, "getsockopt")

_S(120, "readv")
_S(121, "writev")
_S(122, "osf_settimeofday")
_S(123, "fchown")
_S(124, "fchmod")
_S(125, "recvfrom")
_S(126, "setreuid")
_S(127, "setregid")
_S(128, "rename")
_S(129, "truncate")
_S(130, "ftruncate")
_S(131, "flock")
_S(132, "setgid")
_S(133, "sendto")
_S(134, "shutdown")
_S(135, "socketpair")
_S(136, "mkdir")
_S(137, "rmdir")
_S(138, "osf_utimes")
_S(139, "osf_old_sigreturn")
_S(140, "osf_adjtime")
_S(141, "getpeername")
_S(142, "osf_gethostid")
_S(143, "osf_sethostid")
_S(144, "getrlimit")
_S(145, "setrlimit")
_S(146, "osf_old_killpg")
_S(147, "setsid")
_S(148, "quotactl")
_S(149, "osf_oldquota")
_S(150, "getsockname")

_S(153, "osf_pid_block")
_S(154, "osf_pid_unblock")

_S(156, "sigaction")
_S(157, "osf_sigwaitprim")
_S(158, "osf_nfssvc")
_S(159, "osf_getdirentries")
_S(160, "osf_statfs")
_S(161, "osf_fstatfs")

_S(163, "osf_asynch_daemon")
_S(164, "osf_getfh")
_S(165, "osf_getdomainname")
_S(166, "setdomainname")

_S(169, "osf_exportfs")

_S(181, "osf_alt_plock")

_S(184, "osf_getmnt")

_S(187, "osf_alt_sigpending")
_S(188, "osf_alt_setsid")

_S(199, "osf_swapon")
_S(200, "msgctl")
_S(201, "msgget")
_S(202, "msgrcv")
_S(203, "msgsnd")
_S(204, "semctl")
_S(205, "semget")
_S(206, "semop")
_S(207, "osf_utsname")
_S(208, "lchown")
_S(209, "osf_shmat")
_S(210, "shmctl")
_S(211, "shmdt")
_S(212, "shmget")
_S(213, "osf_mvalid")
_S(214, "osf_getaddressconf")
_S(215, "osf_msleep")
_S(216, "osf_mwakeup")
_S(217, "msync")
_S(218, "osf_signal")
_S(219, "osf_utc_gettime")
_S(220, "osf_utc_adjtime")

_S(222, "osf_security")
_S(223, "osf_kloadcall")

_S(233, "getpgid")
_S(234, "getsid")
_S(235, "sigaltstack")
_S(236, "osf_waitid")
_S(237, "osf_priocntlset")
_S(238, "osf_sigsendset")
_S(239, "osf_set_speculative")
_S(240, "osf_msfs_syscall")
_S(241, "osf_sysinfo")
_S(242, "osf_uadmin")
_S(243, "osf_fuser")
_S(244, "osf_proplist_syscall")
_S(245, "osf_ntp_adjtime")
_S(246, "osf_ntp_gettime")
_S(247, "osf_pathconf")
_S(248, "osf_fpathconf")

_S(250, "osf_uswitch")
_S(251, "osf_usleep_thread")
_S(252, "osf_audcntl")
_S(253, "osf_audgen")
_S(254, "sysfs")
_S(255, "osf_subsys_info")
_S(256, "osf_getsysinfo")
_S(257, "osf_setsysinfo")
_S(258, "osf_afs_syscall")
_S(259, "osf_swapctl")
_S(260, "osf_memcntl")
_S(261, "osf_fdatasync")

_S(300, "bdflush")
_S(301, "sethae")
_S(302, "mount")
_S(303, "old_adjtimex")
_S(304, "swapoff")
_S(305, "getdents")
_S(306, "create_module")
_S(307, "init_module")
_S(308, "delete_module")
_S(309, "get_kernel_syms")
_S(310, "syslog")
_S(311, "reboot")
_S(312, "clone")
_S(313, "uselib")
_S(314, "mlock")
_S(315, "munlock")
_S(316, "mlockall")
_S(317, "munlockall")
_S(318, "sysinfo")
_S(319, "_sysctl")
/* 320 was sys_idle.  */
_S(321, "oldumount")
_S(322, "swapon")
_S(323, "times")
_S(324, "personality")
_S(325, "setfsuid")
_S(326, "setfsgid")
_S(327, "ustat")
_S(328, "statfs")
_S(329, "fstatfs")
_S(330, "sched_setparam")
_S(331, "sched_getparam")
_S(332, "sched_setscheduler")
_S(333, "sched_getscheduler")
_S(334, "sched_yield")
_S(335, "sched_get_priority_max")
_S(336, "sched_get_priority_min")
_S(337, "sched_rr_get_interval")
_S(338, "afs_syscall")
_S(339, "uname")
_S(340, "nanosleep")
_S(341, "mremap")
_S(342, "nfsservctl")
_S(343, "setresuid")
_S(344, "getresuid")
_S(345, "pciconfig_read")
_S(346, "pciconfig_write")
_S(347, "query_module")
_S(348, "prctl")
_S(349, "pread")
_S(350, "pwrite")
_S(351, "rt_sigreturn")
_S(352, "rt_sigaction")
_S(353, "rt_sigprocmask")
_S(354, "rt_sigpending")
_S(355, "rt_sigtimedwait")
_S(356, "rt_sigqueueinfo")
_S(357, "rt_sigsuspend")
_S(358, "select")
_S(359, "gettimeofday")
_S(360, "settimeofday")
_S(361, "getitimer")
_S(362, "setitimer")
_S(363, "utimes")
_S(364, "getrusage")
_S(365, "wait4")
_S(366, "adjtimex")
_S(367, "getcwd")
_S(368, "capget")
_S(369, "capset")
_S(370, "sendfile")
_S(371, "setresgid")
_S(372, "getresgid")
_S(373, "dipc")
_S(374, "pivot_root")
_S(375, "mincore")
_S(376, "pciconfig_iobase")
_S(377, "getdents64")
_S(378, "gettid")
_S(379, "readahead")
/* 380 is unused */
_S(381, "tkill")
_S(382, "setxattr")
_S(383, "lsetxattr")
_S(384, "fsetxattr")
_S(385, "getxattr")
_S(386, "lgetxattr")
_S(387, "fgetxattr")
_S(388, "listxattr")
_S(389, "llistxattr")
_S(390, "flistxattr")
_S(391, "removexattr")
_S(392, "lremovexattr")
_S(393, "fremovexattr")
_S(394, "futex")
_S(395, "sched_setaffinity")
_S(396, "sched_getaffinity")
_S(397, "tuxcall")
_S(398, "io_setup")
_S(399, "io_destroy")
_S(400, "io_getevents")
_S(401, "io_submit")
_S(402, "io_cancel")
_S(405, "exit_group")
_S(406, "lookup_dcookie")
_S(407, "epoll_create")
_S(408, "epoll_ctl")
_S(409, "epoll_wait")
_S(410, "remap_file_pages")
_S(411, "set_tid_address")
_S(412, "restart_syscall")
_S(413, "fadvise64")
_S(424, "tgkill")
_S(425, "stat64")
_S(426, "lstat64")
_S(427, "fstat64")
_S(428, "vserver")
_S(429, "mbind")
_S(430, "get_mempolicy")
_S(431, "set_mempolicy")
_S(432, "mq_open")
_S(433, "mq_unlink")
_S(434, "mq_timedsend")
_S(435, "mq_timedreceive")
_S(436, "mq_notify")
_S(437, "mq_getsetattr")
_S(438, "waitid")
_S(439, "add_key")
_S(440, "request_key")
_S(441, "keyctl")
_S(442, "ioprio_set")
_S(443, "ioprio_get")
_S(444, "inotify_init")
_S(445, "inotify_add_watch")
_S(446, "inotify_rm_watch")
_S(447, "fdatasync")
_S(448, "kexec_load")
_S(449, "migrate_pages")
_S(450, "openat")
_S(451, "mkdirat")
_S(452, "mknodat")
_S(453, "fchownat")
_S(454, "futimesat")
_S(455, "fstatat64")
_S(456, "unlinkat")
_S(457, "renameat")
_S(458, "linkat")
_S(459, "symlinkat")
_S(460, "readlinkat")
_S(461, "fchmodat")
_S(462, "faccessat")
_S(463, "pselect6")
_S(464, "ppoll")
_S(465, "unshare")
_S(466, "set_robust_list")
_S(467, "get_robust_list")
_S(468, "splice")
_S(469, "sync_file_range")
_S(470, "tee")
_S(471, "vmsplice")
_S(472, "move_pages")
_S(473, "getcpu")
_S(474, "epoll_pwait")
_S(475, "utimensat")
_S(476, "signalfd")
_S(477, "timerfd")
_S(478, "eventfd")
_S(479, "recvmmsg")
_S(480, "fallocate")
_S(481, "timerfd_create")
_S(482, "timerfd_settime")
_S(483, "timerfd_gettime")
_S(484, "signalfd4")
_S(485, "eventfd2")
_S(486, "epoll_create1")
_S(487, "dup3")
_S(488, "pipe2")
_S(489, "inotify_init1")
_S(490, "preadv")
_S(491, "pwritev")
_S(492, "rt_tgsigqueueinfo")
_S(493, "perf_event_open")
_S(494, "fanotify_init")
_S(495, "fanotify_mark")
_S(496, "prlimit64")
_S(497, "name_to_handle_at")
_S(498, "open_by_handle_at")
_S(499, "clock_adjtime")
_S(500, "syncfs")
_S(501, "setns")
_S(502, "accept4")
_S(503, "sendmmsg")
_S(504, "process_vm_readv")
_S(505, "process_vm_writev")
_S(506, "kcmp")
_S(507, "finit_module")
_S(508, "sched_setattr")
_S(509, "sched_getattr")
_S(510, "renameat2")
_S(511, "getrandom")
_S(512, "memfd_create")
_S(513, "execveat")
