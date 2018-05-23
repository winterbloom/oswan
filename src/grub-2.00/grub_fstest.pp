# 1 "util/grub-fstest.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "util/grub-fstest.c"
# 20 "util/grub-fstest.c"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 21 "util/grub-fstest.c" 2
# 1 "./include/grub/types.h" 1
# 22 "./include/grub/types.h"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 23 "./include/grub/types.h" 2
# 62 "./include/grub/types.h"
typedef signed char grub_int8_t;
typedef short grub_int16_t;
typedef int grub_int32_t;

typedef long grub_int64_t;




typedef unsigned char grub_uint8_t;
typedef unsigned short grub_uint16_t;
typedef unsigned grub_uint32_t;



typedef unsigned long grub_uint64_t;
# 89 "./include/grub/types.h"
typedef grub_uint64_t grub_addr_t;
typedef grub_uint64_t grub_size_t;
typedef grub_int64_t grub_ssize_t;
# 131 "./include/grub/types.h"
typedef grub_uint64_t grub_properly_aligned_t;




typedef grub_uint64_t grub_off_t;


typedef grub_uint64_t grub_disk_addr_t;
# 164 "./include/grub/types.h"
static inline grub_uint32_t grub_swap_bytes32(grub_uint32_t x)
{
 return __builtin_bswap32(x);
}

static inline grub_uint64_t grub_swap_bytes64(grub_uint64_t x)
{
 return __builtin_bswap64(x);
}
# 240 "./include/grub/types.h"
static inline grub_uint16_t grub_get_unaligned16 (const void *ptr)
{
  struct grub_unaligned_uint16_t
  {
    grub_uint16_t d;
  } __attribute__ ((packed));
  const struct grub_unaligned_uint16_t *dd
    = (const struct grub_unaligned_uint16_t *) ptr;
  return dd->d;
}

static inline void grub_set_unaligned16 (void *ptr, grub_uint16_t val)
{
  struct grub_unaligned_uint16_t
  {
    grub_uint16_t d;
  } __attribute__ ((packed));
  struct grub_unaligned_uint16_t *dd = (struct grub_unaligned_uint16_t *) ptr;
  dd->d = val;
}

static inline grub_uint32_t grub_get_unaligned32 (const void *ptr)
{
  struct grub_unaligned_uint32_t
  {
    grub_uint32_t d;
  } __attribute__ ((packed));
  const struct grub_unaligned_uint32_t *dd
    = (const struct grub_unaligned_uint32_t *) ptr;
  return dd->d;
}

static inline void grub_set_unaligned32 (void *ptr, grub_uint32_t val)
{
  struct grub_unaligned_uint32_t
  {
    grub_uint32_t d;
  } __attribute__ ((packed));
  struct grub_unaligned_uint32_t *dd = (struct grub_unaligned_uint32_t *) ptr;
  dd->d = val;
}

static inline grub_uint64_t grub_get_unaligned64 (const void *ptr)
{
  struct grub_unaligned_uint64_t
  {
    grub_uint64_t d;
  } __attribute__ ((packed));
  const struct grub_unaligned_uint64_t *dd
    = (const struct grub_unaligned_uint64_t *)ptr;
  return dd->d;
}

static inline void grub_set_unaligned64 (void *ptr, grub_uint64_t val)
{
  struct grub_unaligned_uint64_t
  {
    grub_uint64_t d;
  } __attribute__ ((packed));
  struct grub_unaligned_uint64_t *dd = (struct grub_unaligned_uint64_t *) ptr;
  dd->d = val;
}
# 22 "util/grub-fstest.c" 2
# 1 "./include/grub/emu/misc.h" 1
# 22 "./include/grub/emu/misc.h"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 23 "./include/grub/emu/misc.h" 2
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdarg.h" 3 4

# 40 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 99 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 24 "./include/grub/emu/misc.h" 2

# 1 "./include/grub/symbol.h" 1
# 22 "./include/grub/symbol.h"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 23 "./include/grub/symbol.h" 2
# 26 "./include/grub/emu/misc.h" 2



# 1 "/usr/include/sys/fcntl.h" 1 3 4


# 1 "/usr/include/sys/_default_fcntl.h" 1 3 4






# 1 "/usr/include/_ansi.h" 1 3 4
# 10 "/usr/include/_ansi.h" 3 4
# 1 "/usr/include/newlib.h" 1 3 4
# 14 "/usr/include/newlib.h" 3 4
# 1 "/usr/include/_newlib_version.h" 1 3 4
# 15 "/usr/include/newlib.h" 2 3 4
# 11 "/usr/include/_ansi.h" 2 3 4
# 1 "/usr/include/sys/config.h" 1 3 4



# 1 "/usr/include/machine/ieeefp.h" 1 3 4
# 5 "/usr/include/sys/config.h" 2 3 4
# 1 "/usr/include/sys/features.h" 1 3 4
# 6 "/usr/include/sys/config.h" 2 3 4
# 234 "/usr/include/sys/config.h" 3 4
# 1 "/usr/include/cygwin/config.h" 1 3 4
# 235 "/usr/include/sys/config.h" 2 3 4
# 12 "/usr/include/_ansi.h" 2 3 4
# 8 "/usr/include/sys/_default_fcntl.h" 2 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 43 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/machine/_default_types.h" 1 3 4
# 41 "/usr/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/usr/include/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/usr/include/machine/_default_types.h" 3 4
typedef int __int32_t;

typedef unsigned int __uint32_t;
# 103 "/usr/include/machine/_default_types.h" 3 4
typedef long int __int64_t;

typedef long unsigned int __uint64_t;
# 134 "/usr/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/usr/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/usr/include/machine/_default_types.h" 3 4
typedef int __int_least32_t;

typedef unsigned int __uint_least32_t;
# 200 "/usr/include/machine/_default_types.h" 3 4
typedef long int __int_least64_t;

typedef long unsigned int __uint_least64_t;
# 214 "/usr/include/machine/_default_types.h" 3 4
typedef long int __intmax_t;







typedef long unsigned int __uintmax_t;







typedef long int __intptr_t;

typedef long unsigned int __uintptr_t;
# 44 "/usr/include/sys/cdefs.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 216 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 328 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef short unsigned int wchar_t;
# 426 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 46 "/usr/include/sys/cdefs.h" 2 3 4
# 9 "/usr/include/sys/_default_fcntl.h" 2 3 4
# 187 "/usr/include/sys/_default_fcntl.h" 3 4
struct eflock {
 short l_type;
 short l_whence;
 long l_start;
 long l_len;
 short l_pid;
 short l_xxx;
 long l_rpid;
 long l_rsys;
};


# 1 "/usr/include/sys/types.h" 1 3 4
# 22 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 17 "/usr/include/machine/_types.h" 3 4
typedef __int64_t __blkcnt_t;


typedef __int32_t __blksize_t;


typedef __uint32_t __dev_t;



typedef unsigned long __fsblkcnt_t;



typedef unsigned long __fsfilcnt_t;


typedef __uint32_t __uid_t;


typedef __uint32_t __gid_t;


typedef __uint64_t __ino_t;


typedef long long __key_t;


typedef __uint16_t __sa_family_t;



typedef int __socklen_t;
# 23 "/usr/include/sys/types.h" 2 3 4





typedef __uint8_t u_int8_t;


typedef __uint16_t u_int16_t;


typedef __uint32_t u_int32_t;


typedef __uint64_t u_int64_t;

typedef int register_t;
# 62 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 63 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 25 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/sys/lock.h" 1 3 4
# 12 "/usr/include/sys/lock.h" 3 4
typedef void *_LOCK_T;
# 42 "/usr/include/sys/lock.h" 3 4
void __cygwin_lock_init(_LOCK_T *);
void __cygwin_lock_init_recursive(_LOCK_T *);
void __cygwin_lock_fini(_LOCK_T *);
void __cygwin_lock_lock(_LOCK_T *);
int __cygwin_lock_trylock(_LOCK_T *);
void __cygwin_lock_unlock(_LOCK_T *);
# 26 "/usr/include/sys/_types.h" 2 3 4
# 44 "/usr/include/sys/_types.h" 3 4
typedef long _off_t;





typedef int __pid_t;
# 65 "/usr/include/sys/_types.h" 3 4
typedef __uint32_t __id_t;
# 88 "/usr/include/sys/_types.h" 3 4
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;
# 114 "/usr/include/sys/_types.h" 3 4
typedef long _fpos_t;





typedef _off64_t _fpos64_t;
# 129 "/usr/include/sys/_types.h" 3 4
typedef long unsigned int __size_t;
# 145 "/usr/include/sys/_types.h" 3 4
typedef long signed int _ssize_t;
# 156 "/usr/include/sys/_types.h" 3 4
typedef _ssize_t __ssize_t;


# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 357 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 160 "/usr/include/sys/_types.h" 2 3 4



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_T _flock_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef long __time_t;


typedef unsigned long __clockid_t;


typedef unsigned long __timer_t;
# 210 "/usr/include/sys/_types.h" 3 4
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;


typedef __builtin_va_list __va_list;
# 64 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_stdint.h" 1 3 4
# 20 "/usr/include/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intmax_t intmax_t;




typedef __uintmax_t uintmax_t;




typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;
# 65 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/machine/endian.h" 1 3 4





# 1 "/usr/include/machine/_endian.h" 1 3 4
# 14 "/usr/include/machine/_endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 15 "/usr/include/machine/_endian.h" 2 3 4
# 23 "/usr/include/machine/_endian.h" 3 4
static __inline__ __uint32_t __ntohl(__uint32_t);
static __inline__ __uint16_t __ntohs(__uint16_t);

static __inline__ __uint32_t
__ntohl(__uint32_t _x)
{
 __asm__("bswap %0" : "=r" (_x) : "0" (_x));
 return _x;
}

static __inline__ __uint16_t
__ntohs(__uint16_t _x)
{
 __asm__("xchgb %b0,%h0"
  : "=Q" (_x)
  : "0" (_x));
 return _x;
}
# 7 "/usr/include/machine/endian.h" 2 3 4
# 68 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 14 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_sigset.h" 1 3 4
# 41 "/usr/include/sys/_sigset.h" 3 4
typedef unsigned long __sigset_t;
# 15 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_timeval.h" 1 3 4
# 35 "/usr/include/sys/_timeval.h" 3 4
typedef __suseconds_t suseconds_t;




typedef long time_t;
# 52 "/usr/include/sys/_timeval.h" 3 4
struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};
# 16 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/timespec.h" 1 3 4
# 38 "/usr/include/sys/timespec.h" 3 4
# 1 "/usr/include/sys/_timespec.h" 1 3 4
# 45 "/usr/include/sys/_timespec.h" 3 4
struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 39 "/usr/include/sys/timespec.h" 2 3 4
# 58 "/usr/include/sys/timespec.h" 3 4
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};
# 17 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;
# 34 "/usr/include/sys/select.h" 3 4
typedef unsigned long fd_mask;







typedef struct _types_fd_set {
 fd_mask fds_bits[(((64)+(((sizeof (fd_mask) * 8))-1))/((sizeof (fd_mask) * 8)))];
} _types_fd_set;
# 60 "/usr/include/sys/select.h" 3 4


int select (int __n, _types_fd_set *__readfds, _types_fd_set *__writefds, _types_fd_set *__exceptfds, struct timeval *__timeout)
                                                   ;

int pselect (int __n, _types_fd_set *__readfds, _types_fd_set *__writefds, _types_fd_set *__exceptfds, const struct timespec *__timeout, const sigset_t *__set)

                           ;



# 69 "/usr/include/sys/types.h" 2 3 4




typedef __uint32_t in_addr_t;




typedef __uint16_t in_port_t;
# 87 "/usr/include/sys/types.h" 3 4
typedef unsigned char u_char;



typedef unsigned short u_short;



typedef unsigned int u_int;



typedef unsigned long u_long;







typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;



typedef __blkcnt_t blkcnt_t;




typedef __blksize_t blksize_t;




typedef unsigned long clock_t;
# 135 "/usr/include/sys/types.h" 3 4
typedef long daddr_t;



typedef char * caddr_t;




typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;




typedef __id_t id_t;




typedef __ino_t ino_t;
# 173 "/usr/include/sys/types.h" 3 4
typedef __off_t off_t;



typedef __dev_t dev_t;



typedef __uid_t uid_t;



typedef __gid_t gid_t;




typedef __pid_t pid_t;




typedef __key_t key_t;




typedef _ssize_t ssize_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __clockid_t clockid_t;





typedef __timer_t timer_t;





typedef __useconds_t useconds_t;
# 236 "/usr/include/sys/types.h" 3 4
typedef __int64_t sbintime_t;


# 1 "/usr/include/sys/_pthreadtypes.h" 1 3 4
# 15 "/usr/include/sys/_pthreadtypes.h" 3 4
typedef struct __pthread_t {char __dummy;} *pthread_t;
typedef struct __pthread_mutex_t {char __dummy;} *pthread_mutex_t;

typedef struct __pthread_key_t {char __dummy;} *pthread_key_t;
typedef struct __pthread_attr_t {char __dummy;} *pthread_attr_t;
typedef struct __pthread_mutexattr_t {char __dummy;} *pthread_mutexattr_t;
typedef struct __pthread_condattr_t {char __dummy;} *pthread_condattr_t;
typedef struct __pthread_cond_t {char __dummy;} *pthread_cond_t;
typedef struct __pthread_barrierattr_t {char __dummy;} *pthread_barrierattr_t;
typedef struct __pthread_barrier_t {char __dummy;} *pthread_barrier_t;


typedef struct
{
  pthread_mutex_t mutex;
  int state;
}
pthread_once_t;
typedef struct __pthread_spinlock_t {char __dummy;} *pthread_spinlock_t;
typedef struct __pthread_rwlock_t {char __dummy;} *pthread_rwlock_t;
typedef struct __pthread_rwlockattr_t {char __dummy;} *pthread_rwlockattr_t;
# 240 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/machine/types.h" 1 3 4
# 19 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 16 "/usr/include/bits/byteswap.h" 3 4
static __inline unsigned short
__bswap_16 (unsigned short __x)
{
  return (__x >> 8) | (__x << 8);
}

static __inline unsigned int
__bswap_32 (unsigned int __x)
{
  return (__bswap_16 (__x & 0xffff) << 16) | (__bswap_16 (__x >> 16));
}

static __inline unsigned long long
__bswap_64 (unsigned long long __x)
{
  return (((unsigned long long) __bswap_32 (__x & 0xffffffffull)) << 32) | (__bswap_32 (__x >> 32));
}
# 39 "/usr/include/endian.h" 2 3 4
# 20 "/usr/include/machine/types.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 21 "/usr/include/machine/types.h" 2 3 4




typedef struct timespec timespec_t;




typedef struct timespec timestruc_t;


typedef __loff_t loff_t;
# 46 "/usr/include/machine/types.h" 3 4
struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
};






typedef unsigned long vm_offset_t;




typedef unsigned long vm_size_t;




typedef void *vm_object_t;




typedef char *addr_t;





# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 12 "/usr/include/sys/sysmacros.h" 3 4
# 1 "/usr/include/sys/types.h" 1 3 4
# 13 "/usr/include/sys/sysmacros.h" 2 3 4

static __inline__ int gnu_dev_major(dev_t);
static __inline__ int gnu_dev_minor(dev_t);
static __inline__ dev_t gnu_dev_makedev(int, int);

static __inline__ int
gnu_dev_major(dev_t dev)
{
 return (int)(((dev) >> 16) & 0xffff);
}

static __inline__ int
gnu_dev_minor(dev_t dev)
{
 return (int)((dev) & 0xffff);
}

static __inline__ dev_t
gnu_dev_makedev(int maj, int min)
{
 return (((maj) << 16) | ((min) & 0xffff));
}
# 81 "/usr/include/machine/types.h" 2 3 4
# 241 "/usr/include/sys/types.h" 2 3 4
# 200 "/usr/include/sys/_default_fcntl.h" 2 3 4
# 1 "/usr/include/sys/stat.h" 1 3 4
# 9 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 10 "/usr/include/time.h" 3 4
# 1 "/usr/include/_ansi.h" 1 3 4
# 11 "/usr/include/time.h" 2 3 4

# 1 "/usr/include/sys/reent.h" 1 3 4
# 14 "/usr/include/sys/reent.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 15 "/usr/include/sys/reent.h" 2 3 4
# 25 "/usr/include/sys/reent.h" 3 4
typedef unsigned int __ULong;
# 38 "/usr/include/sys/reent.h" 3 4
struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 93 "/usr/include/sys/reent.h" 3 4
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 117 "/usr/include/sys/reent.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 181 "/usr/include/sys/reent.h" 3 4
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  _ssize_t (*_read) (struct _reent *, void *,
        char *, size_t);
  _ssize_t (*_write) (struct _reent *, void *,
         const char *,
         size_t);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 239 "/usr/include/sys/reent.h" 3 4
struct __sFILE64 {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;

  struct _reent *_data;


  void * _cookie;

  _ssize_t (*_read) (struct _reent *, void *,
        char *, size_t);
  _ssize_t (*_write) (struct _reent *, void *,
         const char *,
         size_t);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _flags2;

  _off64_t _offset;
  _fpos64_t (*_seek64) (struct _reent *, void *, _fpos64_t, int);


  _flock_t _lock;

  _mbstate_t _mbstate;
};
typedef struct __sFILE64 __FILE;





struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 319 "/usr/include/sys/reent.h" 3 4
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 569 "/usr/include/sys/reent.h" 3 4
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};
# 775 "/usr/include/sys/reent.h" 3 4
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);





  struct _reent * __getreent (void);
# 13 "/usr/include/time.h" 2 3 4



# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 17 "/usr/include/time.h" 2 3 4


# 1 "/usr/include/machine/time.h" 1 3 4
# 20 "/usr/include/time.h" 2 3 4
# 32 "/usr/include/time.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 9 "/usr/include/xlocale.h" 3 4
struct __locale_t;
typedef struct __locale_t *locale_t;
# 33 "/usr/include/time.h" 2 3 4




struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;

  long tm_gmtoff;


  const char *tm_zone;

};

clock_t clock (void);
double difftime (time_t _time2, time_t _time1);
time_t mktime (struct tm *_timeptr);
time_t time (time_t *_timer);

char *asctime (const struct tm *_tblock);
char *ctime (const time_t *_time);
struct tm *gmtime (const time_t *_timer);
struct tm *localtime (const time_t *_timer);

size_t strftime (char *
# 66 "/usr/include/time.h"
                         __restrict 
# 66 "/usr/include/time.h" 3 4
                                    _s,
        size_t _maxsize, const char *
# 67 "/usr/include/time.h"
                                    __restrict 
# 67 "/usr/include/time.h" 3 4
                                               _fmt,
        const struct tm *
# 68 "/usr/include/time.h"
                        __restrict 
# 68 "/usr/include/time.h" 3 4
                                   _t);


extern size_t strftime_l (char *
# 71 "/usr/include/time.h"
                               __restrict 
# 71 "/usr/include/time.h" 3 4
                                          _s, size_t _maxsize,
     const char *
# 72 "/usr/include/time.h"
                __restrict 
# 72 "/usr/include/time.h" 3 4
                           _fmt,
     const struct tm *
# 73 "/usr/include/time.h"
                     __restrict 
# 73 "/usr/include/time.h" 3 4
                                _t, locale_t _l);


char *asctime_r (const struct tm *
# 76 "/usr/include/time.h"
                                    __restrict
# 76 "/usr/include/time.h" 3 4
                                              ,
     char *
# 77 "/usr/include/time.h"
          __restrict
# 77 "/usr/include/time.h" 3 4
                    );
char *ctime_r (const time_t *, char *);
struct tm *gmtime_r (const time_t *
# 79 "/usr/include/time.h"
                                   __restrict
# 79 "/usr/include/time.h" 3 4
                                             ,
     struct tm *
# 80 "/usr/include/time.h"
               __restrict
# 80 "/usr/include/time.h" 3 4
                         );
struct tm *localtime_r (const time_t *
# 81 "/usr/include/time.h"
                                      __restrict
# 81 "/usr/include/time.h" 3 4
                                                ,
     struct tm *
# 82 "/usr/include/time.h"
               __restrict
# 82 "/usr/include/time.h" 3 4
                         );








char *strptime (const char *
# 91 "/usr/include/time.h"
                                __restrict
# 91 "/usr/include/time.h" 3 4
                                          ,
     const char *
# 92 "/usr/include/time.h"
                __restrict
# 92 "/usr/include/time.h" 3 4
                          ,
     struct tm *
# 93 "/usr/include/time.h"
               __restrict
# 93 "/usr/include/time.h" 3 4
                         );


char *strptime_l (const char *
# 96 "/usr/include/time.h"
                             __restrict
# 96 "/usr/include/time.h" 3 4
                                       , const char *
# 96 "/usr/include/time.h"
                                                     __restrict
# 96 "/usr/include/time.h" 3 4
                                                               ,
    struct tm *
# 97 "/usr/include/time.h"
              __restrict
# 97 "/usr/include/time.h" 3 4
                        , locale_t);



void tzset (void);

void _tzset_r (struct _reent *);

typedef struct __tzrule_struct
{
  char ch;
  int m;
  int n;
  int d;
  int s;
  time_t change;
  long offset;
} __tzrule_type;

typedef struct __tzinfo_struct
{
  int __tznorth;
  int __tzyear;
  __tzrule_type __tzrule[2];
} __tzinfo_type;

__tzinfo_type *__gettzinfo (void);
# 154 "/usr/include/time.h" 3 4
extern __attribute__((dllimport)) long _timezone;
extern __attribute__((dllimport)) int _daylight;


extern __attribute__((dllimport)) char *_tzname[2];
# 173 "/usr/include/time.h" 3 4
# 1 "/usr/include/cygwin/time.h" 1 3 4
# 17 "/usr/include/cygwin/time.h" 3 4
int __attribute__((__cdecl__)) clock_setres (clockid_t, struct timespec *);


time_t __attribute__((__cdecl__)) timelocal (struct tm *);
time_t __attribute__((__cdecl__)) timegm (struct tm *);




extern int stime (const time_t *);



extern int daylight __asm__ ( "_daylight");


extern long timezone __asm__ ( "_timezone");
# 174 "/usr/include/time.h" 2 3 4




# 1 "/usr/include/signal.h" 1 3 4





# 1 "/usr/include/sys/signal.h" 1 3 4
# 22 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/cygwin/signal.h" 1 3 4
# 24 "/usr/include/cygwin/signal.h" 3 4
struct _uc_fpxreg {
  __uint16_t significand[4];
  __uint16_t exponent;
  __uint16_t padding[3];
};

struct _uc_xmmreg {
  __uint32_t element[4];
};

struct _fpstate
{
  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _uc_fpxreg st[8];
  struct _uc_xmmreg xmm[16];
  __uint32_t padding[24];
};

struct __attribute__ ((__aligned__ (16))) __mcontext
{
  __uint64_t p1home;
  __uint64_t p2home;
  __uint64_t p3home;
  __uint64_t p4home;
  __uint64_t p5home;
  __uint64_t p6home;
  __uint32_t ctxflags;
  __uint32_t mxcsr;
  __uint16_t cs;
  __uint16_t ds;
  __uint16_t es;
  __uint16_t fs;
  __uint16_t gs;
  __uint16_t ss;
  __uint32_t eflags;
  __uint64_t dr0;
  __uint64_t dr1;
  __uint64_t dr2;
  __uint64_t dr3;
  __uint64_t dr6;
  __uint64_t dr7;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rdx;
  __uint64_t rbx;
  __uint64_t rsp;
  __uint64_t rbp;
  __uint64_t rsi;
  __uint64_t rdi;
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rip;
  struct _fpstate fpregs;
  __uint64_t vregs[52];
  __uint64_t vcx;
  __uint64_t dbc;
  __uint64_t btr;
  __uint64_t bfr;
  __uint64_t etr;
  __uint64_t efr;
  __uint64_t oldmask;
  __uint64_t cr2;
};
# 163 "/usr/include/cygwin/signal.h" 3 4
typedef union sigval
{
  int sival_int;
  void *sival_ptr;
} sigval_t;

typedef struct sigevent
{
  sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;
  void (*sigev_notify_function) (sigval_t);
  pthread_attr_t *sigev_notify_attributes;
} sigevent_t;



#pragma pack(push,4)

struct _sigcommune
{
  __uint32_t _si_code;
  void *_si_read_handle;
  void *_si_write_handle;
  void *_si_process_handle;
  __extension__ union
  {
    int _si_fd;
    int64_t _si_pipe_unique_id;
    char *_si_str;
  };
};
# 209 "/usr/include/cygwin/signal.h" 3 4
typedef struct
{
  int si_signo;
  int si_code;
  pid_t si_pid;
  uid_t si_uid;
  int si_errno;

  __extension__ union
  {
    __uint32_t __pad[32];
    struct _sigcommune _si_commune;
    __extension__ struct
    {
      __extension__ union
      {
 sigval_t si_sigval;
 sigval_t si_value;
      };
      __extension__ struct
      {
 timer_t si_tid;
 unsigned int si_overrun;
      };
    };

    __extension__ struct
    {
      int si_status;
      clock_t si_utime;
      clock_t si_stime;
    };

    void *si_addr;
# 253 "/usr/include/cygwin/signal.h" 3 4
  };
} siginfo_t;

#pragma pack(pop)



enum
{
  SI_USER = 0,
  SI_ASYNCIO = 2,

  SI_MESGQ,

  SI_TIMER,
  SI_QUEUE,
  SI_KERNEL,

  ILL_ILLOPC,
  ILL_ILLOPN,
  ILL_ILLADR,
  ILL_ILLTRP,
  ILL_PRVOPC,
  ILL_PRVREG,
  ILL_COPROC,
  ILL_BADSTK,

  FPE_INTDIV,
  FPE_INTOVF,
  FPE_FLTDIV,
  FPE_FLTOVF,
  FPE_FLTUND,
  FPE_FLTRES,
  FPE_FLTINV,
  FPE_FLTSUB,

  SEGV_MAPERR,
  SEGV_ACCERR,

  BUS_ADRALN,
  BUS_ADRERR,
  BUS_OBJERR,

  CLD_EXITED,
  CLD_KILLED,
  CLD_DUMPED,
  CLD_TRAPPED,
  CLD_STOPPED,
  CLD_CONTINUED
};

enum
{
  SIGEV_SIGNAL = 0,


  SIGEV_NONE,


  SIGEV_THREAD

};





typedef void (*_sig_func_ptr)(int);



struct sigaction
{
  __extension__ union
  {
    _sig_func_ptr sa_handler;

    void (*sa_sigaction) ( int, siginfo_t *, void * );

  };
  sigset_t sa_mask;
  int sa_flags;
};
# 416 "/usr/include/cygwin/signal.h" 3 4
void psiginfo (const siginfo_t *, const char *);


int sigwait (const sigset_t *, int *);


int sigwaitinfo (const sigset_t *, siginfo_t *);


int sighold (int);
int sigignore (int);
int sigrelse (int);
_sig_func_ptr sigset (int, _sig_func_ptr);



int sigqueue(pid_t, int, const union sigval);


int siginterrupt (int, int);





extern const char __attribute__((dllimport)) *sys_sigabbrev[];
extern const char __attribute__((dllimport)) *sys_siglist[];
# 23 "/usr/include/sys/signal.h" 2 3 4
# 153 "/usr/include/sys/signal.h" 3 4
typedef struct sigaltstack {
  void *ss_sp;
  int ss_flags;
  size_t ss_size;
} stack_t;






int sigprocmask (int how, const sigset_t *set, sigset_t *oset);



int pthread_sigmask (int how, const sigset_t *set, sigset_t *oset);







int kill (pid_t, int);



int killpg (pid_t, int);


int sigaction (int, const struct sigaction *, struct sigaction *);
int sigaddset (sigset_t *, const int);
int sigdelset (sigset_t *, const int);
int sigismember (const sigset_t *, int);
int sigfillset (sigset_t *);
int sigemptyset (sigset_t *);
int sigpending (sigset_t *);
int sigsuspend (const sigset_t *);
int sigwait (const sigset_t *set, int *sig);
# 212 "/usr/include/sys/signal.h" 3 4
int sigpause (int) __asm__ ("" "__xpg_sigpause");
# 222 "/usr/include/sys/signal.h" 3 4
int sigaltstack (const stack_t *
# 222 "/usr/include/sys/signal.h"
                               __restrict
# 222 "/usr/include/sys/signal.h" 3 4
                                         , stack_t *
# 222 "/usr/include/sys/signal.h"
                                                    __restrict
# 222 "/usr/include/sys/signal.h" 3 4
                                                              );



int pthread_kill (pthread_t thread, int sig);







int sigwaitinfo (const sigset_t *set, siginfo_t *info);
int sigtimedwait (const sigset_t *set, siginfo_t *info,
    const struct timespec *timeout);

int sigqueue (pid_t pid, int signo, const union sigval value);
# 363 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/ucontext.h" 1 3 4
# 12 "/usr/include/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 13 "/usr/include/sys/ucontext.h" 2 3 4

typedef struct __mcontext mcontext_t;

typedef __attribute__ ((__aligned__ (16))) struct __ucontext {
 mcontext_t uc_mcontext;
 struct __ucontext *uc_link;
 sigset_t uc_sigmask;
 stack_t uc_stack;
 unsigned long int uc_flags;
} ucontext_t;
# 364 "/usr/include/sys/signal.h" 2 3 4
# 7 "/usr/include/signal.h" 2 3 4



typedef int sig_atomic_t;

typedef _sig_func_ptr sig_t;


typedef _sig_func_ptr sighandler_t;






struct _reent;

_sig_func_ptr _signal_r (struct _reent *, int, _sig_func_ptr);
int _raise_r (struct _reent *, int);


_sig_func_ptr signal (int, _sig_func_ptr);
int raise (int);
void psignal (int, const char *);



# 179 "/usr/include/time.h" 2 3 4







int clock_settime (clockid_t clock_id, const struct timespec *tp);
int clock_gettime (clockid_t clock_id, struct timespec *tp);
int clock_getres (clockid_t clock_id, struct timespec *res);



int timer_create (clockid_t clock_id,
  struct sigevent *
# 193 "/usr/include/time.h"
                  __restrict 
# 193 "/usr/include/time.h" 3 4
                             evp,
 timer_t *
# 194 "/usr/include/time.h"
         __restrict 
# 194 "/usr/include/time.h" 3 4
                    timerid);



int timer_delete (timer_t timerid);



int timer_settime (timer_t timerid, int flags,
 const struct itimerspec *
# 203 "/usr/include/time.h"
                         __restrict 
# 203 "/usr/include/time.h" 3 4
                                    value,
 struct itimerspec *
# 204 "/usr/include/time.h"
                   __restrict 
# 204 "/usr/include/time.h" 3 4
                              ovalue);
int timer_gettime (timer_t timerid, struct itimerspec *value);
int timer_getoverrun (timer_t timerid);



int nanosleep (const struct timespec *rqtp, struct timespec *rmtp);
# 223 "/usr/include/time.h" 3 4
int clock_nanosleep (clockid_t clock_id, int flags,
 const struct timespec *rqtp, struct timespec *rmtp);
# 297 "/usr/include/time.h" 3 4
int clock_getcpuclockid (pid_t pid, clockid_t *clock_id);







int clock_setenable_attr (clockid_t clock_id, int attr);
int clock_getenable_attr (clockid_t clock_id, int *attr);
# 10 "/usr/include/sys/stat.h" 2 3 4
# 22 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/cygwin/stat.h" 1 3 4
# 17 "/usr/include/cygwin/stat.h" 3 4
struct stat
{
  dev_t st_dev;
  ino_t st_ino;
  mode_t st_mode;
  nlink_t st_nlink;
  uid_t st_uid;
  gid_t st_gid;
  dev_t st_rdev;
  off_t st_size;
  timestruc_t st_atim;
  timestruc_t st_mtim;
  timestruc_t st_ctim;
  blksize_t st_blksize;
  blkcnt_t st_blocks;
  timestruc_t st_birthtim;
};
# 23 "/usr/include/sys/stat.h" 2 3 4
# 147 "/usr/include/sys/stat.h" 3 4
int chmod (const char *__path, mode_t __mode );
int fchmod (int __fd, mode_t __mode);
int fstat (int __fd, struct stat *__sbuf );
int mkdir (const char *_path, mode_t __mode );
int mkfifo (const char *__path, mode_t __mode );
int stat (const char *
# 152 "/usr/include/sys/stat.h"
                     __restrict 
# 152 "/usr/include/sys/stat.h" 3 4
                                __path, struct stat *
# 152 "/usr/include/sys/stat.h"
                                                     __restrict 
# 152 "/usr/include/sys/stat.h" 3 4
                                                                __sbuf );
mode_t umask (mode_t __mask );


int lstat (const char *
# 156 "/usr/include/sys/stat.h"
                      __restrict 
# 156 "/usr/include/sys/stat.h" 3 4
                                 __path, struct stat *
# 156 "/usr/include/sys/stat.h"
                                                      __restrict 
# 156 "/usr/include/sys/stat.h" 3 4
                                                                 __buf );
int mknod (const char *__path, mode_t __mode, dev_t __dev );



int fchmodat (int, const char *, mode_t, int);
int fstatat (int, const char *
# 162 "/usr/include/sys/stat.h"
                             __restrict 
# 162 "/usr/include/sys/stat.h" 3 4
                                        , struct stat *
# 162 "/usr/include/sys/stat.h"
                                                       __restrict
# 162 "/usr/include/sys/stat.h" 3 4
                                                                 , int);
int mkdirat (int, const char *, mode_t);
int mkfifoat (int, const char *, mode_t);
int mknodat (int, const char *, mode_t, dev_t);
int utimensat (int, const char *, const struct timespec *, int);


int futimens (int, const struct timespec *);
# 201 "/usr/include/sys/_default_fcntl.h" 2 3 4

extern int open (const char *, int, ...);

extern int openat (int, const char *, int, ...);

extern int creat (const char *, mode_t);
extern int fcntl (int, int, ...);

extern int flock (int, int);


# 1 "/usr/include/sys/time.h" 1 3 4
# 50 "/usr/include/sys/time.h" 3 4
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 63 "/usr/include/sys/time.h" 3 4
struct bintime {
 time_t sec;
 uint64_t frac;
};

static __inline void
bintime_addx(struct bintime *_bt, uint64_t _x)
{
 uint64_t _u;

 _u = _bt->frac;
 _bt->frac += _x;
 if (_u > _bt->frac)
  _bt->sec++;
}

static __inline void
bintime_add(struct bintime *_bt, const struct bintime *_bt2)
{
 uint64_t _u;

 _u = _bt->frac;
 _bt->frac += _bt2->frac;
 if (_u > _bt->frac)
  _bt->sec++;
 _bt->sec += _bt2->sec;
}

static __inline void
bintime_sub(struct bintime *_bt, const struct bintime *_bt2)
{
 uint64_t _u;

 _u = _bt->frac;
 _bt->frac -= _bt2->frac;
 if (_u < _bt->frac)
  _bt->sec--;
 _bt->sec -= _bt2->sec;
}

static __inline void
bintime_mul(struct bintime *_bt, u_int _x)
{
 uint64_t _p1, _p2;

 _p1 = (_bt->frac & 0xffffffffull) * _x;
 _p2 = (_bt->frac >> 32) * _x + (_p1 >> 32);
 _bt->sec *= _x;
 _bt->sec += (_p2 >> 32);
 _bt->frac = (_p2 << 32) | (_p1 & 0xffffffffull);
}

static __inline void
bintime_shift(struct bintime *_bt, int _exp)
{

 if (_exp > 0) {
  _bt->sec <<= _exp;
  _bt->sec |= _bt->frac >> (64 - _exp);
  _bt->frac <<= _exp;
 } else if (_exp < 0) {
  _bt->frac >>= -_exp;
  _bt->frac |= (uint64_t)_bt->sec << (64 + _exp);
  _bt->sec >>= -_exp;
 }
}
# 144 "/usr/include/sys/time.h" 3 4
static __inline int
sbintime_getsec(sbintime_t _sbt)
{

 return (_sbt >> 32);
}

static __inline sbintime_t
bttosbt(const struct bintime _bt)
{

 return (((sbintime_t)_bt.sec << 32) + (_bt.frac >> 32));
}

static __inline struct bintime
sbttobt(sbintime_t _sbt)
{
 struct bintime _bt;

 _bt.sec = _sbt >> 32;
 _bt.frac = _sbt << 32;
 return (_bt);
}
# 182 "/usr/include/sys/time.h" 3 4
static __inline void
bintime2timespec(const struct bintime *_bt, struct timespec *_ts)
{

 _ts->tv_sec = _bt->sec;
 _ts->tv_nsec = ((uint64_t)1000000000 *
     (uint32_t)(_bt->frac >> 32)) >> 32;
}

static __inline void
timespec2bintime(const struct timespec *_ts, struct bintime *_bt)
{

 _bt->sec = _ts->tv_sec;

 _bt->frac = _ts->tv_nsec * (uint64_t)18446744073LL;
}

static __inline void
bintime2timeval(const struct bintime *_bt, struct timeval *_tv)
{

 _tv->tv_sec = _bt->sec;
 _tv->tv_usec = ((uint64_t)1000000 * (uint32_t)(_bt->frac >> 32)) >> 32;
}

static __inline void
timeval2bintime(const struct timeval *_tv, struct bintime *_bt)
{

 _bt->sec = _tv->tv_sec;

 _bt->frac = _tv->tv_usec * (uint64_t)18446744073709LL;
}

static __inline struct timespec
sbttots(sbintime_t _sbt)
{
 struct timespec _ts;

 _ts.tv_sec = _sbt >> 32;
 _ts.tv_nsec = ((uint64_t)1000000000 * (uint32_t)_sbt) >> 32;
 return (_ts);
}

static __inline sbintime_t
tstosbt(struct timespec _ts)
{

 return (((sbintime_t)_ts.tv_sec << 32) +
     (_ts.tv_nsec * (((uint64_t)1 << 63) / 500000000) >> 32));
}

static __inline struct timeval
sbttotv(sbintime_t _sbt)
{
 struct timeval _tv;

 _tv.tv_sec = _sbt >> 32;
 _tv.tv_usec = ((uint64_t)1000000 * (uint32_t)_sbt) >> 32;
 return (_tv);
}

static __inline sbintime_t
tvtosbt(struct timeval _tv)
{

 return (((sbintime_t)_tv.tv_sec << 32) +
     (_tv.tv_usec * (((uint64_t)1 << 63) / 500000) >> 32));
}
# 262 "/usr/include/sys/time.h" 3 4
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};





int utimes (const char *__path, const struct timeval *__tvp);


int adjtime (const struct timeval *, struct timeval *);
int futimes (int, const struct timeval *);
int lutimes (const char *, const struct timeval *);
int settimeofday (const struct timeval *, const struct timezone *);



int getitimer (int __which, struct itimerval *__value);
int setitimer (int __which, const struct itimerval *
# 282 "/usr/include/sys/time.h"
                                                   __restrict 
# 282 "/usr/include/sys/time.h" 3 4
                                                              __value,
     struct itimerval *
# 283 "/usr/include/sys/time.h"
                      __restrict 
# 283 "/usr/include/sys/time.h" 3 4
                                 __ovalue);


int gettimeofday (struct timeval *
# 286 "/usr/include/sys/time.h"
                                 __restrict 
# 286 "/usr/include/sys/time.h" 3 4
                                            __p,
     void *
# 287 "/usr/include/sys/time.h"
          __restrict 
# 287 "/usr/include/sys/time.h" 3 4
                     __tz);


int futimesat (int, const char *, const struct timeval [2]);









# 1 "/usr/include/machine/_time.h" 1 3 4
# 301 "/usr/include/sys/time.h" 2 3 4
# 213 "/usr/include/sys/_default_fcntl.h" 2 3 4
extern int futimesat (int, const char *, const struct timeval *);
# 4 "/usr/include/sys/fcntl.h" 2 3 4
# 30 "./include/grub/emu/misc.h" 2
# 1 "/usr/include/sys/cygwin.h" 1 3 4
# 14 "/usr/include/sys/cygwin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 11 "/usr/include/limits.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 12 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 2 3 4
# 15 "/usr/include/sys/cygwin.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 13 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/sys/_intsup.h" 1 3 4
# 35 "/usr/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
# 187 "/usr/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
# 14 "/usr/include/stdint.h" 2 3 4







typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "/usr/include/stdint.h" 3 4
  typedef signed char int_fast8_t;
  typedef unsigned char uint_fast8_t;
# 61 "/usr/include/stdint.h" 3 4
  typedef long int int_fast16_t;
  typedef long unsigned int uint_fast16_t;
# 71 "/usr/include/stdint.h" 3 4
  typedef long int int_fast32_t;
  typedef long unsigned int uint_fast32_t;
# 81 "/usr/include/stdint.h" 3 4
  typedef long int int_fast64_t;
  typedef long unsigned int uint_fast64_t;
# 10 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdint.h" 2 3 4
# 16 "/usr/include/sys/cygwin.h" 2 3 4
# 47 "/usr/include/sys/cygwin.h" 3 4
enum
{
  CCP_POSIX_TO_WIN_A = 0,
  CCP_POSIX_TO_WIN_W,
  CCP_WIN_A_TO_POSIX,
  CCP_WIN_W_TO_POSIX,

  CCP_CONVTYPE_MASK = 3,


  CCP_ABSOLUTE = 0,
  CCP_RELATIVE = 0x100,
  CCP_PROC_CYGDRIVE = 0x200,


  CCP_CONVFLAGS_MASK = 0x300,
};
typedef unsigned int cygwin_conv_path_t;
# 76 "/usr/include/sys/cygwin.h" 3 4
extern ssize_t cygwin_conv_path (cygwin_conv_path_t what, const void *from,
     void *to, size_t size);

extern ssize_t cygwin_conv_path_list (cygwin_conv_path_t what, const void *from,
     void *to, size_t size);



extern void *cygwin_create_path (cygwin_conv_path_t what, const void *from);

extern pid_t cygwin_winpid_to_pid (int);
extern int cygwin_posix_path_list_p (const char *);
extern void cygwin_split_path (const char *, char *, char *);

struct __cygwin_perfile
{
  const char *name;
  unsigned flags;
};




typedef enum
  {
    CW_LOCK_PINFO,
    CW_UNLOCK_PINFO,
    CW_GETTHREADNAME,
    CW_GETPINFO,
    CW_SETPINFO,
    CW_SETTHREADNAME,
    CW_GETVERSIONINFO,
    CW_READ_V1_MOUNT_TABLES,
    CW_USER_DATA,
    CW_PERFILE,
    CW_GET_CYGDRIVE_PREFIXES,
    CW_GETPINFO_FULL,
    CW_INIT_EXCEPTIONS,
    CW_GET_CYGDRIVE_INFO,
    CW_SET_CYGWIN_REGISTRY_NAME,
    CW_GET_CYGWIN_REGISTRY_NAME,
    CW_STRACE_TOGGLE,
    CW_STRACE_ACTIVE,
    CW_CYGWIN_PID_TO_WINPID,
    CW_EXTRACT_DOMAIN_AND_USER,
    CW_CMDLINE,
    CW_CHECK_NTSEC,
    CW_GET_ERRNO_FROM_WINERROR,
    CW_GET_POSIX_SECURITY_ATTRIBUTE,
    CW_GET_SHMLBA,
    CW_GET_UID_FROM_SID,
    CW_GET_GID_FROM_SID,
    CW_GET_BINMODE,
    CW_HOOK,
    CW_ARGV,
    CW_ENVP,
    CW_DEBUG_SELF,
    CW_SYNC_WINENV,
    CW_CYGTLS_PADSIZE,
    CW_SET_DOS_FILE_WARNING,
    CW_SET_PRIV_KEY,
    CW_SETERRNO,
    CW_EXIT_PROCESS,
    CW_SET_EXTERNAL_TOKEN,
    CW_GET_INSTKEY,
    CW_INT_SETLOCALE,
    CW_CVT_MNT_OPTS,
    CW_LST_MNT_OPTS,
    CW_STRERROR,
    CW_CVT_ENV_TO_WINENV,
    CW_ALLOC_DRIVE_MAP,
    CW_MAP_DRIVE_MAP,
    CW_FREE_DRIVE_MAP,
    CW_SETENT,
    CW_GETENT,
    CW_ENDENT,
    CW_GETNSSSEP,
    CW_GETPWSID,
    CW_GETGRSID,
    CW_CYGNAME_FROM_WINNAME,
    CW_FIXED_ATEXIT,
    CW_GETNSS_PWD_SRC,
    CW_GETNSS_GRP_SRC,
    CW_EXCEPTION_RECORD_FROM_SIGINFO_T,
    CW_CYGHEAP_PROFTHR_ALL,
  } cygwin_getinfo_types;
# 225 "/usr/include/sys/cygwin.h" 3 4
enum
{
  CW_TOKEN_IMPERSONATION = 0,
  CW_TOKEN_RESTRICTED = 1
};


enum
{
  NSS_SRC_FILES = 1,
  NSS_SRC_DB = 2
};


enum nss_enum_t
{
  ENUM_NONE = 0x00,
  ENUM_CACHE = 0x01,
  ENUM_FILES = 0x02,
  ENUM_BUILTIN = 0x04,
  ENUM_LOCAL = 0x08,
  ENUM_PRIMARY = 0x10,
  ENUM_TDOMS = 0x20,
  ENUM_TDOMS_ALL = 0x40,
  ENUM_ALL = 0x7f
};


uintptr_t cygwin_internal (cygwin_getinfo_types, ...);


enum
{
  PID_IN_USE = 0x00001,
  PID_UNUSED = 0x00002,
  PID_STOPPED = 0x00004,
  PID_TTYIN = 0x00008,
  PID_TTYOU = 0x00010,
  PID_NOTCYGWIN = 0x00020,
  PID_ACTIVE = 0x00040,
  PID_CYGPARENT = 0x00080,
  PID_MAP_RW = 0x00100,
  PID_MYSELF = 0x00200,
  PID_NOCLDSTOP = 0x00400,
  PID_INITIALIZING = 0x00800,
  PID_NEW = 0x01000,
  PID_ALLPIDS = 0x02000,
  PID_EXECED = 0x04000,
  PID_NOREDIR = 0x08000,
  PID_EXITED = 0x40000000,
  PID_REAPED = 0x80000000
};
# 31 "./include/grub/emu/misc.h" 2
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 1 3 4
# 32 "./include/grub/emu/misc.h" 2
# 44 "./include/grub/emu/misc.h"

# 44 "./include/grub/emu/misc.h"
extern int verbosity;
extern const char *program_name;

void grub_emu_init (void);
void grub_init_all (void);
void grub_fini_all (void);
void grub_emu_post_init (void);

void grub_find_zpool_from_dir (const char *dir,
          char **poolname, char **poolfs);

char *grub_make_system_path_relative_to_its_root (const char *path)
  __attribute__ ((warn_unused_result));
int
grub_util_device_is_mapped (const char *dev);

void * xmalloc (grub_size_t size) __attribute__ ((warn_unused_result));
void * xrealloc (void *ptr, grub_size_t size) __attribute__ ((warn_unused_result));
char * xstrdup (const char *str) __attribute__ ((warn_unused_result));
char * xasprintf (const char *fmt, ...) __attribute__ ((format (printf, 1, 2))) __attribute__ ((warn_unused_result));

void grub_util_warn (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
void grub_util_info (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
void grub_util_error (const char *fmt, ...) __attribute__ ((format (printf, 1, 2), noreturn));
# 77 "./include/grub/emu/misc.h"
extern char * canonicalize_file_name (const char *path);
# 23 "util/grub-fstest.c" 2
# 1 "./include/grub/util/misc.h" 1
# 22 "./include/grub/util/misc.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 10 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/machine/ieeefp.h" 1 3 4
# 11 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 17 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/machine/stdlib.h" 1 3 4
# 15 "/usr/include/machine/stdlib.h" 3 4

# 15 "/usr/include/machine/stdlib.h" 3 4
char *mkdtemp (char *);
# 21 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 23 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/cygwin/stdlib.h" 1 3 4
# 13 "/usr/include/cygwin/stdlib.h" 3 4
# 1 "/usr/include/cygwin/wait.h" 1 3 4
# 14 "/usr/include/cygwin/stdlib.h" 2 3 4






const char *getprogname (void);
void setprogname (const char *);


char *canonicalize_file_name (const char *);


int unsetenv (const char *);


char *ptsname (int);
int grantpt (int);
int unlockpt (int);


int ptsname_r(int, char *, size_t);
int getpt (void);



int posix_openpt (int);







extern void *memalign (size_t, size_t);

extern void *valloc (size_t);
# 81 "/usr/include/cygwin/stdlib.h" 3 4
int getloadavg(double loadavg[], int nelem);
# 27 "/usr/include/stdlib.h" 2 3 4








typedef struct
{
  int quot;
  int rem;
} div_t;

typedef struct
{
  long quot;
  long rem;
} ldiv_t;


typedef struct
{
  long long int quot;
  long long int rem;
} lldiv_t;




typedef int (*__compar_fn_t) (const void *, const void *);







int __locale_mb_cur_max (void);



void abort (void) __attribute__ ((__noreturn__));
int abs (int);

__uint32_t arc4random (void);
__uint32_t arc4random_uniform (__uint32_t);
void arc4random_buf (void *, size_t);

int atexit (void (*__func)(void));
double atof (const char *__nptr);

float atoff (const char *__nptr);

int atoi (const char *__nptr);
int _atoi_r (struct _reent *, const char *__nptr);
long atol (const char *__nptr);
long _atol_r (struct _reent *, const char *__nptr);
void * bsearch (const void *__key,
         const void *__base,
         size_t __nmemb,
         size_t __size,
         __compar_fn_t _compar);
void * calloc (size_t __nmemb, size_t __size) ;
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((__noreturn__));
void free (void *) ;
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);
char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);

extern char *suboptarg;
int getsubopt (char **, char * const *, char **);

long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void * malloc (size_t __size) ;
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int mbtowc (wchar_t *
# 107 "/usr/include/stdlib.h"
                    __restrict
# 107 "/usr/include/stdlib.h" 3 4
                              , const char *
# 107 "/usr/include/stdlib.h"
                                            __restrict
# 107 "/usr/include/stdlib.h" 3 4
                                                      , size_t);
int _mbtowc_r (struct _reent *, wchar_t *
# 108 "/usr/include/stdlib.h"
                                        __restrict
# 108 "/usr/include/stdlib.h" 3 4
                                                  , const char *
# 108 "/usr/include/stdlib.h"
                                                                __restrict
# 108 "/usr/include/stdlib.h" 3 4
                                                                          , size_t, _mbstate_t *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t mbstowcs (wchar_t *
# 111 "/usr/include/stdlib.h"
                         __restrict
# 111 "/usr/include/stdlib.h" 3 4
                                   , const char *
# 111 "/usr/include/stdlib.h"
                                                 __restrict
# 111 "/usr/include/stdlib.h" 3 4
                                                           , size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *
# 112 "/usr/include/stdlib.h"
                                             __restrict
# 112 "/usr/include/stdlib.h" 3 4
                                                       , const char *
# 112 "/usr/include/stdlib.h"
                                                                     __restrict
# 112 "/usr/include/stdlib.h" 3 4
                                                                               , size_t, _mbstate_t *);
size_t wcstombs (char *
# 113 "/usr/include/stdlib.h"
                      __restrict
# 113 "/usr/include/stdlib.h" 3 4
                                , const wchar_t *
# 113 "/usr/include/stdlib.h"
                                                 __restrict
# 113 "/usr/include/stdlib.h" 3 4
                                                           , size_t);
size_t _wcstombs_r (struct _reent *, char *
# 114 "/usr/include/stdlib.h"
                                          __restrict
# 114 "/usr/include/stdlib.h" 3 4
                                                    , const wchar_t *
# 114 "/usr/include/stdlib.h"
                                                                     __restrict
# 114 "/usr/include/stdlib.h" 3 4
                                                                               , size_t, _mbstate_t *);


char * mkdtemp (char *);


int mkostemp (char *, int);
int mkostemps (char *, int, int);


int mkstemp (char *);


int mkstemps (char *, int);


char * mktemp (char *) __attribute__ ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));


char * _mkdtemp_r (struct _reent *, char *);
int _mkostemp_r (struct _reent *, char *, int);
int _mkostemps_r (struct _reent *, char *, int, int);
int _mkstemp_r (struct _reent *, char *);
int _mkstemps_r (struct _reent *, char *, int);
char * _mktemp_r (struct _reent *, char *) __attribute__ ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));
void qsort (void *__base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int rand (void);
void * realloc (void *__r, size_t __size) ;

void *reallocarray(void *, size_t, size_t) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2)))
     __attribute__((__alloc_size__(3)));
void * reallocf (void *__r, size_t __size);


char * realpath (const char *
# 148 "/usr/include/stdlib.h"
                            __restrict 
# 148 "/usr/include/stdlib.h" 3 4
                                       path, char *
# 148 "/usr/include/stdlib.h"
                                                   __restrict 
# 148 "/usr/include/stdlib.h" 3 4
                                                              resolved_path);


int rpmatch (const char *response);


void setkey (const char *__key);

void srand (unsigned __seed);
double strtod (const char *
# 157 "/usr/include/stdlib.h"
                          __restrict 
# 157 "/usr/include/stdlib.h" 3 4
                                     __n, char **
# 157 "/usr/include/stdlib.h"
                                                 __restrict 
# 157 "/usr/include/stdlib.h" 3 4
                                                            __end_PTR);
double _strtod_r (struct _reent *,const char *
# 158 "/usr/include/stdlib.h"
                                             __restrict 
# 158 "/usr/include/stdlib.h" 3 4
                                                        __n, char **
# 158 "/usr/include/stdlib.h"
                                                                    __restrict 
# 158 "/usr/include/stdlib.h" 3 4
                                                                               __end_PTR);

float strtof (const char *
# 160 "/usr/include/stdlib.h"
                         __restrict 
# 160 "/usr/include/stdlib.h" 3 4
                                    __n, char **
# 160 "/usr/include/stdlib.h"
                                                __restrict 
# 160 "/usr/include/stdlib.h" 3 4
                                                           __end_PTR);







long strtol (const char *
# 168 "/usr/include/stdlib.h"
                        __restrict 
# 168 "/usr/include/stdlib.h" 3 4
                                   __n, char **
# 168 "/usr/include/stdlib.h"
                                               __restrict 
# 168 "/usr/include/stdlib.h" 3 4
                                                          __end_PTR, int __base);
long _strtol_r (struct _reent *,const char *
# 169 "/usr/include/stdlib.h"
                                           __restrict 
# 169 "/usr/include/stdlib.h" 3 4
                                                      __n, char **
# 169 "/usr/include/stdlib.h"
                                                                  __restrict 
# 169 "/usr/include/stdlib.h" 3 4
                                                                             __end_PTR, int __base);
unsigned long strtoul (const char *
# 170 "/usr/include/stdlib.h"
                                  __restrict 
# 170 "/usr/include/stdlib.h" 3 4
                                             __n, char **
# 170 "/usr/include/stdlib.h"
                                                         __restrict 
# 170 "/usr/include/stdlib.h" 3 4
                                                                    __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *
# 171 "/usr/include/stdlib.h"
                                                     __restrict 
# 171 "/usr/include/stdlib.h" 3 4
                                                                __n, char **
# 171 "/usr/include/stdlib.h"
                                                                            __restrict 
# 171 "/usr/include/stdlib.h" 3 4
                                                                                       __end_PTR, int __base);


double strtod_l (const char *
# 174 "/usr/include/stdlib.h"
                            __restrict
# 174 "/usr/include/stdlib.h" 3 4
                                      , char **
# 174 "/usr/include/stdlib.h"
                                               __restrict
# 174 "/usr/include/stdlib.h" 3 4
                                                         , locale_t);
float strtof_l (const char *
# 175 "/usr/include/stdlib.h"
                           __restrict
# 175 "/usr/include/stdlib.h" 3 4
                                     , char **
# 175 "/usr/include/stdlib.h"
                                              __restrict
# 175 "/usr/include/stdlib.h" 3 4
                                                        , locale_t);

extern long double strtold_l (const char *
# 177 "/usr/include/stdlib.h"
                                         __restrict
# 177 "/usr/include/stdlib.h" 3 4
                                                   , char **
# 177 "/usr/include/stdlib.h"
                                                            __restrict
# 177 "/usr/include/stdlib.h" 3 4
                                                                      ,
         locale_t);

long strtol_l (const char *
# 180 "/usr/include/stdlib.h"
                          __restrict
# 180 "/usr/include/stdlib.h" 3 4
                                    , char **
# 180 "/usr/include/stdlib.h"
                                             __restrict
# 180 "/usr/include/stdlib.h" 3 4
                                                       , int, locale_t);
unsigned long strtoul_l (const char *
# 181 "/usr/include/stdlib.h"
                                    __restrict
# 181 "/usr/include/stdlib.h" 3 4
                                              , char **
# 181 "/usr/include/stdlib.h"
                                                       __restrict
# 181 "/usr/include/stdlib.h" 3 4
                                                                 , int,
    locale_t __loc);
long long strtoll_l (const char *
# 183 "/usr/include/stdlib.h"
                                __restrict
# 183 "/usr/include/stdlib.h" 3 4
                                          , char **
# 183 "/usr/include/stdlib.h"
                                                   __restrict
# 183 "/usr/include/stdlib.h" 3 4
                                                             , int, locale_t);
unsigned long long strtoull_l (const char *
# 184 "/usr/include/stdlib.h"
                                          __restrict
# 184 "/usr/include/stdlib.h" 3 4
                                                    , char **
# 184 "/usr/include/stdlib.h"
                                                             __restrict
# 184 "/usr/include/stdlib.h" 3 4
                                                                       , int,
          locale_t __loc);


int system (const char *__string);


long a64l (const char *__input);
char * l64a (long __input);
char * _l64a_r (struct _reent *,long __input);


int on_exit (void (*__func)(int, void *),void *__arg);


void _Exit (int __status) __attribute__ ((__noreturn__));


int putenv (char *__string);

int _putenv_r (struct _reent *, char *__string);
void * _reallocf_r (struct _reent *, void *, size_t);

int setenv (const char *__string, const char *__value, int __overwrite);

int _setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);
# 221 "/usr/include/stdlib.h" 3 4
char * __itoa (int, char *, int);
char * __utoa (unsigned, char *, int);

char * itoa (int, char *, int);
char * utoa (unsigned, char *, int);


int rand_r (unsigned *__seed);



double drand48 (void);
double _drand48_r (struct _reent *);
double erand48 (unsigned short [3]);
double _erand48_r (struct _reent *, unsigned short [3]);
long jrand48 (unsigned short [3]);
long _jrand48_r (struct _reent *, unsigned short [3]);
void lcong48 (unsigned short [7]);
void _lcong48_r (struct _reent *, unsigned short [7]);
long lrand48 (void);
long _lrand48_r (struct _reent *);
long mrand48 (void);
long _mrand48_r (struct _reent *);
long nrand48 (unsigned short [3]);
long _nrand48_r (struct _reent *, unsigned short [3]);
unsigned short *
       seed48 (unsigned short [3]);
unsigned short *
       _seed48_r (struct _reent *, unsigned short [3]);
void srand48 (long);
void _srand48_r (struct _reent *, long);


char * initstate (unsigned, char *, size_t);
long random (void);
char * setstate (char *);
void srandom (unsigned);


long long atoll (const char *__nptr);

long long _atoll_r (struct _reent *, const char *__nptr);

long long llabs (long long);
lldiv_t lldiv (long long __numer, long long __denom);
long long strtoll (const char *
# 266 "/usr/include/stdlib.h"
                              __restrict 
# 266 "/usr/include/stdlib.h" 3 4
                                         __n, char **
# 266 "/usr/include/stdlib.h"
                                                     __restrict 
# 266 "/usr/include/stdlib.h" 3 4
                                                                __end_PTR, int __base);

long long _strtoll_r (struct _reent *, const char *
# 268 "/usr/include/stdlib.h"
                                                  __restrict 
# 268 "/usr/include/stdlib.h" 3 4
                                                             __n, char **
# 268 "/usr/include/stdlib.h"
                                                                         __restrict 
# 268 "/usr/include/stdlib.h" 3 4
                                                                                    __end_PTR, int __base);

unsigned long long strtoull (const char *
# 270 "/usr/include/stdlib.h"
                                        __restrict 
# 270 "/usr/include/stdlib.h" 3 4
                                                   __n, char **
# 270 "/usr/include/stdlib.h"
                                                               __restrict 
# 270 "/usr/include/stdlib.h" 3 4
                                                                          __end_PTR, int __base);

unsigned long long _strtoull_r (struct _reent *, const char *
# 272 "/usr/include/stdlib.h"
                                                            __restrict 
# 272 "/usr/include/stdlib.h" 3 4
                                                                       __n, char **
# 272 "/usr/include/stdlib.h"
                                                                                   __restrict 
# 272 "/usr/include/stdlib.h" 3 4
                                                                                              __end_PTR, int __base);
# 285 "/usr/include/stdlib.h" 3 4
int __attribute__((__nonnull__ (1))) posix_memalign (void **, size_t, size_t);


char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);







int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);






void qsort_r (void *__base, size_t __nmemb, size_t __size, int (*_compar)(const void *, const void *, void *), void *__thunk);
# 318 "/usr/include/stdlib.h" 3 4
extern long double _strtold_r (struct _reent *, const char *
# 318 "/usr/include/stdlib.h"
                                                           __restrict
# 318 "/usr/include/stdlib.h" 3 4
                                                                     , char **
# 318 "/usr/include/stdlib.h"
                                                                              __restrict
# 318 "/usr/include/stdlib.h" 3 4
                                                                                        );

extern long double strtold (const char *
# 320 "/usr/include/stdlib.h"
                                       __restrict
# 320 "/usr/include/stdlib.h" 3 4
                                                 , char **
# 320 "/usr/include/stdlib.h"
                                                          __restrict
# 320 "/usr/include/stdlib.h" 3 4
                                                                    );







void * aligned_alloc(size_t, size_t) __attribute__((__malloc__)) __attribute__((__alloc_align__(1)))
     __attribute__((__alloc_size__(2)));
int at_quick_exit(void (*)(void));
_Noreturn void
 quick_exit(int);



# 23 "./include/grub/util/misc.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 36 "/usr/include/stdio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 37 "/usr/include/stdio.h" 2 3 4
# 63 "/usr/include/stdio.h" 3 4



typedef __FILE FILE;




typedef _fpos64_t fpos_t;







# 1 "/usr/include/sys/stdio.h" 1 3 4
# 33 "/usr/include/sys/stdio.h" 3 4


ssize_t getline (char **, size_t *, FILE *);
ssize_t getdelim (char **, size_t *, int, FILE *);


# 80 "/usr/include/stdio.h" 2 3 4
# 181 "/usr/include/stdio.h" 3 4
char * ctermid (char *);




FILE * tmpfile (void);
char * tmpnam (char *);

char * tempnam (const char *, const char *);

int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *
# 193 "/usr/include/stdio.h"
                           __restrict
# 193 "/usr/include/stdio.h" 3 4
                                     , const char *
# 193 "/usr/include/stdio.h"
                                                   __restrict
# 193 "/usr/include/stdio.h" 3 4
                                                             , FILE *
# 193 "/usr/include/stdio.h"
                                                                     __restrict
# 193 "/usr/include/stdio.h" 3 4
                                                                               );
void setbuf (FILE *
# 194 "/usr/include/stdio.h"
                  __restrict
# 194 "/usr/include/stdio.h" 3 4
                            , char *
# 194 "/usr/include/stdio.h"
                                    __restrict
# 194 "/usr/include/stdio.h" 3 4
                                              );
int setvbuf (FILE *
# 195 "/usr/include/stdio.h"
                  __restrict
# 195 "/usr/include/stdio.h" 3 4
                            , char *
# 195 "/usr/include/stdio.h"
                                    __restrict
# 195 "/usr/include/stdio.h" 3 4
                                              , int, size_t);
int fprintf (FILE *
# 196 "/usr/include/stdio.h"
                  __restrict
# 196 "/usr/include/stdio.h" 3 4
                            , const char *
# 196 "/usr/include/stdio.h"
                                          __restrict
# 196 "/usr/include/stdio.h" 3 4
                                                    , ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf (FILE *
# 198 "/usr/include/stdio.h"
                 __restrict
# 198 "/usr/include/stdio.h" 3 4
                           , const char *
# 198 "/usr/include/stdio.h"
                                         __restrict
# 198 "/usr/include/stdio.h" 3 4
                                                   , ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int printf (const char *
# 200 "/usr/include/stdio.h"
                       __restrict
# 200 "/usr/include/stdio.h" 3 4
                                 , ...)
               __attribute__ ((__format__ (__printf__, 1, 2)));
int scanf (const char *
# 202 "/usr/include/stdio.h"
                      __restrict
# 202 "/usr/include/stdio.h" 3 4
                                , ...)
               __attribute__ ((__format__ (__scanf__, 1, 2)));
int sscanf (const char *
# 204 "/usr/include/stdio.h"
                       __restrict
# 204 "/usr/include/stdio.h" 3 4
                                 , const char *
# 204 "/usr/include/stdio.h"
                                               __restrict
# 204 "/usr/include/stdio.h" 3 4
                                                         , ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int vfprintf (FILE *
# 206 "/usr/include/stdio.h"
                   __restrict
# 206 "/usr/include/stdio.h" 3 4
                             , const char *
# 206 "/usr/include/stdio.h"
                                           __restrict
# 206 "/usr/include/stdio.h" 3 4
                                                     , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vprintf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 1, 0)));
int vsprintf (char *
# 210 "/usr/include/stdio.h"
                   __restrict
# 210 "/usr/include/stdio.h" 3 4
                             , const char *
# 210 "/usr/include/stdio.h"
                                           __restrict
# 210 "/usr/include/stdio.h" 3 4
                                                     , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int fgetc (FILE *);
char * fgets (char *
# 213 "/usr/include/stdio.h"
                    __restrict
# 213 "/usr/include/stdio.h" 3 4
                              , int, FILE *
# 213 "/usr/include/stdio.h"
                                           __restrict
# 213 "/usr/include/stdio.h" 3 4
                                                     );
int fputc (int, FILE *);
int fputs (const char *
# 215 "/usr/include/stdio.h"
                      __restrict
# 215 "/usr/include/stdio.h" 3 4
                                , FILE *
# 215 "/usr/include/stdio.h"
                                        __restrict
# 215 "/usr/include/stdio.h" 3 4
                                                  );
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void *
# 223 "/usr/include/stdio.h"
                   __restrict
# 223 "/usr/include/stdio.h" 3 4
                             , size_t _size, size_t _n, FILE *
# 223 "/usr/include/stdio.h"
                                                              __restrict
# 223 "/usr/include/stdio.h" 3 4
                                                                        );
size_t fwrite (const void *
# 224 "/usr/include/stdio.h"
                          __restrict 
# 224 "/usr/include/stdio.h" 3 4
                                     , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *
# 228 "/usr/include/stdio.h"
                  __restrict
# 228 "/usr/include/stdio.h" 3 4
                            , fpos_t *
# 228 "/usr/include/stdio.h"
                                      __restrict
# 228 "/usr/include/stdio.h" 3 4
                                                );

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char *
# 243 "/usr/include/stdio.h"
                         __restrict 
# 243 "/usr/include/stdio.h" 3 4
                                    _name, const char *
# 243 "/usr/include/stdio.h"
                                                       __restrict 
# 243 "/usr/include/stdio.h" 3 4
                                                                  _type);
int sprintf (char *
# 244 "/usr/include/stdio.h"
                  __restrict
# 244 "/usr/include/stdio.h" 3 4
                            , const char *
# 244 "/usr/include/stdio.h"
                                          __restrict
# 244 "/usr/include/stdio.h" 3 4
                                                    , ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int remove (const char *);
int rename (const char *, const char *);
# 257 "/usr/include/stdio.h" 3 4
int fseeko (FILE *, off_t, int);
off_t ftello (FILE *);



int fcloseall (void);



int snprintf (char *
# 266 "/usr/include/stdio.h"
                   __restrict
# 266 "/usr/include/stdio.h" 3 4
                             , size_t, const char *
# 266 "/usr/include/stdio.h"
                                                   __restrict
# 266 "/usr/include/stdio.h" 3 4
                                                             , ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf (char *
# 268 "/usr/include/stdio.h"
                    __restrict
# 268 "/usr/include/stdio.h" 3 4
                              , size_t, const char *
# 268 "/usr/include/stdio.h"
                                                    __restrict
# 268 "/usr/include/stdio.h" 3 4
                                                              , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int vfscanf (FILE *
# 270 "/usr/include/stdio.h"
                  __restrict
# 270 "/usr/include/stdio.h" 3 4
                            , const char *
# 270 "/usr/include/stdio.h"
                                          __restrict
# 270 "/usr/include/stdio.h" 3 4
                                                    , __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int vscanf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 1, 0)));
int vsscanf (const char *
# 274 "/usr/include/stdio.h"
                        __restrict
# 274 "/usr/include/stdio.h" 3 4
                                  , const char *
# 274 "/usr/include/stdio.h"
                                                __restrict
# 274 "/usr/include/stdio.h" 3 4
                                                          , __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));


int asprintf (char **
# 278 "/usr/include/stdio.h"
                    __restrict
# 278 "/usr/include/stdio.h" 3 4
                              , const char *
# 278 "/usr/include/stdio.h"
                                            __restrict
# 278 "/usr/include/stdio.h" 3 4
                                                      , ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int vasprintf (char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));


int asiprintf (char **, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
char * asniprintf (char *, size_t *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
char * asnprintf (char *
# 288 "/usr/include/stdio.h"
                       __restrict
# 288 "/usr/include/stdio.h" 3 4
                                 , size_t *
# 288 "/usr/include/stdio.h"
                                           __restrict
# 288 "/usr/include/stdio.h" 3 4
                                                     , const char *
# 288 "/usr/include/stdio.h"
                                                                   __restrict
# 288 "/usr/include/stdio.h" 3 4
                                                                             , ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));

int diprintf (int, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));

int fiprintf (FILE *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int fiscanf (FILE *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int iprintf (const char *, ...)
               __attribute__ ((__format__ (__printf__, 1, 2)));
int iscanf (const char *, ...)
               __attribute__ ((__format__ (__scanf__, 1, 2)));
int siprintf (char *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int siscanf (const char *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int sniprintf (char *, size_t, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int vasiprintf (char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
char * vasniprintf (char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
char * vasnprintf (char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int vdiprintf (int, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vfiprintf (FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vfiscanf (FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int viprintf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 1, 0)));
int viscanf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 1, 0)));
int vsiprintf (char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vsiscanf (const char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int vsniprintf (char *, size_t, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
# 339 "/usr/include/stdio.h" 3 4
FILE * fdopen (int, const char *);

int fileno (FILE *);


int pclose (FILE *);
FILE * popen (const char *, const char *);



void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);



int getw (FILE *);
int putw (int, FILE *);


int getc_unlocked (FILE *);
int getchar_unlocked (void);
void flockfile (FILE *);
int ftrylockfile (FILE *);
void funlockfile (FILE *);
int putc_unlocked (int, FILE *);
int putchar_unlocked (int);
# 374 "/usr/include/stdio.h" 3 4
int dprintf (int, const char *
# 374 "/usr/include/stdio.h"
                             __restrict
# 374 "/usr/include/stdio.h" 3 4
                                       , ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));

FILE * fmemopen (void *
# 377 "/usr/include/stdio.h"
                      __restrict
# 377 "/usr/include/stdio.h" 3 4
                                , size_t, const char *
# 377 "/usr/include/stdio.h"
                                                      __restrict
# 377 "/usr/include/stdio.h" 3 4
                                                                );


FILE * open_memstream (char **, size_t *);
int vdprintf (int, const char *
# 381 "/usr/include/stdio.h"
                              __restrict
# 381 "/usr/include/stdio.h" 3 4
                                        , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));



int renameat (int, const char *, int, const char *);

int renameat2 (int, const char *, int, const char *, unsigned int);







int _asiprintf_r (struct _reent *, char **, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
char * _asniprintf_r (struct _reent *, char *, size_t *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
char * _asnprintf_r (struct _reent *, char *
# 400 "/usr/include/stdio.h"
                                           __restrict
# 400 "/usr/include/stdio.h" 3 4
                                                     , size_t *
# 400 "/usr/include/stdio.h"
                                                               __restrict
# 400 "/usr/include/stdio.h" 3 4
                                                                         , const char *
# 400 "/usr/include/stdio.h"
                                                                                       __restrict
# 400 "/usr/include/stdio.h" 3 4
                                                                                                 , ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _asprintf_r (struct _reent *, char **
# 402 "/usr/include/stdio.h"
                                        __restrict
# 402 "/usr/include/stdio.h" 3 4
                                                  , const char *
# 402 "/usr/include/stdio.h"
                                                                __restrict
# 402 "/usr/include/stdio.h" 3 4
                                                                          , ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _diprintf_r (struct _reent *, int, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _dprintf_r (struct _reent *, int, const char *
# 406 "/usr/include/stdio.h"
                                                 __restrict
# 406 "/usr/include/stdio.h" 3 4
                                                           , ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
int _fgetc_r (struct _reent *, FILE *);
int _fgetc_unlocked_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *
# 414 "/usr/include/stdio.h"
                                        __restrict
# 414 "/usr/include/stdio.h" 3 4
                                                  , int, FILE *
# 414 "/usr/include/stdio.h"
                                                               __restrict
# 414 "/usr/include/stdio.h" 3 4
                                                                         );
char * _fgets_unlocked_r (struct _reent *, char *
# 415 "/usr/include/stdio.h"
                                                 __restrict
# 415 "/usr/include/stdio.h" 3 4
                                                           , int, FILE *
# 415 "/usr/include/stdio.h"
                                                                        __restrict
# 415 "/usr/include/stdio.h" 3 4
                                                                                  );




int _fgetpos_r (struct _reent *, FILE *, fpos_t *);
int _fsetpos_r (struct _reent *, FILE *, const fpos_t *);

int _fiprintf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fiscanf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
FILE * _fmemopen_r (struct _reent *, void *
# 427 "/usr/include/stdio.h"
                                          __restrict
# 427 "/usr/include/stdio.h" 3 4
                                                    , size_t, const char *
# 427 "/usr/include/stdio.h"
                                                                          __restrict
# 427 "/usr/include/stdio.h" 3 4
                                                                                    );
FILE * _fopen_r (struct _reent *, const char *
# 428 "/usr/include/stdio.h"
                                             __restrict
# 428 "/usr/include/stdio.h" 3 4
                                                       , const char *
# 428 "/usr/include/stdio.h"
                                                                     __restrict
# 428 "/usr/include/stdio.h" 3 4
                                                                               );
FILE * _freopen_r (struct _reent *, const char *
# 429 "/usr/include/stdio.h"
                                               __restrict
# 429 "/usr/include/stdio.h" 3 4
                                                         , const char *
# 429 "/usr/include/stdio.h"
                                                                       __restrict
# 429 "/usr/include/stdio.h" 3 4
                                                                                 , FILE *
# 429 "/usr/include/stdio.h"
                                                                                         __restrict
# 429 "/usr/include/stdio.h" 3 4
                                                                                                   );
int _fprintf_r (struct _reent *, FILE *
# 430 "/usr/include/stdio.h"
                                      __restrict
# 430 "/usr/include/stdio.h" 3 4
                                                , const char *
# 430 "/usr/include/stdio.h"
                                                              __restrict
# 430 "/usr/include/stdio.h" 3 4
                                                                        , ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fpurge_r (struct _reent *, FILE *);
int _fputc_r (struct _reent *, int, FILE *);
int _fputc_unlocked_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *
# 435 "/usr/include/stdio.h"
                                          __restrict
# 435 "/usr/include/stdio.h" 3 4
                                                    , FILE *
# 435 "/usr/include/stdio.h"
                                                            __restrict
# 435 "/usr/include/stdio.h" 3 4
                                                                      );
int _fputs_unlocked_r (struct _reent *, const char *
# 436 "/usr/include/stdio.h"
                                                   __restrict
# 436 "/usr/include/stdio.h" 3 4
                                                             , FILE *
# 436 "/usr/include/stdio.h"
                                                                     __restrict
# 436 "/usr/include/stdio.h" 3 4
                                                                               );
size_t _fread_r (struct _reent *, void *
# 437 "/usr/include/stdio.h"
                                       __restrict
# 437 "/usr/include/stdio.h" 3 4
                                                 , size_t _size, size_t _n, FILE *
# 437 "/usr/include/stdio.h"
                                                                                  __restrict
# 437 "/usr/include/stdio.h" 3 4
                                                                                            );
size_t _fread_unlocked_r (struct _reent *, void *
# 438 "/usr/include/stdio.h"
                                                __restrict
# 438 "/usr/include/stdio.h" 3 4
                                                          , size_t _size, size_t _n, FILE *
# 438 "/usr/include/stdio.h"
                                                                                           __restrict
# 438 "/usr/include/stdio.h" 3 4
                                                                                                     );
int _fscanf_r (struct _reent *, FILE *
# 439 "/usr/include/stdio.h"
                                     __restrict
# 439 "/usr/include/stdio.h" 3 4
                                               , const char *
# 439 "/usr/include/stdio.h"
                                                             __restrict
# 439 "/usr/include/stdio.h" 3 4
                                                                       , ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _fseek_r (struct _reent *, FILE *, long, int);
int _fseeko_r (struct _reent *, FILE *, _off_t, int);
long _ftell_r (struct _reent *, FILE *);
_off_t _ftello_r (struct _reent *, FILE *);
void _rewind_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void *
# 446 "/usr/include/stdio.h"
                                              __restrict
# 446 "/usr/include/stdio.h" 3 4
                                                        , size_t _size, size_t _n, FILE *
# 446 "/usr/include/stdio.h"
                                                                                         __restrict
# 446 "/usr/include/stdio.h" 3 4
                                                                                                   );
size_t _fwrite_unlocked_r (struct _reent *, const void *
# 447 "/usr/include/stdio.h"
                                                       __restrict
# 447 "/usr/include/stdio.h" 3 4
                                                                 , size_t _size, size_t _n, FILE *
# 447 "/usr/include/stdio.h"
                                                                                                  __restrict
# 447 "/usr/include/stdio.h" 3 4
                                                                                                            );
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _iscanf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
FILE * _open_memstream_r (struct _reent *, char **, size_t *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *
# 459 "/usr/include/stdio.h"
                                           __restrict
# 459 "/usr/include/stdio.h" 3 4
                                                     , ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *,
      const char *_old, const char *_new);
int _scanf_r (struct _reent *, const char *
# 469 "/usr/include/stdio.h"
                                          __restrict
# 469 "/usr/include/stdio.h" 3 4
                                                    , ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int _siprintf_r (struct _reent *, char *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _siscanf_r (struct _reent *, const char *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _snprintf_r (struct _reent *, char *
# 477 "/usr/include/stdio.h"
                                       __restrict
# 477 "/usr/include/stdio.h" 3 4
                                                 , size_t, const char *
# 477 "/usr/include/stdio.h"
                                                                       __restrict
# 477 "/usr/include/stdio.h" 3 4
                                                                                 , ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _sprintf_r (struct _reent *, char *
# 479 "/usr/include/stdio.h"
                                      __restrict
# 479 "/usr/include/stdio.h" 3 4
                                                , const char *
# 479 "/usr/include/stdio.h"
                                                              __restrict
# 479 "/usr/include/stdio.h" 3 4
                                                                        , ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _sscanf_r (struct _reent *, const char *
# 481 "/usr/include/stdio.h"
                                           __restrict
# 481 "/usr/include/stdio.h" 3 4
                                                     , const char *
# 481 "/usr/include/stdio.h"
                                                                   __restrict
# 481 "/usr/include/stdio.h" 3 4
                                                                             , ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
char * _vasniprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
char * _vasnprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdprintf_r (struct _reent *, int, const char *
# 497 "/usr/include/stdio.h"
                                                  __restrict
# 497 "/usr/include/stdio.h" 3 4
                                                            , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vfprintf_r (struct _reent *, FILE *
# 503 "/usr/include/stdio.h"
                                       __restrict
# 503 "/usr/include/stdio.h" 3 4
                                                 , const char *
# 503 "/usr/include/stdio.h"
                                                               __restrict
# 503 "/usr/include/stdio.h" 3 4
                                                                         , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfscanf_r (struct _reent *, FILE *
# 505 "/usr/include/stdio.h"
                                      __restrict
# 505 "/usr/include/stdio.h" 3 4
                                                , const char *
# 505 "/usr/include/stdio.h"
                                                              __restrict
# 505 "/usr/include/stdio.h" 3 4
                                                                        , __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _viprintf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _viscanf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vprintf_r (struct _reent *, const char *
# 511 "/usr/include/stdio.h"
                                            __restrict
# 511 "/usr/include/stdio.h" 3 4
                                                      , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _vscanf_r (struct _reent *, const char *
# 513 "/usr/include/stdio.h"
                                           __restrict
# 513 "/usr/include/stdio.h" 3 4
                                                     , __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsnprintf_r (struct _reent *, char *
# 521 "/usr/include/stdio.h"
                                        __restrict
# 521 "/usr/include/stdio.h" 3 4
                                                  , size_t, const char *
# 521 "/usr/include/stdio.h"
                                                                        __restrict
# 521 "/usr/include/stdio.h" 3 4
                                                                                  , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsprintf_r (struct _reent *, char *
# 523 "/usr/include/stdio.h"
                                       __restrict
# 523 "/usr/include/stdio.h" 3 4
                                                 , const char *
# 523 "/usr/include/stdio.h"
                                                               __restrict
# 523 "/usr/include/stdio.h" 3 4
                                                                         , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsscanf_r (struct _reent *, const char *
# 525 "/usr/include/stdio.h"
                                            __restrict
# 525 "/usr/include/stdio.h" 3 4
                                                      , const char *
# 525 "/usr/include/stdio.h"
                                                                    __restrict
# 525 "/usr/include/stdio.h" 3 4
                                                                              , __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));



int fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);


void clearerr_unlocked (FILE *);
int feof_unlocked (FILE *);
int ferror_unlocked (FILE *);
int fileno_unlocked (FILE *);
int fflush_unlocked (FILE *);
int fgetc_unlocked (FILE *);
int fputc_unlocked (int, FILE *);
size_t fread_unlocked (void *
# 542 "/usr/include/stdio.h"
                            __restrict
# 542 "/usr/include/stdio.h" 3 4
                                      , size_t _size, size_t _n, FILE *
# 542 "/usr/include/stdio.h"
                                                                       __restrict
# 542 "/usr/include/stdio.h" 3 4
                                                                                 );
size_t fwrite_unlocked (const void *
# 543 "/usr/include/stdio.h"
                                   __restrict 
# 543 "/usr/include/stdio.h" 3 4
                                              , size_t _size, size_t _n, FILE *);



char * fgets_unlocked (char *
# 547 "/usr/include/stdio.h"
                             __restrict
# 547 "/usr/include/stdio.h" 3 4
                                       , int, FILE *
# 547 "/usr/include/stdio.h"
                                                    __restrict
# 547 "/usr/include/stdio.h" 3 4
                                                              );
int fputs_unlocked (const char *
# 548 "/usr/include/stdio.h"
                               __restrict
# 548 "/usr/include/stdio.h" 3 4
                                         , FILE *
# 548 "/usr/include/stdio.h"
                                                 __restrict
# 548 "/usr/include/stdio.h" 3 4
                                                           );
# 577 "/usr/include/stdio.h" 3 4
int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);







FILE *funopen (const void *__cookie,
  int (*__readfn)(void *__c, char *__buf,
    size_t __n),
  int (*__writefn)(void *__c, const char *__buf,
     size_t __n),
  _fpos64_t (*__seekfn)(void *__c, _fpos64_t __off, int __whence),
  int (*__closefn)(void *__c));
FILE *_funopen_r (struct _reent *, const void *__cookie,
  int (*__readfn)(void *__c, char *__buf,
    size_t __n),
  int (*__writefn)(void *__c, const char *__buf,
     size_t __n),
  _fpos64_t (*__seekfn)(void *__c, _fpos64_t __off, int __whence),
  int (*__closefn)(void *__c));
# 624 "/usr/include/stdio.h" 3 4
typedef ssize_t cookie_read_function_t(void *__cookie, char *__buf, size_t __n);
typedef ssize_t cookie_write_function_t(void *__cookie, const char *__buf,
     size_t __n);

typedef int cookie_seek_function_t(void *__cookie, _off64_t *__off,
       int __whence);



typedef int cookie_close_function_t(void *__cookie);
typedef struct
{


  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
FILE *fopencookie (void *__cookie,
  const char *__mode, cookie_io_functions_t __functions);
FILE *_fopencookie_r (struct _reent *, void *__cookie,
  const char *__mode, cookie_io_functions_t __functions);
# 667 "/usr/include/stdio.h" 3 4
static __inline__ int __sgetc_r(struct _reent *__ptr, FILE *__p);

static __inline__ int __sgetc_r(struct _reent *__ptr, FILE *__p)
  {
    int __c = (--(__p)->_r < 0 ? __srget_r(__ptr, __p) : (int)(*(__p)->_p++));
    if ((__p->_flags & 0x4000) && (__c == '\r'))
      {
      int __c2 = (--(__p)->_r < 0 ? __srget_r(__ptr, __p) : (int)(*(__p)->_p++));
      if (__c2 == '\n')
        __c = __c2;
      else
        ungetc(__c2, __p);
      }
    return __c;
  }





static __inline__ int __sputc_r(struct _reent *_ptr, int _c, FILE *_p) {

 if ((_p->_flags & 0x4000) && _c == '\n')
   __sputc_r (_ptr, '\r', _p);

 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf_r(_ptr, _c, _p));
}
# 741 "/usr/include/stdio.h" 3 4
static __inline int
_getchar_unlocked(void)
{
 struct _reent *_ptr;

 _ptr = (__getreent());
 return (__sgetc_r(_ptr, ((_ptr)->_stdin)));
}

static __inline int
_putchar_unlocked(int _c)
{
 struct _reent *_ptr;

 _ptr = (__getreent());
 return (__sputc_r(_ptr, _c, ((_ptr)->_stdout)));
}
# 797 "/usr/include/stdio.h" 3 4

# 24 "./include/grub/util/misc.h" 2

# 1 "/usr/include/setjmp.h" 1 3 4
# 10 "/usr/include/setjmp.h" 3 4
# 1 "/usr/include/machine/setjmp.h" 1 3 4


# 374 "/usr/include/machine/setjmp.h" 3 4
typedef long jmp_buf[32];






# 391 "/usr/include/machine/setjmp.h" 3 4
typedef long sigjmp_buf[32 +1+((sizeof (long) + sizeof (sigset_t) - 1)
         /sizeof (long))];
# 413 "/usr/include/machine/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf, int) __attribute__ ((__noreturn__));
extern int sigsetjmp (sigjmp_buf, int);
# 454 "/usr/include/machine/setjmp.h" 3 4
extern void _longjmp (jmp_buf, int) __attribute__ ((__noreturn__));
extern int _setjmp (jmp_buf);
# 11 "/usr/include/setjmp.h" 2 3 4




void longjmp (jmp_buf __jmpb, int __retval)
   __attribute__ ((__noreturn__));



int setjmp (jmp_buf __jmpb);


# 26 "./include/grub/util/misc.h" 2
# 1 "/usr/include/unistd.h" 1 3 4



# 1 "/usr/include/sys/unistd.h" 1 3 4
# 14 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 15 "/usr/include/sys/unistd.h" 2 3 4

extern char **environ;

void _exit (int __status) __attribute__ ((__noreturn__));

int access (const char *__path, int __amode);
unsigned alarm (unsigned __secs);
int chdir (const char *__path);
int chmod (const char *__path, mode_t __mode);

int chown (const char *__path, uid_t __owner, gid_t __group);


int chroot (const char *__path);

int close (int __fildes);

size_t confstr (int __name, char *__buf, size_t __len);


char * crypt (const char *__key, const char *__salt);
# 44 "/usr/include/sys/unistd.h" 3 4
int daemon (int nochdir, int noclose);

int dup (int __fildes);
int dup2 (int __fildes, int __fildes2);

int dup3 (int __fildes, int __fildes2, int flags);
int eaccess (const char *__path, int __mode);


void encrypt (char *__block, int __edflag);


void endusershell (void);


int euidaccess (const char *__path, int __mode);

int execl (const char *__path, const char *, ...);
int execle (const char *__path, const char *, ...);
int execlp (const char *__file, const char *, ...);

int execlpe (const char *__file, const char *, ...);

int execv (const char *__path, char * const __argv[]);
int execve (const char *__path, char * const __argv[], char * const __envp[]);
int execvp (const char *__file, char * const __argv[]);

int execvpe (const char *__file, char * const __argv[], char * const __envp[]);


int faccessat (int __dirfd, const char *__path, int __mode, int __flags);


int fchdir (int __fildes);


int fchmod (int __fildes, mode_t __mode);



int fchown (int __fildes, uid_t __owner, gid_t __group);



int fchownat (int __dirfd, const char *__path, uid_t __owner, gid_t __group, int __flags);


int fexecve (int __fd, char * const __argv[], char * const __envp[]);

pid_t fork (void);
long fpathconf (int __fd, int __name);
int fsync (int __fd);

int fdatasync (int __fd);


char * get_current_dir_name (void);

char * getcwd (char *__buf, size_t __size);

int getdomainname (char *__name, size_t __len);


int getentropy (void *, size_t);


gid_t getegid (void);
uid_t geteuid (void);
gid_t getgid (void);

int getgroups (int __gidsetsize, gid_t __grouplist[]);

long gethostid (void);

char * getlogin (void);

int getlogin_r (char *name, size_t namesize) ;


char * getpass (const char *__prompt);
int getpagesize (void);


int getpeereid (int, uid_t *, gid_t *);


pid_t getpgid (pid_t);

pid_t getpgrp (void);
pid_t getpid (void);
pid_t getppid (void);

pid_t getsid (pid_t);


uid_t getuid (void);


char * getusershell (void);


char * getwd (char *__buf);


int iruserok (unsigned long raddr, int superuser, const char *ruser, const char *luser);

int isatty (int __fildes);

int issetugid (void);



int lchown (const char *__path, uid_t __owner, gid_t __group);


int link (const char *__path1, const char *__path2);

int linkat (int __dirfd1, const char *__path1, int __dirfd2, const char *__path2, int __flags);


int nice (int __nice_value);


off_t lseek (int __fildes, off_t __offset, int __whence);






int lockf (int __fd, int __cmd, off_t __len);

long pathconf (const char *__path, int __name);
int pause (void);

int pthread_atfork (void (*)(void), void (*)(void), void (*)(void));

int pipe (int __fildes[2]);

int pipe2 (int __fildes[2], int flags);


ssize_t pread (int __fd, void *__buf, size_t __nbytes, off_t __offset);
ssize_t pwrite (int __fd, const void *__buf, size_t __nbytes, off_t __offset);

_ssize_t read (int __fd, void *__buf, size_t __nbyte);

int rresvport (int *__alport);
int revoke (char *__path);

int rmdir (const char *__path);

int ruserok (const char *rhost, int superuser, const char *ruser, const char *luser);


void * sbrk (ptrdiff_t __incr);



int setegid (gid_t __gid);
int seteuid (uid_t __uid);

int setgid (gid_t __gid);


int setgroups (int ngroups, const gid_t *grouplist);


int sethostname (const char *, size_t);

int setpgid (pid_t __pid, pid_t __pgid);

int setpgrp (void);


int setregid (gid_t __rgid, gid_t __egid);
int setreuid (uid_t __ruid, uid_t __euid);

pid_t setsid (void);

int setuid (uid_t __uid);


void setusershell (void);

unsigned sleep (unsigned int __seconds);

void swab (const void *
# 231 "/usr/include/sys/unistd.h"
                         __restrict
# 231 "/usr/include/sys/unistd.h" 3 4
                                   , void *
# 231 "/usr/include/sys/unistd.h"
                                           __restrict
# 231 "/usr/include/sys/unistd.h" 3 4
                                                     , ssize_t);

long sysconf (int __name);
pid_t tcgetpgrp (int __fildes);
int tcsetpgrp (int __fildes, pid_t __pgrp_id);
char * ttyname (int __fildes);
int ttyname_r (int, char *, size_t);
int unlink (const char *__path);

int usleep (useconds_t __useconds);


int vhangup (void);

_ssize_t write (int __fd, const void *__buf, size_t __nbyte);



# 1 "/usr/include/getopt.h" 1 3 4
# 45 "/usr/include/getopt.h" 3 4
extern int __attribute__((dllimport)) opterr;
extern int __attribute__((dllimport)) optind;
extern int __attribute__((dllimport)) optopt;
extern int __attribute__((dllimport)) optreset;
extern char __attribute__((dllimport)) *optarg;


int getopt (int, char * const *, const char *);
# 250 "/usr/include/sys/unistd.h" 2 3 4
# 259 "/usr/include/sys/unistd.h" 3 4
pid_t vfork (void);
# 283 "/usr/include/sys/unistd.h" 3 4
int ftruncate (int __fd, off_t __length);


int truncate (const char *, off_t __length);




int getdtablesize (void);


useconds_t ualarm (useconds_t __useconds, useconds_t __interval);





 int gethostname (char *__name, size_t __len);




int setdtablesize (int);



void sync (void);



ssize_t readlink (const char *
# 313 "/usr/include/sys/unistd.h"
                             __restrict 
# 313 "/usr/include/sys/unistd.h" 3 4
                                        __path,
                          char *
# 314 "/usr/include/sys/unistd.h"
                               __restrict 
# 314 "/usr/include/sys/unistd.h" 3 4
                                          __buf, size_t __buflen);
int symlink (const char *__name1, const char *__name2);


ssize_t readlinkat (int __dirfd1, const char *
# 318 "/usr/include/sys/unistd.h"
                                                    __restrict 
# 318 "/usr/include/sys/unistd.h" 3 4
                                                               __path,
                            char *
# 319 "/usr/include/sys/unistd.h"
                                 __restrict 
# 319 "/usr/include/sys/unistd.h" 3 4
                                            __buf, size_t __buflen);
int symlinkat (const char *, int, const char *);
int unlinkat (int, const char *, int);
# 5 "/usr/include/unistd.h" 2 3 4
# 27 "./include/grub/util/misc.h" 2

# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 29 "./include/grub/util/misc.h" 2





# 33 "./include/grub/util/misc.h"
char *grub_util_get_path (const char *dir, const char *file);
size_t grub_util_get_image_size (const char *path);
char *grub_util_read_image (const char *path);
void grub_util_load_image (const char *path, char *buf);
void grub_util_write_image (const char *img, size_t size, FILE *out,
       const char *name);
void grub_util_write_image_at (const void *img, size_t size, off_t offset,
          FILE *out, const char *name);
# 55 "./include/grub/util/misc.h"
char *make_system_path_relative_to_its_root (const char *path);

char *canonicalize_file_name (const char *path);

void grub_util_init_nls (void);
# 24 "util/grub-fstest.c" 2
# 1 "./include/grub/misc.h" 1
# 26 "./include/grub/misc.h"
# 1 "./include/grub/err.h" 1
# 27 "./include/grub/err.h"
typedef enum
  {
    GRUB_ERR_NONE = 0,
    GRUB_ERR_TEST_FAILURE,
    GRUB_ERR_BAD_MODULE,
    GRUB_ERR_OUT_OF_MEMORY,
    GRUB_ERR_BAD_FILE_TYPE,
    GRUB_ERR_FILE_NOT_FOUND,
    GRUB_ERR_FILE_READ_ERROR,
    GRUB_ERR_BAD_FILENAME,
    GRUB_ERR_UNKNOWN_FS,
    GRUB_ERR_BAD_FS,
    GRUB_ERR_BAD_NUMBER,
    GRUB_ERR_OUT_OF_RANGE,
    GRUB_ERR_UNKNOWN_DEVICE,
    GRUB_ERR_BAD_DEVICE,
    GRUB_ERR_READ_ERROR,
    GRUB_ERR_WRITE_ERROR,
    GRUB_ERR_UNKNOWN_COMMAND,
    GRUB_ERR_INVALID_COMMAND,
    GRUB_ERR_BAD_ARGUMENT,
    GRUB_ERR_BAD_PART_TABLE,
    GRUB_ERR_UNKNOWN_OS,
    GRUB_ERR_BAD_OS,
    GRUB_ERR_NO_KERNEL,
    GRUB_ERR_BAD_FONT,
    GRUB_ERR_NOT_IMPLEMENTED_YET,
    GRUB_ERR_SYMLINK_LOOP,
    GRUB_ERR_BAD_COMPRESSED_DATA,
    GRUB_ERR_MENU,
    GRUB_ERR_TIMEOUT,
    GRUB_ERR_IO,
    GRUB_ERR_ACCESS_DENIED,
    GRUB_ERR_EXTRACTOR,
    GRUB_ERR_NET_BAD_ADDRESS,
    GRUB_ERR_NET_ROUTE_LOOP,
    GRUB_ERR_NET_NO_ROUTE,
    GRUB_ERR_NET_NO_ANSWER,
    GRUB_ERR_WAIT,
    GRUB_ERR_BUG,
    GRUB_ERR_NET_PORT_CLOSED,
    GRUB_ERR_NET_INVALID_RESPONSE,
    GRUB_ERR_NET_UNKNOWN_ERROR,
    GRUB_ERR_NET_PACKET_TOO_BIG,
    GRUB_ERR_NET_NO_DOMAIN,
    GRUB_ERR_EOF
  }
grub_err_t;

struct grub_error_saved
{
  grub_err_t grub_errno;
  char errmsg[256];
};

extern grub_err_t grub_errno;
extern char grub_errmsg[256];

grub_err_t grub_error (grub_err_t n, const char *fmt, ...);
void grub_fatal (const char *fmt, ...) __attribute__ ((noreturn));
void grub_error_push (void);
int grub_error_pop (void);
void grub_print_error (void);
extern int grub_err_printed_errors;
int grub_err_printf (const char *fmt, ...)
     __attribute__ ((format (printf, 1, 2)));
# 27 "./include/grub/misc.h" 2
# 1 "./include/grub/i18n.h" 1
# 22 "./include/grub/i18n.h"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 23 "./include/grub/i18n.h" 2





extern const char *(*grub_gettext) (const char *s);



# 1 "/usr/include/locale.h" 1 3 4
# 14 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 15 "/usr/include/locale.h" 2 3 4
# 40 "/usr/include/locale.h" 3 4



# 42 "/usr/include/locale.h" 3 4
struct lconv
{
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_n_cs_precedes;
  char int_n_sep_by_space;
  char int_n_sign_posn;
  char int_p_cs_precedes;
  char int_p_sep_by_space;
  char int_p_sign_posn;
};

struct _reent;
char *_setlocale_r (struct _reent *, int, const char *);
struct lconv *_localeconv_r (struct _reent *);

struct __locale_t *_newlocale_r (struct _reent *, int, const char *,
     struct __locale_t *);
void _freelocale_r (struct _reent *, struct __locale_t *);
struct __locale_t *_duplocale_r (struct _reent *, struct __locale_t *);
struct __locale_t *_uselocale_r (struct _reent *, struct __locale_t *);



char *setlocale (int, const char *);
struct lconv *localeconv (void);


locale_t newlocale (int, const char *, locale_t);
void freelocale (locale_t);
locale_t duplocale (locale_t);
locale_t uselocale (locale_t);





# 33 "./include/grub/i18n.h" 2
# 1 "/usr/include/libintl.h" 1 3 4
# 58 "/usr/include/libintl.h" 3 4
extern int libintl_version;
# 134 "/usr/include/libintl.h" 3 4
extern char *gettext (const char *__msgid)
       __asm__ ("" "libintl_gettext")
       __attribute__ ((__format_arg__ (1)));
# 152 "/usr/include/libintl.h" 3 4
extern char *dgettext (const char *__domainname, const char *__msgid)
       __asm__ ("" "libintl_dgettext")
       __attribute__ ((__format_arg__ (2)));
# 172 "/usr/include/libintl.h" 3 4
extern char *dcgettext (const char *__domainname, const char *__msgid,
                        int __category)
       __asm__ ("" "libintl_dcgettext")
       __attribute__ ((__format_arg__ (2)));
# 194 "/usr/include/libintl.h" 3 4
extern char *ngettext (const char *__msgid1, const char *__msgid2,
                       unsigned long int __n)
       __asm__ ("" "libintl_ngettext")
       __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));
# 215 "/usr/include/libintl.h" 3 4
extern char *dngettext (const char *__domainname,
                        const char *__msgid1, const char *__msgid2,
                        unsigned long int __n)
       __asm__ ("" "libintl_dngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
# 239 "/usr/include/libintl.h" 3 4
extern char *dcngettext (const char *__domainname,
                         const char *__msgid1, const char *__msgid2,
                         unsigned long int __n, int __category)
       __asm__ ("" "libintl_dcngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
# 261 "/usr/include/libintl.h" 3 4
extern char *textdomain (const char *__domainname)
       __asm__ ("" "libintl_textdomain");
# 279 "/usr/include/libintl.h" 3 4
extern char *bindtextdomain (const char *__domainname, const char *__dirname)
       __asm__ ("" "libintl_bindtextdomain");
# 297 "/usr/include/libintl.h" 3 4
extern char *bind_textdomain_codeset (const char *__domainname,
                                      const char *__codeset)
       __asm__ ("" "libintl_bind_textdomain_codeset");
# 433 "/usr/include/libintl.h" 3 4
extern char *libintl_setlocale (int, const char *);






extern locale_t libintl_newlocale (int, const char *, locale_t);
# 455 "/usr/include/libintl.h" 3 4
extern void
       libintl_set_relocation_prefix (const char *orig_prefix,
                                      const char *curr_prefix);
# 34 "./include/grub/i18n.h" 2
# 53 "./include/grub/i18n.h"

# 53 "./include/grub/i18n.h"
static inline const char * __attribute__ ((always_inline))
_ (const char *str)
{
  return gettext(str);
}
# 28 "./include/grub/misc.h" 2
# 55 "./include/grub/misc.h"
void *grub_memmove (void *dest, const void *src, grub_size_t n);
char *grub_strcpy (char *dest, const char *src);
char *grub_strncpy (char *dest, const char *src, int c);
static inline char *
grub_stpcpy (char *dest, const char *src)
{
  char *d = dest;
  const char *s = src;

  do
    *d++ = *s;
  while (*s++ != '\0');

  return d - 1;
}


static inline void *
grub_memcpy (void *dest, const void *src, grub_size_t n)
{
  return grub_memmove (dest, src, n);
}

static inline char *
grub_strcat (char *dest, const char *src)
{
  char *p = dest;

  while (*p)
    p++;

  while ((*p = *src) != '\0')
    {
      p++;
      src++;
    }

  return dest;
}

static inline char *
grub_strncat (char *dest, const char *src, int c)
{
  char *p = dest;

  while (*p)
    p++;

  while (c-- && (*p = *src) != '\0')
    {
      p++;
      src++;
    }

  *p = '\0';

  return dest;
}
# 129 "./include/grub/misc.h"
int grub_memcmp (const void *s1, const void *s2, grub_size_t n);
int grub_strcmp (const char *s1, const char *s2);
int grub_strncmp (const char *s1, const char *s2, grub_size_t n);

char *grub_strchr (const char *s, int c);
char *grub_strrchr (const char *s, int c);
int grub_strword (const char *s, const char *w);



static inline char *
grub_strstr (const char *haystack, const char *needle)
{





  if (*needle != '\0')
    {


      char b = *needle++;

      for (;; haystack++)
 {
   if (*haystack == '\0')

     return 0;
   if (*haystack == b)

     {
       const char *rhaystack = haystack + 1;
       const char *rneedle = needle;

       for (;; rhaystack++, rneedle++)
  {
    if (*rneedle == '\0')

      return (char *) haystack;
    if (*rhaystack == '\0')

      return 0;
    if (*rhaystack != *rneedle)

      break;
  }
     }
 }
    }
  else
    return (char *) haystack;
}

int grub_isspace (int c);
int grub_isprint (int c);

static inline int
grub_iscntrl (int c)
{
  return (c >= 0x00 && c <= 0x1F) || c == 0x7F;
}

static inline int
grub_isalpha (int c)
{
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

static inline int
grub_islower (int c)
{
  return (c >= 'a' && c <= 'z');
}

static inline int
grub_isupper (int c)
{
  return (c >= 'A' && c <= 'Z');
}

static inline int
grub_isgraph (int c)
{
  return (c >= '!' && c <= '~');
}

static inline int
grub_isdigit (int c)
{
  return (c >= '0' && c <= '9');
}

static inline int
grub_isxdigit (int c)
{
  return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

static inline int
grub_isalnum (int c)
{
  return grub_isalpha (c) || grub_isdigit (c);
}

static inline int
grub_tolower (int c)
{
  if (c >= 'A' && c <= 'Z')
    return c - 'A' + 'a';

  return c;
}

static inline int
grub_toupper (int c)
{
  if (c >= 'a' && c <= 'z')
    return c - 'a' + 'A';

  return c;
}

static inline int
grub_strcasecmp (const char *s1, const char *s2)
{
  while (*s1 && *s2)
    {
      if (grub_tolower ((grub_uint8_t) *s1)
   != grub_tolower ((grub_uint8_t) *s2))
 break;

      s1++;
      s2++;
    }

  return (int) grub_tolower ((grub_uint8_t) *s1)
    - (int) grub_tolower ((grub_uint8_t) *s2);
}

static inline int
grub_strncasecmp (const char *s1, const char *s2, grub_size_t n)
{
  if (n == 0)
    return 0;

  while (*s1 && *s2 && --n)
    {
      if (grub_tolower (*s1) != grub_tolower (*s2))
 break;

      s1++;
      s2++;
    }

  return (int) grub_tolower ((grub_uint8_t) *s1)
    - (int) grub_tolower ((grub_uint8_t) *s2);
}

unsigned long grub_strtoul (const char *str, char **end, int base);
unsigned long long grub_strtoull (const char *str, char **end, int base);

static inline long
grub_strtol (const char *str, char **end, int base)
{
  int negative = 0;
  unsigned long magnitude;

  while (*str && grub_isspace (*str))
    str++;

  if (*str == '-')
    {
      negative = 1;
      str++;
    }

  magnitude = grub_strtoull (str, end, base);
  if (negative)
    {
      if (magnitude > (unsigned long) 9223372036854775807L + 1)
        {
          grub_error (GRUB_ERR_OUT_OF_RANGE, "overflow is detected");
          return (-9223372036854775807L - 1);
        }
      return -((long) magnitude);
    }
  else
    {
      if (magnitude > 9223372036854775807L)
        {
          grub_error (GRUB_ERR_OUT_OF_RANGE, "overflow is detected");
          return 9223372036854775807L;
        }
      return (long) magnitude;
    }
}

char *grub_strdup (const char *s) __attribute__ ((warn_unused_result));
char *grub_strndup (const char *s, grub_size_t n) __attribute__ ((warn_unused_result));
void *grub_memset (void *s, int c, grub_size_t n);
grub_size_t grub_strlen (const char *s) __attribute__ ((warn_unused_result));
int grub_printf (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
int grub_printf_ (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));



static inline char *
grub_strchrsub (char *output, const char *input, char ch, const char *with)
{
  while (*input)
    {
      if (*input == ch)
 {
   grub_strcpy (output, with);
   output += grub_strlen (with);
   input++;
   continue;
 }
      *output++ = *input++;
    }
  *output = '\0';
  return output;
}

extern void (*grub_xputs) (const char *str);

static inline int
grub_puts (const char *s)
{
  const char nl[2] = "\n";
  grub_xputs (s);
  grub_xputs (nl);

  return 1;
}

int grub_puts_ (const char *s);
void grub_real_dprintf (const char *file,
                                     const int line,
                                     const char *condition,
                                     const char *fmt, ...) __attribute__ ((format (printf, 4, 5)));
int grub_vprintf (const char *fmt, va_list args);
int grub_snprintf (char *str, grub_size_t n, const char *fmt, ...)
     __attribute__ ((format (printf, 3, 4)));
int grub_vsnprintf (char *str, grub_size_t n, const char *fmt,
     va_list args);
char *grub_xasprintf (const char *fmt, ...)
     __attribute__ ((format (printf, 1, 2))) __attribute__ ((warn_unused_result));
char *grub_xvasprintf (const char *fmt, va_list args) __attribute__ ((warn_unused_result));
void grub_exit (void) __attribute__ ((noreturn));
void grub_abort (void) __attribute__ ((noreturn));
grub_uint64_t grub_divmod64 (grub_uint64_t n,
       grub_uint64_t d,
       grub_uint64_t *r);
# 396 "./include/grub/misc.h"
static inline char *
grub_memchr (const void *p, int c, grub_size_t len)
{
  const char *s = p;
  const char *e = s + len;

  for (; s < e; s++)
    if (*s == c)
      return (char *) s;

  return 0;
}


static inline unsigned int
grub_abs (int x)
{
  if (x < 0)
    return (unsigned int) (-x);
  else
    return (unsigned int) x;
}


static inline unsigned int
grub_div_roundup (unsigned int x, unsigned int y)
{
  return (x + y - 1) / y;
}





void grub_reboot (void) __attribute__ ((noreturn));
# 440 "./include/grub/misc.h"
void grub_halt (void) __attribute__ ((noreturn));
# 450 "./include/grub/misc.h"
static inline void
grub_error_save (struct grub_error_saved *save)
{
  grub_memcpy (save->errmsg, grub_errmsg, sizeof (save->errmsg));
  save->grub_errno = grub_errno;
  grub_errno = GRUB_ERR_NONE;
}

static inline void
grub_error_load (const struct grub_error_saved *save)
{
  grub_memcpy (grub_errmsg, save->errmsg, sizeof (grub_errmsg));
  grub_errno = save->grub_errno;
}
# 25 "util/grub-fstest.c" 2
# 1 "./include/grub/device.h" 1
# 26 "./include/grub/device.h"
struct grub_disk;
struct grub_net;

struct grub_device
{
  struct grub_disk *disk;
  struct grub_net *net;
};
typedef struct grub_device *grub_device_t;

grub_device_t grub_device_open (const char *name);
grub_err_t grub_device_close (grub_device_t device);
int grub_device_iterate (int (*hook) (const char *name));
# 26 "util/grub-fstest.c" 2
# 1 "./include/grub/disk.h" 1
# 29 "./include/grub/disk.h"
enum grub_disk_dev_id
  {
    GRUB_DISK_DEVICE_BIOSDISK_ID,
    GRUB_DISK_DEVICE_OFDISK_ID,
    GRUB_DISK_DEVICE_LOOPBACK_ID,
    GRUB_DISK_DEVICE_EFIDISK_ID,
    GRUB_DISK_DEVICE_DISKFILTER_ID,
    GRUB_DISK_DEVICE_HOST_ID,
    GRUB_DISK_DEVICE_ATA_ID,
    GRUB_DISK_DEVICE_MEMDISK_ID,
    GRUB_DISK_DEVICE_NAND_ID,
    GRUB_DISK_DEVICE_SCSI_ID,
    GRUB_DISK_DEVICE_CRYPTODISK_ID,
    GRUB_DISK_DEVICE_ARCDISK_ID,
    GRUB_DISK_DEVICE_HOSTDISK_ID,
  };

struct grub_disk;

struct grub_disk_memberlist;


typedef enum
  {
    GRUB_DISK_PULL_NONE,
    GRUB_DISK_PULL_REMOVABLE,
    GRUB_DISK_PULL_RESCAN,
    GRUB_DISK_PULL_MAX
  } grub_disk_pull_t;


struct grub_disk_dev
{

  const char *name;


  enum grub_disk_dev_id id;


  int (*iterate) (int (*hook) (const char *name),
    grub_disk_pull_t pull);


  grub_err_t (*open) (const char *name, struct grub_disk *disk);


  void (*close) (struct grub_disk *disk);


  grub_err_t (*read) (struct grub_disk *disk, grub_disk_addr_t sector,
        grub_size_t size, char *buf);


  grub_err_t (*write) (struct grub_disk *disk, grub_disk_addr_t sector,
         grub_size_t size, const char *buf);


  struct grub_disk_memberlist *(*memberlist) (struct grub_disk *disk);
  const char * (*raidname) (struct grub_disk *disk);



  struct grub_disk_dev *next;
};
typedef struct grub_disk_dev *grub_disk_dev_t;

extern grub_disk_dev_t grub_disk_dev_list;

struct grub_partition;


struct grub_disk
{

  const char *name;


  grub_disk_dev_t dev;


  grub_uint64_t total_sectors;


  unsigned int log_sector_size;


  unsigned long id;


  struct grub_partition *partition;



  void (*read_hook) (grub_disk_addr_t sector,
       unsigned offset, unsigned length);


  void *data;
};
typedef struct grub_disk *grub_disk_t;


struct grub_disk_memberlist
{
  grub_disk_t disk;
  struct grub_disk_memberlist *next;
};
typedef struct grub_disk_memberlist *grub_disk_memberlist_t;
# 156 "./include/grub/disk.h"
void grub_disk_cache_invalidate_all (void);

void grub_disk_dev_register (grub_disk_dev_t dev);
void grub_disk_dev_unregister (grub_disk_dev_t dev);
static inline int
grub_disk_dev_iterate (int (*hook) (const char *name))
{
  grub_disk_dev_t p;
  grub_disk_pull_t pull;

  for (pull = 0; pull < GRUB_DISK_PULL_MAX; pull++)
    for (p = grub_disk_dev_list; p; p = p->next)
      if (p->iterate && (p->iterate) (hook, pull))
 return 1;

  return 0;
}

grub_disk_t grub_disk_open (const char *name);
void grub_disk_close (grub_disk_t disk);
grub_err_t grub_disk_read (grub_disk_t disk,
     grub_disk_addr_t sector,
     grub_off_t offset,
     grub_size_t size,
     void *buf);
grub_err_t grub_disk_write (grub_disk_t disk,
      grub_disk_addr_t sector,
      grub_off_t offset,
      grub_size_t size,
      const void *buf);

grub_uint64_t grub_disk_get_size (grub_disk_t disk);






extern void (* grub_disk_firmware_fini) (void);
extern int grub_disk_firmware_is_tainted;


void grub_lvm_init (void);
void grub_ldm_init (void);
void grub_mdraid09_init (void);
void grub_mdraid1x_init (void);
void grub_diskfilter_init (void);
void grub_lvm_fini (void);
void grub_ldm_fini (void);
void grub_mdraid09_fini (void);
void grub_mdraid1x_fini (void);
void grub_diskfilter_fini (void);
# 27 "util/grub-fstest.c" 2
# 1 "./include/grub/file.h" 1
# 25 "./include/grub/file.h"
# 1 "./include/grub/fs.h" 1
# 27 "./include/grub/fs.h"
# 1 "./include/grub/list.h" 1
# 27 "./include/grub/list.h"
struct grub_list
{
  struct grub_list *next;
  struct grub_list **prev;
};
typedef struct grub_list *grub_list_t;

void grub_list_push (grub_list_t *head, grub_list_t item);
void grub_list_remove (grub_list_t item);



static inline void *
grub_bad_type_cast_real (int line, const char *file)
     __attribute__ ((__error__ ("bad type cast between incompatible grub types")));

static inline void *
grub_bad_type_cast_real (int line, const char *file)
{
  grub_fatal ("error:%s:%u: bad type cast between incompatible grub types",
       file, line);
}
# 63 "./include/grub/list.h"
struct grub_named_list
{
  struct grub_named_list *next;
  struct grub_named_list **prev;
  char *name;
};
typedef struct grub_named_list *grub_named_list_t;

void * grub_named_list_find (grub_named_list_t head,
       const char *name);
# 28 "./include/grub/fs.h" 2


# 1 "./include/grub/partition.h" 1
# 22 "./include/grub/partition.h"
# 1 "./include/grub/dl.h" 1
# 27 "./include/grub/dl.h"
# 1 "./include/grub/elf.h" 1
# 28 "./include/grub/elf.h"
typedef grub_uint16_t Elf32_Half;
typedef grub_uint16_t Elf64_Half;


typedef grub_uint32_t Elf32_Word;
typedef grub_int32_t Elf32_Sword;
typedef grub_uint32_t Elf64_Word;
typedef grub_int32_t Elf64_Sword;


typedef grub_uint64_t Elf32_Xword;
typedef grub_int64_t Elf32_Sxword;
typedef grub_uint64_t Elf64_Xword;
typedef grub_int64_t Elf64_Sxword;


typedef grub_uint32_t Elf32_Addr;
typedef grub_uint64_t Elf64_Addr;


typedef grub_uint32_t Elf32_Off;
typedef grub_uint64_t Elf64_Off;


typedef grub_uint16_t Elf32_Section;
typedef grub_uint16_t Elf64_Section;


typedef Elf32_Half Elf32_Versym;
typedef Elf64_Half Elf64_Versym;






typedef struct
{
  unsigned char e_ident[(16)];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct
{
  unsigned char e_ident[(16)];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;
# 263 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct
{
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 362 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Section st_shndx;
} Elf32_Sym;

typedef struct
{
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Section st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct
{
  Elf32_Half si_boundto;
  Elf32_Half si_flags;
} Elf32_Syminfo;

typedef struct
{
  Elf64_Half si_boundto;
  Elf64_Half si_flags;
} Elf64_Syminfo;
# 476 "./include/grub/elf.h"
typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;






typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;



typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;
# 521 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct
{
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 600 "./include/grub/elf.h"
typedef struct
{
  Elf32_Sword d_tag;
  union
    {
      Elf32_Word d_val;
      Elf32_Addr d_ptr;
    } d_un;
} Elf32_Dyn;

typedef struct
{
  Elf64_Sxword d_tag;
  union
    {
      Elf64_Xword d_val;
      Elf64_Addr d_ptr;
    } d_un;
} Elf64_Dyn;
# 764 "./include/grub/elf.h"
typedef struct
{
  Elf32_Half vd_version;
  Elf32_Half vd_flags;
  Elf32_Half vd_ndx;
  Elf32_Half vd_cnt;
  Elf32_Word vd_hash;
  Elf32_Word vd_aux;
  Elf32_Word vd_next;

} Elf32_Verdef;

typedef struct
{
  Elf64_Half vd_version;
  Elf64_Half vd_flags;
  Elf64_Half vd_ndx;
  Elf64_Half vd_cnt;
  Elf64_Word vd_hash;
  Elf64_Word vd_aux;
  Elf64_Word vd_next;

} Elf64_Verdef;
# 806 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word vda_name;
  Elf32_Word vda_next;

} Elf32_Verdaux;

typedef struct
{
  Elf64_Word vda_name;
  Elf64_Word vda_next;

} Elf64_Verdaux;




typedef struct
{
  Elf32_Half vn_version;
  Elf32_Half vn_cnt;
  Elf32_Word vn_file;

  Elf32_Word vn_aux;
  Elf32_Word vn_next;

} Elf32_Verneed;

typedef struct
{
  Elf64_Half vn_version;
  Elf64_Half vn_cnt;
  Elf64_Word vn_file;

  Elf64_Word vn_aux;
  Elf64_Word vn_next;

} Elf64_Verneed;
# 853 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word vna_hash;
  Elf32_Half vna_flags;
  Elf32_Half vna_other;
  Elf32_Word vna_name;
  Elf32_Word vna_next;

} Elf32_Vernaux;

typedef struct
{
  Elf64_Word vna_hash;
  Elf64_Half vna_flags;
  Elf64_Half vna_other;
  Elf64_Word vna_name;
  Elf64_Word vna_next;

} Elf64_Vernaux;
# 887 "./include/grub/elf.h"
typedef struct
{
  int a_type;
  union
    {
      long int a_val;
      void *a_ptr;
      void (*a_fcn) (void);
    } a_un;
} Elf32_auxv_t;

typedef struct
{
  long int a_type;
  union
    {
      long int a_val;
      void *a_ptr;
      void (*a_fcn) (void);
    } a_un;
} Elf64_auxv_t;
# 950 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;

typedef struct
{
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
# 997 "./include/grub/elf.h"
typedef struct
{
  Elf32_Xword m_value;
  Elf32_Word m_info;
  Elf32_Word m_poffset;
  Elf32_Half m_repeat;
  Elf32_Half m_stride;
} Elf32_Move;

typedef struct
{
  Elf64_Xword m_value;
  Elf64_Xword m_info;
  Elf64_Xword m_poffset;
  Elf64_Half m_repeat;
  Elf64_Half m_stride;
} Elf64_Move;
# 1361 "./include/grub/elf.h"
typedef union
{
  struct
    {
      Elf32_Word gt_current_g_value;
      Elf32_Word gt_unused;
    } gt_header;
  struct
    {
      Elf32_Word gt_g_value;
      Elf32_Word gt_bytes;
    } gt_entry;
} Elf32_gptab;



typedef struct
{
  Elf32_Word ri_gprmask;
  Elf32_Word ri_cprmask[4];
  Elf32_Sword ri_gp_value;
} Elf32_RegInfo;



typedef struct
{
  unsigned char kind;

  unsigned char size;
  Elf32_Section section;

  Elf32_Word info;
} Elf_Options;
# 1437 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word hwp_flags1;
  Elf32_Word hwp_flags2;
} Elf_Options_Hw;
# 1576 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word l_name;
  Elf32_Word l_time_stamp;
  Elf32_Word l_checksum;
  Elf32_Word l_version;
  Elf32_Word l_flags;
} Elf32_Lib;

typedef struct
{
  Elf64_Word l_name;
  Elf64_Word l_time_stamp;
  Elf64_Word l_checksum;
  Elf64_Word l_version;
  Elf64_Word l_flags;
} Elf64_Lib;
# 1607 "./include/grub/elf.h"
typedef Elf32_Addr Elf32_Conflict;
# 28 "./include/grub/dl.h" 2
# 142 "./include/grub/dl.h"
struct grub_dl_segment
{
  struct grub_dl_segment *next;
  void *addr;
  grub_size_t size;
  unsigned section;
};
typedef struct grub_dl_segment *grub_dl_segment_t;

struct grub_dl;

struct grub_dl_dep
{
  struct grub_dl_dep *next;
  struct grub_dl *mod;
};
typedef struct grub_dl_dep *grub_dl_dep_t;
# 179 "./include/grub/dl.h"
typedef struct grub_dl *grub_dl_t;

grub_dl_t grub_dl_load_file (const char *filename);
grub_dl_t grub_dl_load (const char *name);
grub_dl_t grub_dl_load_core (void *addr, grub_size_t size);
int grub_dl_unload (grub_dl_t mod);
void grub_dl_unload_unneeded (void);
int grub_dl_ref (grub_dl_t mod);
int grub_dl_unref (grub_dl_t mod);
extern grub_dl_t grub_dl_head;



grub_dl_t grub_dl_get (const char *name);
grub_err_t grub_dl_register_symbol (const char *name, void *addr,
        int isfunc, grub_dl_t mod);

grub_err_t grub_arch_dl_check_header (void *ehdr);
grub_err_t grub_arch_dl_relocate_symbols (grub_dl_t mod, void *ehdr);
# 208 "./include/grub/dl.h"
void
grub_ia64_dl_get_tramp_got_size (const void *ehdr, grub_size_t *tramp,
     grub_size_t *got);







void
grub_arch_dl_get_tramp_got_size (const void *ehdr, grub_size_t *tramp,
     grub_size_t *got);
# 23 "./include/grub/partition.h" 2


struct grub_disk;

typedef struct grub_partition *grub_partition_t;


typedef enum
{
  GRUB_EMBED_PCBIOS
} grub_embed_type_t;



struct grub_partition_map
{

  struct grub_partition_map *next;
  struct grub_partition_map **prev;


  const char *name;


  grub_err_t (*iterate) (struct grub_disk *disk,
    int (*hook) (struct grub_disk *disk,
          const grub_partition_t partition));


  grub_err_t (*embed) (struct grub_disk *disk, unsigned int *nsectors,
         unsigned int max_nsectors,
         grub_embed_type_t embed_type,
         grub_disk_addr_t **sectors);

};
typedef struct grub_partition_map *grub_partition_map_t;


struct grub_partition
{

  int number;


  grub_disk_addr_t start;


  grub_uint64_t len;


  grub_disk_addr_t offset;


  int index;


  struct grub_partition *parent;


  grub_partition_map_t partmap;



  grub_uint8_t msdostype;
};

grub_partition_t grub_partition_probe (struct grub_disk *disk,
          const char *str);
int grub_partition_iterate (struct grub_disk *disk,
      int (*hook) (struct grub_disk *disk,
            const grub_partition_t partition));
char *grub_partition_get_name (const grub_partition_t partition);


extern grub_partition_map_t grub_partition_map_list;


static inline void
grub_partition_map_register (grub_partition_map_t partmap)
{
  grub_list_push ((((char *) &(*&grub_partition_map_list)->next == (char *) &((grub_list_t) (*&grub_partition_map_list))->next) && ((char *) &(*&grub_partition_map_list)->prev == (char *) &((grub_list_t) (*&grub_partition_map_list))->prev) ? (grub_list_t *) (void *) &grub_partition_map_list : (grub_list_t *) grub_bad_type_cast_real(103, "util/grub-fstest.c")),
    (((char *) &(partmap)->next == (char *) &((grub_list_t) (partmap))->next) && ((char *) &(partmap)->prev == (char *) &((grub_list_t) (partmap))->prev) ? (grub_list_t) partmap : (grub_list_t) grub_bad_type_cast_real(104, "util/grub-fstest.c")));
}


static inline void
grub_partition_map_unregister (grub_partition_map_t partmap)
{
  grub_list_remove ((((char *) &(partmap)->next == (char *) &((grub_list_t) (partmap))->next) && ((char *) &(partmap)->prev == (char *) &((grub_list_t) (partmap))->prev) ? (grub_list_t) partmap : (grub_list_t) grub_bad_type_cast_real(111, "util/grub-fstest.c")));
}




static inline grub_disk_addr_t
grub_partition_get_start (const grub_partition_t p)
{
  grub_partition_t part;
  grub_uint64_t part_start = 0;

  for (part = p; part; part = part->parent)
    part_start += part->start;

  return part_start;
}

static inline grub_uint64_t
grub_partition_get_len (const grub_partition_t p)
{
  return p->len;
}
# 31 "./include/grub/fs.h" 2



struct grub_file;

struct grub_dirhook_info
{
  unsigned dir:1;
  unsigned mtimeset:1;
  unsigned case_insensitive:1;
  grub_int32_t mtime;
};


struct grub_fs
{

  struct grub_fs *next;
  struct grub_fs **prev;


  const char *name;


  grub_err_t (*dir) (grub_device_t device, const char *path,
       int (*hook) (const char *filename,
      const struct grub_dirhook_info *info));


  grub_err_t (*open) (struct grub_file *file, const char *name);


  grub_ssize_t (*read) (struct grub_file *file, char *buf, grub_size_t len);


  grub_err_t (*close) (struct grub_file *file);




  grub_err_t (*label) (grub_device_t device, char **label);




  grub_err_t (*uuid) (grub_device_t device, char **uuid);


  grub_err_t (*mtime) (grub_device_t device, grub_int32_t *timebuf);



  grub_err_t (*embed) (grub_device_t device, unsigned int *nsectors,
         unsigned int max_nsectors,
         grub_embed_type_t embed_type,
         grub_disk_addr_t **sectors);


  int reserved_first_sector;


  int blocklist_install;

};
typedef struct grub_fs *grub_fs_t;


extern struct grub_fs grub_fs_blocklist;





typedef int (*grub_fs_autoload_hook_t) (void);
extern grub_fs_autoload_hook_t grub_fs_autoload_hook;
extern grub_fs_t grub_fs_list;


static inline void
grub_fs_register (grub_fs_t fs)
{
  grub_list_push ((((char *) &(*&grub_fs_list)->next == (char *) &((grub_list_t) (*&grub_fs_list))->next) && ((char *) &(*&grub_fs_list)->prev == (char *) &((grub_list_t) (*&grub_fs_list))->prev) ? (grub_list_t *) (void *) &grub_fs_list : (grub_list_t *) grub_bad_type_cast_real(112, "util/grub-fstest.c")), (((char *) &(fs)->next == (char *) &((grub_list_t) (fs))->next) && ((char *) &(fs)->prev == (char *) &((grub_list_t) (fs))->prev) ? (grub_list_t) fs : (grub_list_t) grub_bad_type_cast_real(112, "util/grub-fstest.c")));
}


static inline void
grub_fs_unregister (grub_fs_t fs)
{
  grub_list_remove ((((char *) &(fs)->next == (char *) &((grub_list_t) (fs))->next) && ((char *) &(fs)->prev == (char *) &((grub_list_t) (fs))->prev) ? (grub_list_t) fs : (grub_list_t) grub_bad_type_cast_real(119, "util/grub-fstest.c")));
}



grub_fs_t grub_fs_probe (grub_device_t device);
# 26 "./include/grub/file.h" 2


struct grub_file
{

  grub_device_t device;


  grub_fs_t fs;


  grub_off_t offset;


  grub_off_t size;


  int not_easily_seekable;


  void *data;


  void (*read_hook) (grub_disk_addr_t sector,
       unsigned offset, unsigned length);
};
typedef struct grub_file *grub_file_t;


typedef enum grub_file_filter_id
  {
    GRUB_FILE_FILTER_GZIO,
    GRUB_FILE_FILTER_XZIO,
    GRUB_FILE_FILTER_LZOPIO,
    GRUB_FILE_FILTER_MAX,
    GRUB_FILE_FILTER_COMPRESSION_FIRST = GRUB_FILE_FILTER_GZIO,
    GRUB_FILE_FILTER_COMPRESSION_LAST = GRUB_FILE_FILTER_LZOPIO,
  } grub_file_filter_id_t;

typedef grub_file_t (*grub_file_filter_t) (grub_file_t in);

extern grub_file_filter_t grub_file_filters_all[GRUB_FILE_FILTER_MAX];
extern grub_file_filter_t grub_file_filters_enabled[GRUB_FILE_FILTER_MAX];

static inline void
grub_file_filter_register (grub_file_filter_id_t id, grub_file_filter_t filter)
{
  grub_file_filters_all[id] = filter;
  grub_file_filters_enabled[id] = filter;
};

static inline void
grub_file_filter_unregister (grub_file_filter_id_t id)
{
  grub_file_filters_all[id] = 0;
  grub_file_filters_enabled[id] = 0;
};

static inline void
grub_file_filter_disable (grub_file_filter_id_t id)
{
  grub_file_filters_enabled[id] = 0;
};

static inline void
grub_file_filter_disable_compression (void)
{
  grub_file_filter_id_t id;

  for (id = GRUB_FILE_FILTER_COMPRESSION_FIRST;
       id <= GRUB_FILE_FILTER_COMPRESSION_LAST; id++)
    grub_file_filters_enabled[id] = 0;
};


char *grub_file_get_device_name (const char *name);

grub_file_t grub_file_open (const char *name);
grub_ssize_t grub_file_read (grub_file_t file, void *buf,
       grub_size_t len);
grub_off_t grub_file_seek (grub_file_t file, grub_off_t offset);
grub_err_t grub_file_close (grub_file_t file);




static inline grub_off_t
grub_file_size (const grub_file_t file)
{
  return file->size;
}

static inline grub_off_t
grub_file_tell (const grub_file_t file)
{
  return file->offset;
}

static inline int
grub_file_seekable (const grub_file_t file)
{
  return !file->not_easily_seekable;
}
# 28 "util/grub-fstest.c" 2

# 1 "./include/grub/env.h" 1
# 25 "./include/grub/env.h"
# 1 "./include/grub/menu.h" 1
# 23 "./include/grub/menu.h"
struct grub_menu_entry_class
{
  char *name;
  struct grub_menu_entry_class *next;
};


struct grub_menu_entry
{

  const char *title;


  const char *id;


  int restricted;


  const char *users;





  struct grub_menu_entry_class *classes;


  const char *sourcecode;


  int argc;
  char **args;

  int hotkey;

  int submenu;


  struct grub_menu_entry *next;
};
typedef struct grub_menu_entry *grub_menu_entry_t;


struct grub_menu
{

  int size;


  grub_menu_entry_t entry_list;
};
typedef struct grub_menu *grub_menu_t;



typedef struct grub_menu_execute_callback
{

  void (*notify_booting) (grub_menu_entry_t entry, void *userdata);






  void (*notify_fallback) (grub_menu_entry_t entry, void *userdata);



  void (*notify_failure) (void *userdata);
}
*grub_menu_execute_callback_t;

grub_menu_entry_t grub_menu_get_entry (grub_menu_t menu, int no);
int grub_menu_get_timeout (void);
void grub_menu_set_timeout (int timeout);
void grub_menu_entry_run (grub_menu_entry_t entry);
int grub_menu_get_default_entry_index (grub_menu_t menu);

void grub_menu_init (void);
void grub_menu_fini (void);
# 26 "./include/grub/env.h" 2

struct grub_env_var;

typedef const char *(*grub_env_read_hook_t) (struct grub_env_var *var,
          const char *val);
typedef char *(*grub_env_write_hook_t) (struct grub_env_var *var,
     const char *val);

struct grub_env_var
{
  char *name;
  char *value;
  grub_env_read_hook_t read_hook;
  grub_env_write_hook_t write_hook;
  struct grub_env_var *next;
  struct grub_env_var **prevp;
  int global;
};

grub_err_t grub_env_set (const char *name, const char *val);
const char *grub_env_get (const char *name);
void grub_env_unset (const char *name);
void grub_env_iterate (int (*func) (struct grub_env_var *var));
grub_err_t grub_register_variable_hook (const char *name,
           grub_env_read_hook_t read_hook,
           grub_env_write_hook_t write_hook);

grub_err_t grub_env_context_open (void);
grub_err_t grub_env_context_close (void);
grub_err_t grub_env_export (const char *name);

void grub_env_unset_menu (void);
grub_menu_t grub_env_get_menu (void);
void grub_env_set_menu (grub_menu_t nmenu);

grub_err_t
grub_env_extractor_open (int source);

grub_err_t
grub_env_extractor_close (int source);
# 30 "util/grub-fstest.c" 2
# 1 "./include/grub/term.h" 1
# 67 "./include/grub/term.h"
# 1 "./include/grub/unicode.h" 1
# 23 "./include/grub/unicode.h"
# 1 "./include/grub/mm.h" 1
# 25 "./include/grub/mm.h"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 26 "./include/grub/mm.h" 2





void grub_mm_init_region (void *addr, grub_size_t size);
void *grub_malloc (grub_size_t size);
void *grub_zalloc (grub_size_t size);
void grub_free (void *ptr);
void *grub_realloc (void *ptr, grub_size_t size);
void *grub_memalign (grub_size_t align, grub_size_t size);

void grub_mm_check_real (char *file, int line);
# 77 "./include/grub/mm.h"
static inline grub_err_t
grub_extend_alloc (grub_size_t sz, grub_size_t *allocated, void **ptr)
{
  void *n;
  if (sz < *allocated)
    return GRUB_ERR_NONE;

  *allocated = 2 * sz;
  n = grub_realloc (*ptr, *allocated);
  if (!n)
    return grub_errno;
  *ptr = n;
  return GRUB_ERR_NONE;
}
# 24 "./include/grub/unicode.h" 2


struct grub_unicode_bidi_pair
{
  grub_uint32_t key;
  grub_uint32_t replace;
};

struct grub_unicode_compact_range
{
  unsigned start:21;
  unsigned len:9;
  unsigned bidi_type:5;
  unsigned comb_type:8;
  unsigned bidi_mirror:1;
  unsigned join_type:3;
} __attribute__ ((packed));



struct grub_unicode_arabic_shape
{
  grub_uint32_t code;
  grub_uint32_t isolated;
  grub_uint32_t right_linked;
  grub_uint32_t both_linked;
  grub_uint32_t left_linked;
};

extern struct grub_unicode_arabic_shape grub_unicode_arabic_shapes[];

enum grub_bidi_type
  {
    GRUB_BIDI_TYPE_L = 0,
    GRUB_BIDI_TYPE_LRE,
    GRUB_BIDI_TYPE_LRO,
    GRUB_BIDI_TYPE_R,
    GRUB_BIDI_TYPE_AL,
    GRUB_BIDI_TYPE_RLE,
    GRUB_BIDI_TYPE_RLO,
    GRUB_BIDI_TYPE_PDF,
    GRUB_BIDI_TYPE_EN,
    GRUB_BIDI_TYPE_ES,
    GRUB_BIDI_TYPE_ET,
    GRUB_BIDI_TYPE_AN,
    GRUB_BIDI_TYPE_CS,
    GRUB_BIDI_TYPE_NSM,
    GRUB_BIDI_TYPE_BN,
    GRUB_BIDI_TYPE_B,
    GRUB_BIDI_TYPE_S,
    GRUB_BIDI_TYPE_WS,
    GRUB_BIDI_TYPE_ON
  };

enum grub_join_type
  {
    GRUB_JOIN_TYPE_NONJOINING = 0,
    GRUB_JOIN_TYPE_LEFT = 1,
    GRUB_JOIN_TYPE_RIGHT = 2,
    GRUB_JOIN_TYPE_DUAL = 3,
    GRUB_JOIN_TYPE_CAUSING = 4,
    GRUB_JOIN_TYPE_TRANSPARENT = 5
  };

enum grub_comb_type
  {
    GRUB_UNICODE_COMB_NONE = 0,
    GRUB_UNICODE_COMB_OVERLAY = 1,
    GRUB_UNICODE_COMB_HEBREW_SHEVA = 10,
    GRUB_UNICODE_COMB_HEBREW_HATAF_SEGOL = 11,
    GRUB_UNICODE_COMB_HEBREW_HATAF_PATAH = 12,
    GRUB_UNICODE_COMB_HEBREW_HATAF_QAMATS = 13,
    GRUB_UNICODE_COMB_HEBREW_HIRIQ = 14,
    GRUB_UNICODE_COMB_HEBREW_TSERE = 15,
    GRUB_UNICODE_COMB_HEBREW_SEGOL = 16,
    GRUB_UNICODE_COMB_HEBREW_PATAH = 17,
    GRUB_UNICODE_COMB_HEBREW_QAMATS = 18,
    GRUB_UNICODE_COMB_HEBREW_HOLAM = 19,
    GRUB_UNICODE_COMB_HEBREW_QUBUTS = 20,
    GRUB_UNICODE_COMB_HEBREW_DAGESH = 21,
    GRUB_UNICODE_COMB_HEBREW_METEG = 22,
    GRUB_UNICODE_COMB_HEBREW_RAFE = 23,
    GRUB_UNICODE_COMB_HEBREW_SHIN_DOT = 24,
    GRUB_UNICODE_COMB_HEBREW_SIN_DOT = 25,
    GRUB_UNICODE_COMB_HEBREW_VARIKA = 26,
    GRUB_UNICODE_COMB_ARABIC_FATHATAN = 27,
    GRUB_UNICODE_COMB_ARABIC_DAMMATAN = 28,
    GRUB_UNICODE_COMB_ARABIC_KASRATAN = 29,
    GRUB_UNICODE_COMB_ARABIC_FATHAH = 30,
    GRUB_UNICODE_COMB_ARABIC_DAMMAH = 31,
    GRUB_UNICODE_COMB_ARABIC_KASRA = 32,
    GRUB_UNICODE_COMB_ARABIC_SHADDA = 33,
    GRUB_UNICODE_COMB_ARABIC_SUKUN = 34,
    GRUB_UNICODE_COMB_ARABIC_SUPERSCRIPT_ALIF = 35,
    GRUB_UNICODE_COMB_SYRIAC_SUPERSCRIPT_ALAPH = 36,
    GRUB_UNICODE_STACK_ATTACHED_BELOW = 202,
    GRUB_UNICODE_STACK_ATTACHED_ABOVE = 214,
    GRUB_UNICODE_COMB_ATTACHED_ABOVE_RIGHT = 216,
    GRUB_UNICODE_STACK_BELOW = 220,
    GRUB_UNICODE_COMB_BELOW_RIGHT = 222,
    GRUB_UNICODE_COMB_ABOVE_LEFT = 228,
    GRUB_UNICODE_STACK_ABOVE = 230,
    GRUB_UNICODE_COMB_ABOVE_RIGHT = 232,
    GRUB_UNICODE_COMB_YPOGEGRAMMENI = 240,


    GRUB_UNICODE_COMB_ME = 253,
    GRUB_UNICODE_COMB_MC = 254,
    GRUB_UNICODE_COMB_MN = 255,
  };


struct grub_unicode_glyph
{
  grub_uint32_t base;
  grub_uint16_t variant:9;
  grub_uint8_t attributes:5;
  grub_size_t ncomb;
  struct grub_unicode_combining {
    grub_uint32_t code;
    enum grub_comb_type type;
  } *combining;


  int estimated_width;
};
# 168 "./include/grub/unicode.h"
enum
  {
    GRUB_UNICODE_DOTLESS_LOWERCASE_I = 0x0131,
    GRUB_UNICODE_DOTLESS_LOWERCASE_J = 0x0237,
    GRUB_UNICODE_COMBINING_GRAPHEME_JOINER = 0x034f,
    GRUB_UNICODE_HEBREW_WAW = 0x05d5,
    GRUB_UNICODE_ARABIC_START = 0x0600,
    GRUB_UNICODE_ARABIC_END = 0x0700,
    GRUB_UNICODE_THAANA_ABAFILI = 0x07a6,
    GRUB_UNICODE_THAANA_AABAAFILI = 0x07a7,
    GRUB_UNICODE_THAANA_IBIFILI = 0x07a8,
    GRUB_UNICODE_THAANA_EEBEEFILI = 0x07a9,
    GRUB_UNICODE_THAANA_UBUFILI = 0x07aa,
    GRUB_UNICODE_THAANA_OOBOOFILI = 0x07ab,
    GRUB_UNICODE_THAANA_EBEFILI = 0x07ac,
    GRUB_UNICODE_THAANA_EYBEYFILI = 0x07ad,
    GRUB_UNICODE_THAANA_OBOFILI = 0x07ae,
    GRUB_UNICODE_THAANA_OABOAFILI = 0x07af,
    GRUB_UNICODE_THAANA_SUKUN = 0x07b0,
    GRUB_UNICODE_ZWNJ = 0x200c,
    GRUB_UNICODE_ZWJ = 0x200d,
    GRUB_UNICODE_LEFTARROW = 0x2190,
    GRUB_UNICODE_UPARROW = 0x2191,
    GRUB_UNICODE_RIGHTARROW = 0x2192,
    GRUB_UNICODE_DOWNARROW = 0x2193,
    GRUB_UNICODE_LIGHT_HLINE = 0x2500,
    GRUB_UNICODE_HLINE = 0x2501,
    GRUB_UNICODE_LIGHT_VLINE = 0x2502,
    GRUB_UNICODE_VLINE = 0x2503,
    GRUB_UNICODE_LIGHT_CORNER_UL = 0x250c,
    GRUB_UNICODE_CORNER_UL = 0x250f,
    GRUB_UNICODE_LIGHT_CORNER_UR = 0x2510,
    GRUB_UNICODE_CORNER_UR = 0x2513,
    GRUB_UNICODE_LIGHT_CORNER_LL = 0x2514,
    GRUB_UNICODE_CORNER_LL = 0x2517,
    GRUB_UNICODE_LIGHT_CORNER_LR = 0x2518,
    GRUB_UNICODE_CORNER_LR = 0x251b,
    GRUB_UNICODE_BLACK_UP_TRIANGLE = 0x25b2,
    GRUB_UNICODE_BLACK_RIGHT_TRIANGLE = 0x25ba,
    GRUB_UNICODE_BLACK_DOWN_TRIANGLE = 0x25bc,
    GRUB_UNICODE_BLACK_LEFT_TRIANGLE = 0x25c4,
    GRUB_UNICODE_VARIATION_SELECTOR_1 = 0xfe00,
    GRUB_UNICODE_VARIATION_SELECTOR_16 = 0xfe0f,
    GRUB_UNICODE_TAG_START = 0xe0000,
    GRUB_UNICODE_TAG_END = 0xe007f,
    GRUB_UNICODE_VARIATION_SELECTOR_17 = 0xe0100,
    GRUB_UNICODE_VARIATION_SELECTOR_256 = 0xe01ef,
    GRUB_UNICODE_LAST_VALID = 0x10ffff
  };

extern struct grub_unicode_compact_range grub_unicode_compact[];
extern struct grub_unicode_bidi_pair grub_unicode_bidi_pairs[];





grub_ssize_t
grub_bidi_logical_to_visual (const grub_uint32_t *logical,
        grub_size_t logical_len,
        struct grub_unicode_glyph **visual_out,
        grub_ssize_t (*getcharwidth) (const struct grub_unicode_glyph *visual),
        grub_size_t max_width,
        grub_size_t start_width);

enum grub_comb_type
grub_unicode_get_comb_type (grub_uint32_t c);
grub_size_t
grub_unicode_aglomerate_comb (const grub_uint32_t *in, grub_size_t inlen,
         struct grub_unicode_glyph *out);

static inline struct grub_unicode_glyph *
grub_unicode_glyph_dup (const struct grub_unicode_glyph *in)
{
  struct grub_unicode_glyph *out = grub_malloc (sizeof (*out));
  if (!out)
    return 
# 244 "./include/grub/unicode.h" 3 4
          ((void *)0)
# 244 "./include/grub/unicode.h"
              ;
  grub_memcpy (out, in, sizeof (*in));
  if (in->combining)
    {
      out->combining = grub_malloc (in->ncomb * sizeof (out->combining[0]));
      if (!out->combining)
 {
   grub_free (out);
   return 
# 252 "./include/grub/unicode.h" 3 4
         ((void *)0)
# 252 "./include/grub/unicode.h"
             ;
 }
      grub_memcpy (out->combining, in->combining,
     in->ncomb * sizeof (out->combining[0]));
    }
  return out;
}

static inline struct grub_unicode_glyph *
grub_unicode_glyph_from_code (grub_uint32_t code)
{
  struct grub_unicode_glyph *ret;
  ret = grub_zalloc (sizeof (*ret));
  if (!ret)
    return 
# 266 "./include/grub/unicode.h" 3 4
          ((void *)0)
# 266 "./include/grub/unicode.h"
              ;

  ret->base = code;

  return ret;
}

grub_uint32_t
grub_unicode_mirror_code (grub_uint32_t in);
grub_uint32_t
grub_unicode_shape_code (grub_uint32_t in, grub_uint8_t attr);
# 68 "./include/grub/term.h" 2



typedef enum
  {


    GRUB_TERM_COLOR_STANDARD,

    GRUB_TERM_COLOR_NORMAL,

    GRUB_TERM_COLOR_HIGHLIGHT
  }
grub_term_color_state;
# 146 "./include/grub/term.h"
struct grub_term_input
{

  struct grub_term_input *next;
  struct grub_term_input **prev;


  const char *name;


  grub_err_t (*init) (struct grub_term_input *term);


  grub_err_t (*fini) (struct grub_term_input *term);


  int (*getkey) (struct grub_term_input *term);


  int (*getkeystatus) (struct grub_term_input *term);

  void *data;
};
typedef struct grub_term_input *grub_term_input_t;

struct grub_term_output
{

  struct grub_term_output *next;
  struct grub_term_output **prev;


  const char *name;


  grub_err_t (*init) (struct grub_term_output *term);


  grub_err_t (*fini) (struct grub_term_output *term);


  void (*putchar) (struct grub_term_output *term,
     const struct grub_unicode_glyph *c);



  grub_ssize_t (*getcharwidth) (struct grub_term_output *term,
    const struct grub_unicode_glyph *c);


  grub_uint16_t (*getwh) (struct grub_term_output *term);


  grub_uint16_t (*getxy) (struct grub_term_output *term);


  void (*gotoxy) (struct grub_term_output *term,
    grub_uint8_t x, grub_uint8_t y);


  void (*cls) (struct grub_term_output *term);


  void (*setcolorstate) (struct grub_term_output *term,
    grub_term_color_state state);


  void (*setcursor) (struct grub_term_output *term, int on);


  void (*refresh) (struct grub_term_output *term);


  grub_err_t (*fullscreen) (void);


  grub_uint32_t flags;


  grub_uint8_t normal_color;
  grub_uint8_t highlight_color;

  void *data;
};
typedef struct grub_term_output *grub_term_output_t;





extern struct grub_term_output *grub_term_outputs_disabled;
extern struct grub_term_input *grub_term_inputs_disabled;
extern struct grub_term_output *grub_term_outputs;
extern struct grub_term_input *grub_term_inputs;

static inline void
grub_term_register_input (const char *name __attribute__ ((unused)),
     grub_term_input_t term)
{
  if (grub_term_inputs)
    grub_list_push ((((char *) &(*&grub_term_inputs_disabled)->next == (char *) &((grub_list_t) (*&grub_term_inputs_disabled))->next) && ((char *) &(*&grub_term_inputs_disabled)->prev == (char *) &((grub_list_t) (*&grub_term_inputs_disabled))->prev) ? (grub_list_t *) (void *) &grub_term_inputs_disabled : (grub_list_t *) grub_bad_type_cast_real(246, "util/grub-fstest.c")),
      (((char *) &(term)->next == (char *) &((grub_list_t) (term))->next) && ((char *) &(term)->prev == (char *) &((grub_list_t) (term))->prev) ? (grub_list_t) term : (grub_list_t) grub_bad_type_cast_real(247, "util/grub-fstest.c")));
  else
    {

      if (! term->init || term->init (term) == GRUB_ERR_NONE)
 grub_list_push ((((char *) &(*&grub_term_inputs)->next == (char *) &((grub_list_t) (*&grub_term_inputs))->next) && ((char *) &(*&grub_term_inputs)->prev == (char *) &((grub_list_t) (*&grub_term_inputs))->prev) ? (grub_list_t *) (void *) &grub_term_inputs : (grub_list_t *) grub_bad_type_cast_real(252, "util/grub-fstest.c")), (((char *) &(term)->next == (char *) &((grub_list_t) (term))->next) && ((char *) &(term)->prev == (char *) &((grub_list_t) (term))->prev) ? (grub_list_t) term : (grub_list_t) grub_bad_type_cast_real(252, "util/grub-fstest.c")));
    }
}

static inline void
grub_term_register_input_inactive (const char *name __attribute__ ((unused)),
       grub_term_input_t term)
{
  grub_list_push ((((char *) &(*&grub_term_inputs_disabled)->next == (char *) &((grub_list_t) (*&grub_term_inputs_disabled))->next) && ((char *) &(*&grub_term_inputs_disabled)->prev == (char *) &((grub_list_t) (*&grub_term_inputs_disabled))->prev) ? (grub_list_t *) (void *) &grub_term_inputs_disabled : (grub_list_t *) grub_bad_type_cast_real(260, "util/grub-fstest.c")),
    (((char *) &(term)->next == (char *) &((grub_list_t) (term))->next) && ((char *) &(term)->prev == (char *) &((grub_list_t) (term))->prev) ? (grub_list_t) term : (grub_list_t) grub_bad_type_cast_real(261, "util/grub-fstest.c")));
}

static inline void
grub_term_register_input_active (const char *name __attribute__ ((unused)),
     grub_term_input_t term)
{
  if (! term->init || term->init (term) == GRUB_ERR_NONE)
    grub_list_push ((((char *) &(*&grub_term_inputs)->next == (char *) &((grub_list_t) (*&grub_term_inputs))->next) && ((char *) &(*&grub_term_inputs)->prev == (char *) &((grub_list_t) (*&grub_term_inputs))->prev) ? (grub_list_t *) (void *) &grub_term_inputs : (grub_list_t *) grub_bad_type_cast_real(269, "util/grub-fstest.c")), (((char *) &(term)->next == (char *) &((grub_list_t) (term))->next) && ((char *) &(term)->prev == (char *) &((grub_list_t) (term))->prev) ? (grub_list_t) term : (grub_list_t) grub_bad_type_cast_real(269, "util/grub-fstest.c")));
}

static inline void
grub_term_register_output (const char *name __attribute__ ((unused)),
      grub_term_output_t term)
{
  if (grub_term_outputs)
    grub_list_push ((((char *) &(*&grub_term_outputs_disabled)->next == (char *) &((grub_list_t) (*&grub_term_outputs_disabled))->next) && ((char *) &(*&grub_term_outputs_disabled)->prev == (char *) &((grub_list_t) (*&grub_term_outputs_disabled))->prev) ? (grub_list_t *) (void *) &grub_term_outputs_disabled : (grub_list_t *) grub_bad_type_cast_real(277, "util/grub-fstest.c")),
      (((char *) &(term)->next == (char *) &((grub_list_t) (term))->next) && ((char *) &(term)->prev == (char *) &((grub_list_t) (term))->prev) ? (grub_list_t) term : (grub_list_t) grub_bad_type_cast_real(278, "util/grub-fstest.c")));
  else
    {

      if (! term->init || term->init (term) == GRUB_ERR_NONE)
 grub_list_push ((((char *) &(*&grub_term_outputs)->next == (char *) &((grub_list_t) (*&grub_term_outputs))->next) && ((char *) &(*&grub_term_outputs)->prev == (char *) &((grub_list_t) (*&grub_term_outputs))->prev) ? (grub_list_t *) (void *) &grub_term_outputs : (grub_list_t *) grub_bad_type_cast_real(283, "util/grub-fstest.c")),
   (((char *) &(term)->next == (char *) &((grub_list_t) (term))->next) && ((char *) &(term)->prev == (char *) &((grub_list_t) (term))->prev) ? (grub_list_t) term : (grub_list_t) grub_bad_type_cast_real(284, "util/grub-fstest.c")));
    }
}

static inline void
grub_term_register_output_inactive (const char *name __attribute__ ((unused)),
        grub_term_output_t term)
{
  grub_list_push ((((char *) &(*&grub_term_outputs_disabled)->next == (char *) &((grub_list_t) (*&grub_term_outputs_disabled))->next) && ((char *) &(*&grub_term_outputs_disabled)->prev == (char *) &((grub_list_t) (*&grub_term_outputs_disabled))->prev) ? (grub_list_t *) (void *) &grub_term_outputs_disabled : (grub_list_t *) grub_bad_type_cast_real(292, "util/grub-fstest.c")),
    (((char *) &(term)->next == (char *) &((grub_list_t) (term))->next) && ((char *) &(term)->prev == (char *) &((grub_list_t) (term))->prev) ? (grub_list_t) term : (grub_list_t) grub_bad_type_cast_real(293, "util/grub-fstest.c")));
}

static inline void
grub_term_register_output_active (const char *name __attribute__ ((unused)),
      grub_term_output_t term)
{
  if (! term->init || term->init (term) == GRUB_ERR_NONE)
    grub_list_push ((((char *) &(*&grub_term_outputs)->next == (char *) &((grub_list_t) (*&grub_term_outputs))->next) && ((char *) &(*&grub_term_outputs)->prev == (char *) &((grub_list_t) (*&grub_term_outputs))->prev) ? (grub_list_t *) (void *) &grub_term_outputs : (grub_list_t *) grub_bad_type_cast_real(301, "util/grub-fstest.c")),
      (((char *) &(term)->next == (char *) &((grub_list_t) (term))->next) && ((char *) &(term)->prev == (char *) &((grub_list_t) (term))->prev) ? (grub_list_t) term : (grub_list_t) grub_bad_type_cast_real(302, "util/grub-fstest.c")));
}

static inline void
grub_term_unregister_input (grub_term_input_t term)
{
  grub_list_remove ((((char *) &(term)->next == (char *) &((grub_list_t) (term))->next) && ((char *) &(term)->prev == (char *) &((grub_list_t) (term))->prev) ? (grub_list_t) term : (grub_list_t) grub_bad_type_cast_real(308, "util/grub-fstest.c")));
  grub_list_remove ((((char *) &(term)->next == (char *) &((grub_list_t) (term))->next) && ((char *) &(term)->prev == (char *) &((grub_list_t) (term))->prev) ? (grub_list_t) term : (grub_list_t) grub_bad_type_cast_real(309, "util/grub-fstest.c")));
}

static inline void
grub_term_unregister_output (grub_term_output_t term)
{
  grub_list_remove ((((char *) &(term)->next == (char *) &((grub_list_t) (term))->next) && ((char *) &(term)->prev == (char *) &((grub_list_t) (term))->prev) ? (grub_list_t) term : (grub_list_t) grub_bad_type_cast_real(315, "util/grub-fstest.c")));
  grub_list_remove ((((char *) &(term)->next == (char *) &((grub_list_t) (term))->next) && ((char *) &(term)->prev == (char *) &((grub_list_t) (term))->prev) ? (grub_list_t) term : (grub_list_t) grub_bad_type_cast_real(316, "util/grub-fstest.c")));
}






void grub_putcode (grub_uint32_t code, struct grub_term_output *term);
int grub_getkey (void);
int grub_getkey_noblock (void);
void grub_cls (void);
void grub_refresh (void);
void grub_puts_terminal (const char *str, struct grub_term_output *term);
grub_uint16_t *grub_term_save_pos (void);
void grub_term_restore_pos (grub_uint16_t *pos);

static inline unsigned grub_term_width (struct grub_term_output *term)
{
  return ((term->getwh(term)&0xFF00)>>8);
}

static inline unsigned grub_term_height (struct grub_term_output *term)
{
  return (term->getwh(term)&0xFF);
}


static inline unsigned
grub_term_border_width (struct grub_term_output *term)
{
  return grub_term_width (term) - 1 * 3 - 1;
}



static inline int
grub_term_entry_width (struct grub_term_output *term)
{
  return grub_term_border_width (term) - 2 - 1 * 2 - 1;
}

static inline grub_uint16_t
grub_term_getxy (struct grub_term_output *term)
{
  return term->getxy (term);
}

static inline void
grub_term_refresh (struct grub_term_output *term)
{
  if (term->refresh)
    term->refresh (term);
}

static inline void
grub_term_gotoxy (struct grub_term_output *term, grub_uint8_t x, grub_uint8_t y)
{
  term->gotoxy (term, x, y);
}

static inline void
grub_term_setcolorstate (struct grub_term_output *term,
    grub_term_color_state state)
{
  if (term->setcolorstate)
    term->setcolorstate (term, state);
}

static inline void
grub_setcolorstate (grub_term_color_state state)
{
  struct grub_term_output *term;

  for (((term)) = ((grub_term_outputs)); ((term)); ((term)) = ((term))->next)
    grub_term_setcolorstate (term, state);
}



static inline void
grub_term_setcolor (struct grub_term_output *term,
      grub_uint8_t normal_color, grub_uint8_t highlight_color)
{
  term->normal_color = normal_color;
  term->highlight_color = highlight_color;
}


static inline void
grub_term_setcursor (struct grub_term_output *term, int on)
{
  if (term->setcursor)
    term->setcursor (term, on);
}

static inline void
grub_term_cls (struct grub_term_output *term)
{
  if (term->cls)
    (term->cls) (term);
  else
    {
      grub_putcode ('\n', term);
      grub_term_refresh (term);
    }
}
# 431 "./include/grub/term.h"
static inline grub_ssize_t
grub_unicode_estimate_width (const struct grub_unicode_glyph *c __attribute__ ((unused)))
{
  if (grub_unicode_get_comb_type (c->base))
    return 0;
  return 1;
}





static inline grub_ssize_t
grub_term_getcharwidth (struct grub_term_output *term,
   const struct grub_unicode_glyph *c)
{
  if (c->base == '\t')
    return 8;

  if (term->getcharwidth)
    return term->getcharwidth (term, c);
  else if (((term->flags & (7 << 3))
     == (2 << 3))
    || ((term->flags & (7 << 3))
        == (3 << 3))
    || ((term->flags & (7 << 3))
        == (4 << 3)))
    return grub_unicode_estimate_width (c);
  else
    return 1;
}

static inline void
grub_term_getcolor (struct grub_term_output *term,
      grub_uint8_t *normal_color, grub_uint8_t *highlight_color)
{
  *normal_color = term->normal_color;
  *highlight_color = term->highlight_color;
}

struct grub_term_autoload
{
  struct grub_term_autoload *next;
  char *name;
  char *modname;
};

extern struct grub_term_autoload *grub_term_input_autoload;
extern struct grub_term_autoload *grub_term_output_autoload;

static inline void
grub_print_spaces (struct grub_term_output *term, int number_spaces)
{
  while (--number_spaces >= 0)
    grub_putcode (' ', term);
}

extern void (*grub_term_poll_usb) (void);
# 31 "util/grub-fstest.c" 2

# 1 "./include/grub/lib/hexdump.h" 1
# 23 "./include/grub/lib/hexdump.h"
void hexdump (unsigned long bse,char* buf,int len);
# 33 "util/grub-fstest.c" 2
# 1 "./include/grub/crypto.h" 1
# 31 "./include/grub/crypto.h"
typedef enum
  {
    GPG_ERR_NO_ERROR,
    GPG_ERR_BAD_MPI,
    GPG_ERR_BAD_SECKEY,
    GPG_ERR_BAD_SIGNATURE,
    GPG_ERR_CIPHER_ALGO,
    GPG_ERR_CONFLICT,
    GPG_ERR_DECRYPT_FAILED,
    GPG_ERR_DIGEST_ALGO,
    GPG_ERR_GENERAL,
    GPG_ERR_INTERNAL,
    GPG_ERR_INV_ARG,
    GPG_ERR_INV_CIPHER_MODE,
    GPG_ERR_INV_FLAG,
    GPG_ERR_INV_KEYLEN,
    GPG_ERR_INV_OBJ,
    GPG_ERR_INV_OP,
    GPG_ERR_INV_SEXP,
    GPG_ERR_INV_VALUE,
    GPG_ERR_MISSING_VALUE,
    GPG_ERR_NO_ENCRYPTION_SCHEME,
    GPG_ERR_NO_OBJ,
    GPG_ERR_NO_PRIME,
    GPG_ERR_NO_SIGNATURE_SCHEME,
    GPG_ERR_NOT_FOUND,
    GPG_ERR_NOT_IMPLEMENTED,
    GPG_ERR_NOT_SUPPORTED,
    GPG_ERROR_CFLAGS,
    GPG_ERR_PUBKEY_ALGO,
    GPG_ERR_SELFTEST_FAILED,
    GPG_ERR_TOO_SHORT,
    GPG_ERR_UNSUPPORTED,
    GPG_ERR_WEAK_KEY,
    GPG_ERR_WRONG_KEY_USAGE,
    GPG_ERR_WRONG_PUBKEY_ALGO,
    GPG_ERR_OUT_OF_MEMORY
  } gcry_err_code_t;



enum gcry_cipher_modes
  {
    GCRY_CIPHER_MODE_NONE = 0,
    GCRY_CIPHER_MODE_ECB = 1,
    GCRY_CIPHER_MODE_CFB = 2,
    GCRY_CIPHER_MODE_CBC = 3,
    GCRY_CIPHER_MODE_STREAM = 4,
    GCRY_CIPHER_MODE_OFB = 5,
    GCRY_CIPHER_MODE_CTR = 6
  };


typedef gcry_err_code_t (*gcry_cipher_setkey_t) (void *c,
       const unsigned char *key,
       unsigned keylen);


typedef void (*gcry_cipher_encrypt_t) (void *c,
           unsigned char *outbuf,
           const unsigned char *inbuf);


typedef void (*gcry_cipher_decrypt_t) (void *c,
           unsigned char *outbuf,
           const unsigned char *inbuf);


typedef void (*gcry_cipher_stencrypt_t) (void *c,
      unsigned char *outbuf,
      const unsigned char *inbuf,
      unsigned int n);


typedef void (*gcry_cipher_stdecrypt_t) (void *c,
      unsigned char *outbuf,
      const unsigned char *inbuf,
      unsigned int n);

typedef struct gcry_cipher_oid_spec
{
  const char *oid;
  int mode;
} gcry_cipher_oid_spec_t;


typedef struct gcry_cipher_spec
{
  const char *name;
  const char **aliases;
  gcry_cipher_oid_spec_t *oids;
  grub_size_t blocksize;
  grub_size_t keylen;
  grub_size_t contextsize;
  gcry_cipher_setkey_t setkey;
  gcry_cipher_encrypt_t encrypt;
  gcry_cipher_decrypt_t decrypt;
  gcry_cipher_stencrypt_t stencrypt;
  gcry_cipher_stdecrypt_t stdecrypt;

  const char *modname;

  struct gcry_cipher_spec *next;
} gcry_cipher_spec_t;


typedef void (*gcry_md_init_t) (void *c);


typedef void (*gcry_md_write_t) (void *c, const void *buf, grub_size_t nbytes);


typedef void (*gcry_md_final_t) (void *c);


typedef unsigned char *(*gcry_md_read_t) (void *c);

typedef struct gcry_md_oid_spec
{
  const char *oidstring;
} gcry_md_oid_spec_t;


typedef struct gcry_md_spec
{
  const char *name;
  unsigned char *asnoid;
  int asnlen;
  gcry_md_oid_spec_t *oids;
  grub_size_t mdlen;
  gcry_md_init_t init;
  gcry_md_write_t write;
  gcry_md_final_t final;
  gcry_md_read_t read;
  grub_size_t contextsize;

  grub_size_t blocksize;

  const char *modname;

  struct gcry_md_spec *next;
} gcry_md_spec_t;

struct grub_crypto_cipher_handle
{
  const struct gcry_cipher_spec *cipher;
  char ctx[0];
};

typedef struct grub_crypto_cipher_handle *grub_crypto_cipher_handle_t;

struct grub_crypto_hmac_handle;

const gcry_cipher_spec_t *
grub_crypto_lookup_cipher_by_name (const char *name);

grub_crypto_cipher_handle_t
grub_crypto_cipher_open (const struct gcry_cipher_spec *cipher);

gcry_err_code_t
grub_crypto_cipher_set_key (grub_crypto_cipher_handle_t cipher,
       const unsigned char *key,
       unsigned keylen);

static inline void
grub_crypto_cipher_close (grub_crypto_cipher_handle_t cipher)
{
  grub_free (cipher);
}

static inline void
grub_crypto_xor (void *out, const void *in1, const void *in2, grub_size_t size)
{
  const grub_uint8_t *in1ptr = in1, *in2ptr = in2;
  grub_uint8_t *outptr = out;
  while (size && (((grub_addr_t) in1ptr & (sizeof (grub_uint64_t) - 1))
    || ((grub_addr_t) in2ptr & (sizeof (grub_uint64_t) - 1))
    || ((grub_addr_t) outptr & (sizeof (grub_uint64_t) - 1))))
    {
      *outptr = *in1ptr ^ *in2ptr;
      in1ptr++;
      in2ptr++;
      outptr++;
      size--;
    }
  while (size >= sizeof (grub_uint64_t))
    {
      *(grub_uint64_t *) (void *) outptr
 = (*(grub_uint64_t *) (void *) in1ptr
    ^ *(grub_uint64_t *) (void *) in2ptr);
      in1ptr += sizeof (grub_uint64_t);
      in2ptr += sizeof (grub_uint64_t);
      outptr += sizeof (grub_uint64_t);
      size -= sizeof (grub_uint64_t);
    }
  while (size)
    {
      *outptr = *in1ptr ^ *in2ptr;
      in1ptr++;
      in2ptr++;
      outptr++;
      size--;
    }
}

gcry_err_code_t
grub_crypto_ecb_decrypt (grub_crypto_cipher_handle_t cipher,
    void *out, const void *in, grub_size_t size);

gcry_err_code_t
grub_crypto_ecb_encrypt (grub_crypto_cipher_handle_t cipher,
    void *out, const void *in, grub_size_t size);
gcry_err_code_t
grub_crypto_cbc_encrypt (grub_crypto_cipher_handle_t cipher,
    void *out, void *in, grub_size_t size,
    void *iv_in);
gcry_err_code_t
grub_crypto_cbc_decrypt (grub_crypto_cipher_handle_t cipher,
    void *out, const void *in, grub_size_t size,
    void *iv);
void
grub_cipher_register (gcry_cipher_spec_t *cipher);
void
grub_cipher_unregister (gcry_cipher_spec_t *cipher);
void
grub_md_register (gcry_md_spec_t *digest);
void
grub_md_unregister (gcry_md_spec_t *cipher);
void
grub_crypto_hash (const gcry_md_spec_t *hash, void *out, const void *in,
    grub_size_t inlen);
const gcry_md_spec_t *
grub_crypto_lookup_md_by_name (const char *name);

grub_err_t
grub_crypto_gcry_error (gcry_err_code_t in);

void grub_burn_stack (grub_size_t size);

struct grub_crypto_hmac_handle *
grub_crypto_hmac_init (const struct gcry_md_spec *md,
         const void *key, grub_size_t keylen);
void
grub_crypto_hmac_write (struct grub_crypto_hmac_handle *hnd,
   const void *data,
   grub_size_t datalen);
gcry_err_code_t
grub_crypto_hmac_fini (struct grub_crypto_hmac_handle *hnd, void *out);

gcry_err_code_t
grub_crypto_hmac_buffer (const struct gcry_md_spec *md,
    const void *key, grub_size_t keylen,
    const void *data, grub_size_t datalen, void *out);

extern gcry_md_spec_t _gcry_digest_spec_md5;
extern gcry_md_spec_t _gcry_digest_spec_sha1;
extern gcry_md_spec_t _gcry_digest_spec_sha256;
extern gcry_md_spec_t _gcry_digest_spec_sha512;
extern gcry_md_spec_t _gcry_digest_spec_crc32;
extern gcry_cipher_spec_t _gcry_cipher_spec_aes;
# 304 "./include/grub/crypto.h"
gcry_err_code_t
grub_crypto_pbkdf2 (const struct gcry_md_spec *md,
      const grub_uint8_t *P, grub_size_t Plen,
      const grub_uint8_t *S, grub_size_t Slen,
      unsigned int c,
      grub_uint8_t *DK, grub_size_t dkLen);

int
grub_crypto_memcmp (const void *a, const void *b, grub_size_t n);

int
grub_password_get (char buf[], unsigned buf_size);




extern void (*grub_crypto_autoload_hook) (const char *name);


void grub_gcry_init_all (void);
void grub_gcry_fini_all (void);
# 34 "util/grub-fstest.c" 2
# 1 "./include/grub/command.h" 1
# 26 "./include/grub/command.h"
typedef enum grub_command_flags
  {

    GRUB_COMMAND_FLAG_EXTCMD = 0x10,

    GRUB_COMMAND_FLAG_DYNCMD = 0x20,

    GRUB_COMMAND_FLAG_BLOCKS = 0x40,

    GRUB_COMMAND_ACCEPT_DASH = 0x80,

    GRUB_COMMAND_OPTIONS_AT_START = 0x100,

    GRUB_COMMAND_FLAG_EXTRACTOR = 0x200
  } grub_command_flags_t;

struct grub_command;

typedef grub_err_t (*grub_command_func_t) (struct grub_command *cmd,
        int argc, char **argv);





struct grub_command
{

  struct grub_command *next;
  struct grub_command **prev;


  const char *name;


  int prio;


  grub_command_func_t func;


  grub_command_flags_t flags;


  const char *summary;


  const char *description;


  void *data;
};
typedef struct grub_command *grub_command_t;

extern grub_command_t grub_command_list;

grub_command_t
grub_register_command_prio (const char *name,
      grub_command_func_t func,
      const char *summary,
      const char *description,
      int prio);
void grub_unregister_command (grub_command_t cmd);

static inline grub_command_t
grub_register_command (const char *name,
         grub_command_func_t func,
         const char *summary,
         const char *description)
{
  return grub_register_command_prio (name, func, summary, description, 0);
}

static inline grub_command_t
grub_register_command_p1 (const char *name,
     grub_command_func_t func,
     const char *summary,
     const char *description)
{
  return grub_register_command_prio (name, func, summary, description, 1);
}

static inline grub_command_t
grub_command_find (const char *name)
{
  return grub_named_list_find (((((char *) &(grub_command_list)->next == (char *) &((grub_named_list_t) (grub_command_list))->next) && ((char *) &(grub_command_list)->prev == (char *) &((grub_named_list_t) (grub_command_list))->prev) && ((char *) &(grub_command_list)->name == (char *) &((grub_named_list_t) (grub_command_list))->name))? (grub_named_list_t) grub_command_list : (grub_named_list_t) grub_bad_type_cast_real(111, "util/grub-fstest.c")), name);
}

static inline grub_err_t
grub_command_execute (const char *name, int argc, char **argv)
{
  grub_command_t cmd;

  cmd = grub_command_find (name);
  return (cmd) ? cmd->func (cmd, argc, argv) : GRUB_ERR_FILE_NOT_FOUND;
}



void grub_register_core_commands (void);
# 35 "util/grub-fstest.c" 2

# 1 "./include/grub/zfs/zfs.h" 1
# 29 "./include/grub/zfs/zfs.h"
typedef enum grub_zfs_endian
  {
    GRUB_ZFS_UNKNOWN_ENDIAN = -2,
    GRUB_ZFS_LITTLE_ENDIAN = -1,
    GRUB_ZFS_BIG_ENDIAN = 0
  } grub_zfs_endian_t;
# 106 "./include/grub/zfs/zfs.h"
typedef enum pool_state {
 POOL_STATE_ACTIVE = 0,
 POOL_STATE_EXPORTED,
 POOL_STATE_DESTROYED,
 POOL_STATE_SPARE,
 POOL_STATE_L2CACHE,
 POOL_STATE_UNINITIALIZED,
 POOL_STATE_UNAVAIL,
 POOL_STATE_POTENTIALLY_ACTIVE
} pool_state_t;

struct grub_zfs_data;

grub_err_t grub_zfs_fetch_nvlist (grub_device_t dev, char **nvlist);
grub_err_t grub_zfs_getmdnobj (grub_device_t dev, const char *fsfilename,
          grub_uint64_t *mdnobj);

char *grub_zfs_nvlist_lookup_string (const char *nvlist, const char *name);
char *grub_zfs_nvlist_lookup_nvlist (const char *nvlist, const char *name);
int grub_zfs_nvlist_lookup_uint64 (const char *nvlist, const char *name,
       grub_uint64_t *out);
char *grub_zfs_nvlist_lookup_nvlist_array (const char *nvlist,
        const char *name,
        grub_size_t index);
int grub_zfs_nvlist_lookup_nvlist_array_get_nelm (const char *nvlist,
        const char *name);
grub_err_t
grub_zfs_add_key (grub_uint8_t *key_in,
    grub_size_t keylen,
    int passphrase);

extern grub_err_t (*grub_zfs_decrypt) (grub_crypto_cipher_handle_t cipher,
           grub_uint64_t algo,
           void *nonce,
           char *buf, grub_size_t size,
           const grub_uint32_t *expected_mac,
           grub_zfs_endian_t endian);

struct grub_zfs_key;

extern grub_crypto_cipher_handle_t (*grub_zfs_load_key) (const struct grub_zfs_key *key,
        grub_size_t keysize,
        grub_uint64_t salt,
        grub_uint64_t algo);
# 37 "util/grub-fstest.c" 2



# 1 "/usr/include/string.h" 1 3 4
# 17 "/usr/include/string.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 18 "/usr/include/string.h" 2 3 4






# 1 "/usr/include/strings.h" 1 3 4
# 44 "/usr/include/strings.h" 3 4



# 46 "/usr/include/strings.h" 3 4
int bcmp(const void *, const void *, size_t) __attribute__((__pure__));
void bcopy(const void *, void *, size_t);
void bzero(void *, size_t);


void explicit_bzero(void *, size_t);


int ffs(int) __attribute__((__const__));


int ffsl(long) __attribute__((__const__));
int ffsll(long long) __attribute__((__const__));
int fls(int) __attribute__((__const__));
int flsl(long) __attribute__((__const__));
int flsll(long long) __attribute__((__const__));


char *index(const char *, int) __attribute__((__pure__));
char *rindex(const char *, int) __attribute__((__pure__));

int strcasecmp(const char *, const char *) __attribute__((__pure__));
int strncasecmp(const char *, const char *, size_t) __attribute__((__pure__));


int strcasecmp_l (const char *, const char *, locale_t);
int strncasecmp_l (const char *, const char *, size_t, locale_t);


# 25 "/usr/include/string.h" 2 3 4




void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void *
# 31 "/usr/include/string.h"
                     __restrict
# 31 "/usr/include/string.h" 3 4
                               , const void *
# 31 "/usr/include/string.h"
                                             __restrict
# 31 "/usr/include/string.h" 3 4
                                                       , size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *
# 34 "/usr/include/string.h"
                    __restrict
# 34 "/usr/include/string.h" 3 4
                              , const char *
# 34 "/usr/include/string.h"
                                            __restrict
# 34 "/usr/include/string.h" 3 4
                                                      );
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *
# 38 "/usr/include/string.h"
                    __restrict
# 38 "/usr/include/string.h" 3 4
                              , const char *
# 38 "/usr/include/string.h"
                                            __restrict
# 38 "/usr/include/string.h" 3 4
                                                      );
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *
# 42 "/usr/include/string.h"
                     __restrict
# 42 "/usr/include/string.h" 3 4
                               , const char *
# 42 "/usr/include/string.h"
                                             __restrict
# 42 "/usr/include/string.h" 3 4
                                                       , size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *
# 44 "/usr/include/string.h"
                     __restrict
# 44 "/usr/include/string.h" 3 4
                               , const char *
# 44 "/usr/include/string.h"
                                             __restrict
# 44 "/usr/include/string.h" 3 4
                                                       , size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *
# 50 "/usr/include/string.h"
                    __restrict
# 50 "/usr/include/string.h" 3 4
                              , const char *
# 50 "/usr/include/string.h"
                                            __restrict
# 50 "/usr/include/string.h" 3 4
                                                      );

size_t strxfrm (char *
# 52 "/usr/include/string.h"
                      __restrict
# 52 "/usr/include/string.h" 3 4
                                , const char *
# 52 "/usr/include/string.h"
                                              __restrict
# 52 "/usr/include/string.h" 3 4
                                                        , size_t);


int strcoll_l (const char *, const char *, locale_t);
char *strerror_l (int, locale_t);
size_t strxfrm_l (char *
# 57 "/usr/include/string.h"
                        __restrict
# 57 "/usr/include/string.h" 3 4
                                  , const char *
# 57 "/usr/include/string.h"
                                                __restrict
# 57 "/usr/include/string.h" 3 4
                                                          , size_t, locale_t);


char *strtok_r (char *
# 60 "/usr/include/string.h"
                      __restrict
# 60 "/usr/include/string.h" 3 4
                                , const char *
# 60 "/usr/include/string.h"
                                              __restrict
# 60 "/usr/include/string.h" 3 4
                                                        , char **
# 60 "/usr/include/string.h"
                                                                 __restrict
# 60 "/usr/include/string.h" 3 4
                                                                           );


int timingsafe_bcmp (const void *, const void *, size_t);
int timingsafe_memcmp (const void *, const void *, size_t);


void * memccpy (void *
# 67 "/usr/include/string.h"
                      __restrict
# 67 "/usr/include/string.h" 3 4
                                , const void *
# 67 "/usr/include/string.h"
                                              __restrict
# 67 "/usr/include/string.h" 3 4
                                                        , int, size_t);


void * mempcpy (void *, const void *, size_t);
void * memmem (const void *, size_t, const void *, size_t);
void * memrchr (const void *, int, size_t);
void * rawmemchr (const void *, int);


char *stpcpy (char *
# 76 "/usr/include/string.h"
                    __restrict
# 76 "/usr/include/string.h" 3 4
                              , const char *
# 76 "/usr/include/string.h"
                                            __restrict
# 76 "/usr/include/string.h" 3 4
                                                      );
char *stpncpy (char *
# 77 "/usr/include/string.h"
                     __restrict
# 77 "/usr/include/string.h" 3 4
                               , const char *
# 77 "/usr/include/string.h"
                                             __restrict
# 77 "/usr/include/string.h" 3 4
                                                       , size_t);


char *strcasestr (const char *, const char *);
char *strchrnul (const char *, int);


char *strdup (const char *);

char *_strdup_r (struct _reent *, const char *);

char *strndup (const char *, size_t);

char *_strndup_r (struct _reent *, const char *, size_t);






char *strerror_r (int, char *, size_t);
# 112 "/usr/include/string.h" 3 4
char * _strerror_r (struct _reent *, int, int, int *);


size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);


size_t strnlen (const char *, size_t);


char *strsep (char **, const char *);


char *strnstr(const char *, const char *, size_t) __attribute__((__pure__));



char *strlwr (char *);
char *strupr (char *);



char *strsignal (int __signo);



int strtosigno (const char *__name);



int strverscmp (const char *, const char *);
# 172 "/usr/include/string.h" 3 4
char *__attribute__((__nonnull__ (1))) basename (const char *) __asm__("" "__gnu_basename");


# 1 "/usr/include/sys/string.h" 1 3 4
# 176 "/usr/include/string.h" 2 3 4


# 41 "util/grub-fstest.c" 2



# 1 "/usr/include/dirent.h" 1 3 4






# 1 "/usr/include/sys/dirent.h" 1 3 4
# 14 "/usr/include/sys/dirent.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 1 3 4
# 15 "/usr/include/sys/dirent.h" 2 3 4







struct dirent
{
  uint32_t __d_version;
  ino_t d_ino;
  unsigned char d_type;
  unsigned char __d_unused1[3];
  __uint32_t __d_internal1;
  char d_name[255 + 1];
};
# 46 "/usr/include/sys/dirent.h" 3 4
typedef struct __DIR
{

  unsigned long __d_cookie;
  struct dirent *__d_dirent;
  char *__d_dirname;
  __int32_t __d_position;
  int __d_fd;
  uintptr_t __d_internal;
  void *__handle;
  void *__fh;
  unsigned __flags;
} DIR;




DIR *opendir (const char *);
DIR *fdopendir (int);
struct dirent *readdir (DIR *);
int readdir_r (DIR * 
# 66 "/usr/include/sys/dirent.h"
                    __restrict
# 66 "/usr/include/sys/dirent.h" 3 4
                              , struct dirent * 
# 66 "/usr/include/sys/dirent.h"
                                                __restrict
# 66 "/usr/include/sys/dirent.h" 3 4
                                                          ,
        struct dirent ** 
# 67 "/usr/include/sys/dirent.h"
                        __restrict
# 67 "/usr/include/sys/dirent.h" 3 4
                                  );
void rewinddir (DIR *);
int closedir (DIR *);

int dirfd (DIR *);



long telldir (DIR *);
void seekdir (DIR *, long loc);




int scandir (const char *__dir,
      struct dirent ***__namelist,
      int (*select) (const struct dirent *),
      int (*compar) (const struct dirent **, const struct dirent **));
int alphasort (const struct dirent **__a, const struct dirent **__b);



int scandirat (int __dirfd, const char *__dir, struct dirent ***__namelist,
        int (*select) (const struct dirent *),
        int (*compar) (const struct dirent **, const struct dirent **));
int versionsort (const struct dirent **__a, const struct dirent **__b);





enum
{
  DT_UNKNOWN = 0,

  DT_FIFO = 1,

  DT_CHR = 2,

  DT_DIR = 4,

  DT_BLK = 6,

  DT_REG = 8,

  DT_LNK = 10,

  DT_SOCK = 12,

  DT_WHT = 14

};
# 8 "/usr/include/dirent.h" 2 3 4
# 45 "util/grub-fstest.c" 2




# 1 "./grub-core/gnulib/progname.h" 1
# 32 "./grub-core/gnulib/progname.h"

# 32 "./grub-core/gnulib/progname.h"
extern const char *program_name;




extern void set_program_name (const char *argv0);
# 50 "util/grub-fstest.c" 2
# 1 "./grub-core/gnulib/argp.h" 1
# 23 "./grub-core/gnulib/argp.h"
# 1 "/usr/include/ctype.h" 1 3 4
# 11 "/usr/include/ctype.h" 3 4



# 13 "/usr/include/ctype.h" 3 4
int isalnum (int __c);
int isalpha (int __c);
int iscntrl (int __c);
int isdigit (int __c);
int isgraph (int __c);
int islower (int __c);
int isprint (int __c);
int ispunct (int __c);
int isspace (int __c);
int isupper (int __c);
int isxdigit (int __c);
int tolower (int __c);
int toupper (int __c);


int isblank (int __c);



int isascii (int __c);
int toascii (int __c);





extern int isalnum_l (int __c, locale_t __l);
extern int isalpha_l (int __c, locale_t __l);
extern int isblank_l (int __c, locale_t __l);
extern int iscntrl_l (int __c, locale_t __l);
extern int isdigit_l (int __c, locale_t __l);
extern int isgraph_l (int __c, locale_t __l);
extern int islower_l (int __c, locale_t __l);
extern int isprint_l (int __c, locale_t __l);
extern int ispunct_l (int __c, locale_t __l);
extern int isspace_l (int __c, locale_t __l);
extern int isupper_l (int __c, locale_t __l);
extern int isxdigit_l(int __c, locale_t __l);
extern int tolower_l (int __c, locale_t __l);
extern int toupper_l (int __c, locale_t __l);



extern int isascii_l (int __c, locale_t __l);
extern int toascii_l (int __c, locale_t __l);
# 69 "/usr/include/ctype.h" 3 4
const char *__locale_ctype_ptr (void);
# 103 "/usr/include/ctype.h" 3 4
const char *__locale_ctype_ptr_l (locale_t);
# 165 "/usr/include/ctype.h" 3 4
extern __attribute__((dllimport)) const char _ctype_[];


# 24 "./grub-core/gnulib/argp.h" 2
# 1 "/usr/include/getopt.h" 1 3 4
# 68 "/usr/include/getopt.h" 3 4
struct option {
 const char *name;
 int has_arg;
 int *flag;
 int val;
};

int getopt_long (int, char *const *, const char *, const struct option *, int *);
int getopt_long_only (int, char *const *, const char *, const struct option *, int *);
# 25 "./grub-core/gnulib/argp.h" 2
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 1 3 4
# 26 "./grub-core/gnulib/argp.h" 2


# 1 "/usr/include/errno.h" 1 3 4




typedef int error_t;



# 1 "/usr/include/sys/errno.h" 1 3 4
# 15 "/usr/include/sys/errno.h" 3 4
extern int *__errno (void);




extern __attribute__((dllimport)) const char * const _sys_errlist[];
extern __attribute__((dllimport)) int _sys_nerr;

extern __attribute__((dllimport)) const char * const sys_errlist[];
extern __attribute__((dllimport)) int sys_nerr;
extern __attribute__((dllimport)) char *program_invocation_name;
extern __attribute__((dllimport)) char *program_invocation_short_name;
# 10 "/usr/include/errno.h" 2 3 4
# 29 "./grub-core/gnulib/argp.h" 2
# 77 "./grub-core/gnulib/argp.h"

# 77 "./grub-core/gnulib/argp.h"
struct argp_option
{


  const char *name;



  int key;



  const char *arg;


  int flags;
# 101 "./grub-core/gnulib/argp.h"
  const char *doc;
# 110 "./grub-core/gnulib/argp.h"
  int group;
};
# 151 "./grub-core/gnulib/argp.h"
struct argp;
struct argp_state;
struct argp_child;


typedef error_t (*argp_parser_t) (int key, char *arg,
                                  struct argp_state *state);
# 225 "./grub-core/gnulib/argp.h"
struct argp
{


  const struct argp_option *options;
# 238 "./grub-core/gnulib/argp.h"
  argp_parser_t parser;






  const char *args_doc;






  const char *doc;







  const struct argp_child *children;
# 272 "./grub-core/gnulib/argp.h"
  char *(*help_filter) (int __key, const char *__text, void *__input);




  const char *argp_domain;
};
# 293 "./grub-core/gnulib/argp.h"
struct argp_child
{

  const struct argp *argp;


  int flags;





  const char *header;







  int group;
};



struct argp_state
{

  const struct argp *root_argp;


  int argc;
  char **argv;


  int next;


  unsigned flags;





  unsigned arg_num;




  int quoted;


  void *input;


  void **child_inputs;


  void *hook;



  char *name;


  FILE *err_stream;
  FILE *out_stream;

  void *pstate;
};
# 415 "./grub-core/gnulib/argp.h"
extern error_t argp_parse (const struct argp *__restrict __argp,
                           int , char **__restrict ,
                           unsigned __flags, int *__restrict __arg_index,
                           void *__restrict __input);
extern error_t __argp_parse (const struct argp *__restrict __argp,
                             int , char **__restrict ,
                             unsigned __flags, int *__restrict __arg_index,
                             void *__restrict __input);
# 444 "./grub-core/gnulib/argp.h"
extern const char *argp_program_version;






extern void (*argp_program_version_hook) (FILE *__restrict __stream,
                                          struct argp_state *__restrict
                                          __state);






extern const char *argp_program_bug_address;




extern error_t argp_err_exit_status;
# 498 "./grub-core/gnulib/argp.h"
extern void argp_help (const struct argp *__restrict __argp,
                       FILE *__restrict __stream,
                       unsigned __flags, char *__restrict __name);
extern void __argp_help (const struct argp *__restrict __argp,
                         FILE *__restrict __stream, unsigned __flags,
                         char *__name);
# 515 "./grub-core/gnulib/argp.h"
extern void argp_state_help (const struct argp_state *__restrict __state,
                             FILE *__restrict __stream,
                             unsigned int __flags);
extern void __argp_state_help (const struct argp_state *__restrict __state,
                               FILE *__restrict __stream,
                               unsigned int __flags);



extern void argp_usage (const struct argp_state *__state);
extern void __argp_usage (const struct argp_state *__state);





extern void argp_error (const struct argp_state *__restrict __state,
                        const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern void __argp_error (const struct argp_state *__restrict __state,
                          const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 546 "./grub-core/gnulib/argp.h"
extern void argp_failure (const struct argp_state *__restrict __state,
                          int __status, int __errnum,
                          const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 4, 5)));
extern void __argp_failure (const struct argp_state *__restrict __state,
                            int __status, int __errnum,
                            const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 4, 5)));



extern int _option_is_short (const struct argp_option *__opt) ;
extern int __option_is_short (const struct argp_option *__opt) ;



extern int _option_is_end (const struct argp_option *__opt) ;
extern int __option_is_end (const struct argp_option *__opt) ;




extern void *_argp_input (const struct argp *__restrict __argp,
                          const struct argp_state *__restrict __state)
     ;
extern void *__argp_input (const struct argp *__restrict __argp,
                           const struct argp_state *__restrict __state)
     ;
# 51 "util/grub-fstest.c" 2

static grub_err_t
execute_command (const char *name, int n, char **args)
{
  grub_command_t cmd;

  cmd = grub_command_find (name);
  if (! cmd)
    grub_util_error (_("can't find command `%s'"), name);

  return (cmd->func) (cmd, n, args);
}

enum {
  CMD_LS = 1,
  CMD_CP,
  CMD_CAT,
  CMD_CMP,
  CMD_HEX,
  CMD_CRC,
  CMD_BLOCKLIST,
  CMD_TESTLOAD,
  CMD_ZFSINFO,
  CMD_XNU_UUID
};


static grub_disk_addr_t skip, leng;
static int uncompress = 0;

static void
read_file (char *pathname, int (*hook) (grub_off_t ofs, char *buf, int len))
{
  static char buf[32256];
  grub_file_t file;

  if ((pathname[0] == '-') && (pathname[1] == 0))
    {
      grub_device_t dev;

      dev = grub_device_open (0);
      if ((! dev) || (! dev->disk))
        grub_util_error ("%s", grub_errmsg);

      grub_util_info ("total sectors : %lld",
                      (unsigned long long) dev->disk->total_sectors);

      if (! leng)
        leng = (dev->disk->total_sectors << 9) - skip;

      while (leng)
        {
          grub_size_t len;

          len = (leng > 32256) ? 32256 : leng;

          if (grub_disk_read (dev->disk, 0, skip, len, buf))
            grub_util_error (_("disk read fails at offset %lld, length %d"),
                             skip, len);

          if (hook (skip, buf, len))
            break;

          skip += len;
          leng -= len;
        }

      grub_device_close (dev);
      return;
    }

  if (uncompress == 0)
    grub_file_filter_disable_compression ();
  file = grub_file_open (pathname);
  if (!file)
    {
      grub_util_error (_("cannot open `%s': %s"), pathname,
         grub_errmsg);
      return;
    }

  grub_util_info ("file size : %lld", (unsigned long long) file->size);

  if (skip > file->size)
    {
      grub_util_error (_("invalid skip value %lld"), (unsigned long long) skip);
      return;
    }

  {
    grub_off_t ofs, len;
    ofs = skip;
    len = file->size - skip;
    if ((leng) && (leng < len))
      len = leng;

    file->offset = skip;

    while (len)
      {
 grub_ssize_t sz;

 sz = grub_file_read (file, buf, (len > 32256) ? 32256 : len);
 if (sz < 0)
   {
     grub_util_error (_("read error at offset %llu: %s"), ofs,
        grub_errmsg);
     break;
   }

 if ((sz == 0) || (hook (ofs, buf, sz)))
   break;

 ofs += sz;
 len -= sz;
      }
  }

  grub_file_close (file);
}

static void
cmd_cp (char *src, char *dest)
{
  FILE *ff;

  auto int cp_hook (grub_off_t ofs, char *buf, int len);
  int cp_hook (grub_off_t ofs, char *buf, int len)
  {
    (void) ofs;

    if ((int) fwrite (buf, 1, len, ff) != len)
      {
 grub_util_error (_("cannot write to `%s': %s"),
    dest, strerror (
# 185 "util/grub-fstest.c" 3 4
                   (*__errno())
# 185 "util/grub-fstest.c"
                        ));
 return 1;
      }

    return 0;
  }

  ff = fopen (dest, "wb");
  if (ff == 
# 193 "util/grub-fstest.c" 3 4
           ((void *)0)
# 193 "util/grub-fstest.c"
               )
    {
      grub_util_error (_("cannot open OS file `%s': %s"), dest,
         strerror (
# 196 "util/grub-fstest.c" 3 4
                  (*__errno())
# 196 "util/grub-fstest.c"
                       ));
      return;
    }
  read_file (src, cp_hook);
  fclose (ff);
}

static void
cmd_cat (char *src)
{
  auto int cat_hook (grub_off_t ofs, char *buf, int len);
  int cat_hook (grub_off_t ofs, char *buf, int len)
  {
    (void) ofs;

    if ((int) fwrite (buf, 1, len, 
# 211 "util/grub-fstest.c" 3 4
                                  ((__getreent())->_stdout)
# 211 "util/grub-fstest.c"
                                        ) != len)
      {
 grub_util_error (_("cannot write to the stdout: %s"),
    strerror (
# 214 "util/grub-fstest.c" 3 4
             (*__errno())
# 214 "util/grub-fstest.c"
                  ));
 return 1;
      }

    return 0;
  }

  read_file (src, cat_hook);
}

static void
cmd_cmp (char *src, char *dest)
{
  FILE *ff;
  static char buf_1[32256];

  auto int cmp_hook (grub_off_t ofs, char *buf, int len);
  int cmp_hook (grub_off_t ofs, char *buf, int len)
  {
    if ((int) fread (buf_1, 1, len, ff) != len)
      {
 grub_util_error (_("read error at offset %llu: %s"), ofs,
    grub_errmsg);
 return 1;
      }

    if (grub_memcmp (buf, buf_1, len))
      {
 int i;

 for (i = 0; i < len; i++, ofs++)
   if (buf_1[i] != buf[i])
     {
       grub_util_error (_("compare fail at offset %llu"), ofs);
       return 1;
     }
      }
    return 0;
  }

  struct stat st;
  if (stat (dest, &st) == -1)
    grub_util_error (_("OS file %s open error: %s"), dest,
       strerror (
# 257 "util/grub-fstest.c" 3 4
                (*__errno())
# 257 "util/grub-fstest.c"
                     ));

  if (
# 259 "util/grub-fstest.c" 3 4
     (((
# 259 "util/grub-fstest.c"
     st.st_mode
# 259 "util/grub-fstest.c" 3 4
     )&0170000) == 0040000)
# 259 "util/grub-fstest.c"
                         )
    {
      DIR *dir = opendir (dest);
      struct dirent *entry;
      if (dir == 
# 263 "util/grub-fstest.c" 3 4
                ((void *)0)
# 263 "util/grub-fstest.c"
                    )
 {
   grub_util_error (_("OS file %s open error: %s"), dest,
      strerror (
# 266 "util/grub-fstest.c" 3 4
               (*__errno())
# 266 "util/grub-fstest.c"
                    ));
   return;
 }
      while ((entry = readdir (dir)))
 {
   char *srcnew, *destnew;
   char *ptr;
   if (strcmp (entry->d_name, ".") == 0
       || strcmp (entry->d_name, "..") == 0)
     continue;
   srcnew = xmalloc (strlen (src) + sizeof ("/")
       + strlen (entry->d_name));
   destnew = xmalloc (strlen (dest) + sizeof ("/")
       + strlen (entry->d_name));
   ptr = stpcpy (srcnew, src);
   *ptr++ = '/';
   strcpy (ptr, entry->d_name);
   ptr = stpcpy (destnew, dest);
   *ptr++ = '/';
   strcpy (ptr, entry->d_name);

   if (lstat (destnew, &st) == -1 || (!
# 287 "util/grub-fstest.c" 3 4
                                      (((
# 287 "util/grub-fstest.c"
                                      st.st_mode
# 287 "util/grub-fstest.c" 3 4
                                      )&0170000) == 0100000)
       
# 288 "util/grub-fstest.c"
      && !
# 288 "util/grub-fstest.c" 3 4
          (((
# 288 "util/grub-fstest.c"
          st.st_mode
# 288 "util/grub-fstest.c" 3 4
          )&0170000) == 0040000)
# 288 "util/grub-fstest.c"
                              ))
     continue;

   cmd_cmp (srcnew, destnew);
 }
      closedir (dir);
      return;
    }

  ff = fopen (dest, "rb");
  if (ff == 
# 298 "util/grub-fstest.c" 3 4
           ((void *)0)
# 298 "util/grub-fstest.c"
               )
    {
      grub_util_error (_("OS file %s open error: %s"), dest,
         strerror (
# 301 "util/grub-fstest.c" 3 4
                  (*__errno())
# 301 "util/grub-fstest.c"
                       ));
      return;
    }

  if ((skip) && (fseeko (ff, skip, 
# 305 "util/grub-fstest.c" 3 4
                                  0
# 305 "util/grub-fstest.c"
                                          )))
    grub_util_error (_("cannot seek `%s': %s"), dest,
       strerror (
# 307 "util/grub-fstest.c" 3 4
                (*__errno())
# 307 "util/grub-fstest.c"
                     ));

  read_file (src, cmp_hook);

  {
    grub_uint64_t pre;
    pre = ftell (ff);
    fseek (ff, 0, 
# 314 "util/grub-fstest.c" 3 4
                 2
# 314 "util/grub-fstest.c"
                         );
    if (pre != ftell (ff))
      grub_util_error ("%s", _("unexpected end of file"));
  }
  fclose (ff);
}

static void
cmd_hex (char *pathname)
{
  auto int hex_hook (grub_off_t ofs, char *buf, int len);
  int hex_hook (grub_off_t ofs, char *buf, int len)
  {
    hexdump (ofs, buf, len);
    return 0;
  }

  read_file (pathname, hex_hook);
}

static void
cmd_crc (char *pathname)
{
  grub_uint8_t crc32_context[((const gcry_md_spec_t *) &_gcry_digest_spec_crc32)->contextsize];
  ((const gcry_md_spec_t *) &_gcry_digest_spec_crc32)->init(crc32_context);

  auto int crc_hook (grub_off_t ofs, char *buf, int len);
  int crc_hook (grub_off_t ofs, char *buf, int len)
  {
    (void) ofs;

    ((const gcry_md_spec_t *) &_gcry_digest_spec_crc32)->write(crc32_context, buf, len);
    return 0;
  }

  read_file (pathname, crc_hook);
  ((const gcry_md_spec_t *) &_gcry_digest_spec_crc32)->final(crc32_context);
  printf ("%08x\n",
   grub_swap_bytes32(grub_get_unaligned32 (((const gcry_md_spec_t *) &_gcry_digest_spec_crc32)->read (crc32_context))));
}

static const char *root = 
# 355 "util/grub-fstest.c" 3 4
                         ((void *)0)
# 355 "util/grub-fstest.c"
                             ;
static int args_count = 0;
static int nparm = 0;
static int num_disks = 1;
static char **images = 
# 359 "util/grub-fstest.c" 3 4
                      ((void *)0)
# 359 "util/grub-fstest.c"
                          ;
static int cmd = 0;
static char *debug_str = 
# 361 "util/grub-fstest.c" 3 4
                        ((void *)0)
# 361 "util/grub-fstest.c"
                            ;
static char **args = 
# 362 "util/grub-fstest.c" 3 4
                    ((void *)0)
# 362 "util/grub-fstest.c"
                        ;
static int mount_crypt = 0;

static void
fstest (int n)
{
  char *host_file;
  char *loop_name;
  int i;

  for (i = 0; i < num_disks; i++)
    {
      char *argv[2];
      loop_name = grub_xasprintf ("loop%d", i);
      if (!loop_name)
 grub_util_error ("%s", grub_errmsg);

      host_file = grub_xasprintf ("(host)%s", images[i]);
      if (!host_file)
 grub_util_error ("%s", grub_errmsg);

      argv[0] = loop_name;
      argv[1] = host_file;

      if (execute_command ("loopback", 2, argv))
        grub_util_error (_("`loopback' command fails: %s"), grub_errmsg);

      grub_free (loop_name);
      grub_free (host_file);
    }

  {
    if (mount_crypt)
      {
 char *argv[2] = { xstrdup ("-a"), 
# 396 "util/grub-fstest.c" 3 4
                                  ((void *)0)
# 396 "util/grub-fstest.c"
                                      };
 if (execute_command ("cryptomount", 1, argv))
   grub_util_error (_("`cryptomount' command fails: %s"),
      grub_errmsg);
 free (argv[0]);
      }
  }

  grub_ldm_fini ();
  grub_lvm_fini ();
  grub_mdraid09_fini ();
  grub_mdraid1x_fini ();
  grub_diskfilter_fini ();
  grub_diskfilter_init ();
  grub_mdraid09_init ();
  grub_mdraid1x_init ();
  grub_lvm_init ();
  grub_ldm_init ();

  switch (cmd)
    {
    case CMD_LS:
      execute_command ("ls", n, args);
      break;
    case CMD_ZFSINFO:
      execute_command ("zfsinfo", n, args);
      break;
    case CMD_CP:
      cmd_cp (args[0], args[1]);
      break;
    case CMD_CAT:
      cmd_cat (args[0]);
      break;
    case CMD_CMP:
      cmd_cmp (args[0], args[1]);
      break;
    case CMD_HEX:
      cmd_hex (args[0]);
      break;
    case CMD_CRC:
      cmd_crc (args[0]);
      break;
    case CMD_BLOCKLIST:
      execute_command ("blocklist", n, args);
      grub_printf ("\n");
      break;
    case CMD_TESTLOAD:
      execute_command ("testload", n, args);
      grub_printf ("\n");
      break;
    case CMD_XNU_UUID:
      {
 grub_device_t dev;
 grub_fs_t fs;
 char *uuid = 0;
 char *argv[3] = { xstrdup ("-l"), 
# 451 "util/grub-fstest.c" 3 4
                                  ((void *)0)
# 451 "util/grub-fstest.c"
                                      , 
# 451 "util/grub-fstest.c" 3 4
                                        ((void *)0)
# 451 "util/grub-fstest.c"
                                            };
 dev = grub_device_open (n ? args[0] : 0);
 if (!dev)
   grub_util_error ("%s", grub_errmsg);
 fs = grub_fs_probe (dev);
 if (!fs)
   grub_util_error ("%s", grub_errmsg);
 if (!fs->uuid)
   grub_util_error ("%s", _("couldn't retrieve UUID"));
 if (fs->uuid (dev, &uuid))
   grub_util_error ("%s", grub_errmsg);
 if (!uuid)
   grub_util_error ("%s", _("couldn't retrieve UUID"));
 argv[1] = uuid;
 execute_command ("xnu_uuid", 2, argv);
 grub_free (argv[0]);
 grub_free (uuid);
 grub_device_close (dev);
      }
    }

  for (i = 0; i < num_disks; i++)
    {
      char *argv[2];

      loop_name = grub_xasprintf ("loop%d", i);
      if (!loop_name)
 grub_util_error ("%s", grub_errmsg);

      argv[0] = xstrdup ("-d");
      argv[1] = loop_name;

      execute_command ("loopback", 2, argv);

      grub_free (loop_name);
      grub_free (argv[0]);
    }
}

static struct argp_option options[] = {
  {0, 0, 0 , 0x8, "Commands:", 1},
  {"ls PATH", 0, 0 , 0x8, "List files in PATH.", 1},
  {"cp FILE LOCAL", 0, 0, 0x8, "Copy FILE to local file LOCAL.", 1},
  {"cat FILE", 0, 0 , 0x8, "Copy FILE to standard output.", 1},
  {"cmp FILE LOCAL", 0, 0, 0x8, "Compare FILE with local file LOCAL.", 1},
  {"hex FILE", 0, 0 , 0x8, "Show contents of FILE in hex.", 1},
  {"crc FILE", 0, 0 , 0x8, "Get crc32 checksum of FILE.", 1},
  {"blocklist FILE", 0, 0, 0x8, "Display blocklist of FILE.", 1},
  {"xnu_uuid DEVICE", 0, 0, 0x8, "Compute XNU UUID of the device.", 1},

  {"root", 'r', "DEVICE_NAME", 0, "Set root device.", 2},
  {"skip", 's', "NUM", 0, "Skip N bytes from output file.", 2},
  {"length", 'n', "NUM", 0, "Handle N bytes in output file.", 2},
  {"diskcount", 'c', "NUM", 0, "Specify the number of input files.", 2},
  {"debug", 'd', "STRING", 0, "Set debug environment variable.", 2},
  {"crypto", 'C', 
# 506 "util/grub-fstest.c" 3 4
                   ((void *)0)
# 506 "util/grub-fstest.c"
                       , 0, "Mount crypto devices.", 2},
  {"zfs-key", 'K',

   "FILE|prompt", 0, "Load zfs crypto key.", 2},
  {"verbose", 'v', 
# 510 "util/grub-fstest.c" 3 4
                    ((void *)0)
# 510 "util/grub-fstest.c"
                        , 0, "print verbose messages.", 2},
  {"uncompress", 'u', 
# 511 "util/grub-fstest.c" 3 4
                     ((void *)0)
# 511 "util/grub-fstest.c"
                         , 0, "Uncompress data.", 2},
  {0, 0, 0, 0, 0, 0}
};


static void
print_version (FILE *stream, struct argp_state *state)
{
  fprintf (stream, "%s (%s) %s\n", program_name, "GRUB", "2.00");
}
void (*argp_program_version_hook) (FILE *, struct argp_state *) = print_version;

static error_t
argp_parser (int key, char *arg, struct argp_state *state)
{
  char *p;

  switch (key)
    {
    case 'r':
      root = arg;
      return 0;

    case 'K':
      if (strcmp (arg, "prompt") == 0)
 {
   char buf[1024];
   grub_puts_ ("Enter ZFS password: ");
   if (grub_password_get (buf, 1023))
     {
       grub_zfs_add_key ((grub_uint8_t *) buf, grub_strlen (buf), 1);
     }
 }
      else
      {
 FILE *f;
 ssize_t real_size;
 grub_uint8_t buf[1024];
 f = fopen (arg, "rb");
 if (!f)
   {
     printf (_("%s: error:"), program_name);
     printf (_("cannot open `%s': %s"), arg, strerror (
# 553 "util/grub-fstest.c" 3 4
                                                      (*__errno())
# 553 "util/grub-fstest.c"
                                                           ));
     printf ("\n");
     return 0;
   }
 real_size = fread (buf, 1, 1024, f);
 if (real_size < 0)
   {
     printf (_("%s: error:"), program_name);
     printf (_("cannot read `%s': %s"), arg, strerror (
# 561 "util/grub-fstest.c" 3 4
                                                      (*__errno())
# 561 "util/grub-fstest.c"
                                                           ));
     printf ("\n");
     fclose (f);
     return 0;
   }
 grub_zfs_add_key (buf, real_size, 0);
      }
      return 0;

    case 'C':
      mount_crypt = 1;
      return 0;

    case 's':
      skip = grub_strtoul (arg, &p, 0);
      if (*p == 's')
 skip <<= 9;
      return 0;

    case 'n':
      leng = grub_strtoul (arg, &p, 0);
      if (*p == 's')
 leng <<= 9;
      return 0;

    case 'c':
      num_disks = grub_strtoul (arg, 
# 587 "util/grub-fstest.c" 3 4
                                    ((void *)0)
# 587 "util/grub-fstest.c"
                                        , 0);
      if (num_disks < 1)
 {
   fprintf (
# 590 "util/grub-fstest.c" 3 4
           ((__getreent())->_stderr)
# 590 "util/grub-fstest.c"
                 , "%s", _("Invalid disk count.\n"));
   argp_usage (state);
 }
      if (args_count != 0)
 {



   fprintf (
# 598 "util/grub-fstest.c" 3 4
           ((__getreent())->_stderr)
# 598 "util/grub-fstest.c"
                 , "%s", _("Disk count must precede disks list.\n"));
   argp_usage (state);
 }
      return 0;

    case 'd':
      debug_str = arg;
      return 0;

    case 'v':
      verbosity++;
      return 0;

    case 'u':
      uncompress = 1;
      return 0;

    case 0x1000001:
      if (args_count < num_disks)
 {
   fprintf (
# 618 "util/grub-fstest.c" 3 4
           ((__getreent())->_stderr)
# 618 "util/grub-fstest.c"
                 , "%s", _("No command is specified.\n"));
   argp_usage (state);
 }
      if (args_count - 1 - num_disks < nparm)
 {
   fprintf (
# 623 "util/grub-fstest.c" 3 4
           ((__getreent())->_stderr)
# 623 "util/grub-fstest.c"
                 , "%s", _("Not enough parameters to command.\n"));
   argp_usage (state);
 }
      return 0;

    case 0:
      break;

    default:
      return 
# 632 "util/grub-fstest.c" 3 4
            7
# 632 "util/grub-fstest.c"
                            ;
    }

  if (args_count < num_disks)
    {
      if (args_count == 0)
 images = xmalloc (num_disks * sizeof (images[0]));
      images[args_count] = canonicalize_file_name (arg);
      args_count++;
      return 0;
    }

  if (args_count == num_disks)
    {
      if (!grub_strcmp (arg, "ls"))
        {
          cmd = CMD_LS;
        }
      else if (!grub_strcmp (arg, "zfsinfo"))
        {
          cmd = CMD_ZFSINFO;
        }
      else if (!grub_strcmp (arg, "cp"))
 {
   cmd = CMD_CP;
          nparm = 2;
 }
      else if (!grub_strcmp (arg, "cat"))
 {
   cmd = CMD_CAT;
   nparm = 1;
 }
      else if (!grub_strcmp (arg, "cmp"))
 {
   cmd = CMD_CMP;
          nparm = 2;
 }
      else if (!grub_strcmp (arg, "hex"))
 {
   cmd = CMD_HEX;
          nparm = 1;
 }
      else if (!grub_strcmp (arg, "crc"))
 {
   cmd = CMD_CRC;
          nparm = 1;
 }
      else if (!grub_strcmp (arg, "blocklist"))
 {
   cmd = CMD_BLOCKLIST;
          nparm = 1;
 }
      else if (!grub_strcmp (arg, "testload"))
 {
   cmd = CMD_TESTLOAD;
          nparm = 1;
 }
      else if (grub_strcmp (arg, "xnu_uuid") == 0)
 {
   cmd = CMD_XNU_UUID;
   nparm = 0;
 }
      else
 {
   fprintf (
# 696 "util/grub-fstest.c" 3 4
           ((__getreent())->_stderr)
# 696 "util/grub-fstest.c"
                 , _("Invalid command %s.\n"), arg);
   argp_usage (state);
 }
      args_count++;
      return 0;
    }

  args[args_count - 1 - num_disks] = xstrdup (arg);
  args_count++;
  return 0;
}

struct argp argp = {
  options, argp_parser, "IMAGE_PATH COMMANDS",
  "Debug tool for filesystem driver.",
  
# 711 "util/grub-fstest.c" 3 4
 ((void *)0)
# 711 "util/grub-fstest.c"
     , 
# 711 "util/grub-fstest.c" 3 4
       ((void *)0)
# 711 "util/grub-fstest.c"
           , 
# 711 "util/grub-fstest.c" 3 4
             ((void *)0)

# 712 "util/grub-fstest.c"
};

int
main (int argc, char *argv[])
{
  const char *default_root;
  char *alloc_root;

  set_program_name (argv[0]);

  grub_util_init_nls ();

  args = xmalloc (argc * sizeof (args[0]));

  argp_parse (&argp, argc, argv, 0, 0, 0);


  grub_init_all ();
  grub_gcry_init_all ();

  if (debug_str)
    grub_env_set ("debug", debug_str);

  default_root = (num_disks == 1) ? "loop0" : "md0";
  alloc_root = 0;
  if (root)
    {
      if ((*root >= '0') && (*root <= '9'))
        {
          alloc_root = xmalloc (strlen (default_root) + strlen (root) + 2);

          sprintf (alloc_root, "%s,%s", default_root, root);
          root = alloc_root;
        }
    }
  else
    root = default_root;

  grub_env_set ("root", root);

  if (alloc_root)
    free (alloc_root);


  fstest (args_count - 1 - num_disks);


  grub_gcry_fini_all ();
  grub_fini_all ();

  return 0;
}
# 1 "grub-core/kern/emu/hostfs.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "grub-core/kern/emu/hostfs.c"
# 20 "grub-core/kern/emu/hostfs.c"
# 1 "./include/grub/fs.h" 1
# 23 "./include/grub/fs.h"
# 1 "./include/grub/device.h" 1
# 23 "./include/grub/device.h"
# 1 "./include/grub/symbol.h" 1
# 22 "./include/grub/symbol.h"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 23 "./include/grub/symbol.h" 2
# 24 "./include/grub/device.h" 2
# 1 "./include/grub/err.h" 1
# 27 "./include/grub/err.h"
typedef enum
  {
    GRUB_ERR_NONE = 0,
    GRUB_ERR_TEST_FAILURE,
    GRUB_ERR_BAD_MODULE,
    GRUB_ERR_OUT_OF_MEMORY,
    GRUB_ERR_BAD_FILE_TYPE,
    GRUB_ERR_FILE_NOT_FOUND,
    GRUB_ERR_FILE_READ_ERROR,
    GRUB_ERR_BAD_FILENAME,
    GRUB_ERR_UNKNOWN_FS,
    GRUB_ERR_BAD_FS,
    GRUB_ERR_BAD_NUMBER,
    GRUB_ERR_OUT_OF_RANGE,
    GRUB_ERR_UNKNOWN_DEVICE,
    GRUB_ERR_BAD_DEVICE,
    GRUB_ERR_READ_ERROR,
    GRUB_ERR_WRITE_ERROR,
    GRUB_ERR_UNKNOWN_COMMAND,
    GRUB_ERR_INVALID_COMMAND,
    GRUB_ERR_BAD_ARGUMENT,
    GRUB_ERR_BAD_PART_TABLE,
    GRUB_ERR_UNKNOWN_OS,
    GRUB_ERR_BAD_OS,
    GRUB_ERR_NO_KERNEL,
    GRUB_ERR_BAD_FONT,
    GRUB_ERR_NOT_IMPLEMENTED_YET,
    GRUB_ERR_SYMLINK_LOOP,
    GRUB_ERR_BAD_COMPRESSED_DATA,
    GRUB_ERR_MENU,
    GRUB_ERR_TIMEOUT,
    GRUB_ERR_IO,
    GRUB_ERR_ACCESS_DENIED,
    GRUB_ERR_EXTRACTOR,
    GRUB_ERR_NET_BAD_ADDRESS,
    GRUB_ERR_NET_ROUTE_LOOP,
    GRUB_ERR_NET_NO_ROUTE,
    GRUB_ERR_NET_NO_ANSWER,
    GRUB_ERR_WAIT,
    GRUB_ERR_BUG,
    GRUB_ERR_NET_PORT_CLOSED,
    GRUB_ERR_NET_INVALID_RESPONSE,
    GRUB_ERR_NET_UNKNOWN_ERROR,
    GRUB_ERR_NET_PACKET_TOO_BIG,
    GRUB_ERR_NET_NO_DOMAIN,
    GRUB_ERR_EOF
  }
grub_err_t;

struct grub_error_saved
{
  grub_err_t grub_errno;
  char errmsg[256];
};

extern grub_err_t grub_errno;
extern char grub_errmsg[256];

grub_err_t grub_error (grub_err_t n, const char *fmt, ...);
void grub_fatal (const char *fmt, ...) __attribute__ ((noreturn));
void grub_error_push (void);
int grub_error_pop (void);
void grub_print_error (void);
extern int grub_err_printed_errors;
int grub_err_printf (const char *fmt, ...)
     __attribute__ ((format (printf, 1, 2)));
# 25 "./include/grub/device.h" 2

struct grub_disk;
struct grub_net;

struct grub_device
{
  struct grub_disk *disk;
  struct grub_net *net;
};
typedef struct grub_device *grub_device_t;

grub_device_t grub_device_open (const char *name);
grub_err_t grub_device_close (grub_device_t device);
int grub_device_iterate (int (*hook) (const char *name));
# 24 "./include/grub/fs.h" 2

# 1 "./include/grub/types.h" 1
# 22 "./include/grub/types.h"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 23 "./include/grub/types.h" 2
# 62 "./include/grub/types.h"
typedef signed char grub_int8_t;
typedef short grub_int16_t;
typedef int grub_int32_t;

typedef long grub_int64_t;




typedef unsigned char grub_uint8_t;
typedef unsigned short grub_uint16_t;
typedef unsigned grub_uint32_t;



typedef unsigned long grub_uint64_t;
# 89 "./include/grub/types.h"
typedef grub_uint64_t grub_addr_t;
typedef grub_uint64_t grub_size_t;
typedef grub_int64_t grub_ssize_t;
# 131 "./include/grub/types.h"
typedef grub_uint64_t grub_properly_aligned_t;




typedef grub_uint64_t grub_off_t;


typedef grub_uint64_t grub_disk_addr_t;
# 164 "./include/grub/types.h"
static inline grub_uint32_t grub_swap_bytes32(grub_uint32_t x)
{
 return __builtin_bswap32(x);
}

static inline grub_uint64_t grub_swap_bytes64(grub_uint64_t x)
{
 return __builtin_bswap64(x);
}
# 240 "./include/grub/types.h"
static inline grub_uint16_t grub_get_unaligned16 (const void *ptr)
{
  struct grub_unaligned_uint16_t
  {
    grub_uint16_t d;
  } __attribute__ ((packed));
  const struct grub_unaligned_uint16_t *dd
    = (const struct grub_unaligned_uint16_t *) ptr;
  return dd->d;
}

static inline void grub_set_unaligned16 (void *ptr, grub_uint16_t val)
{
  struct grub_unaligned_uint16_t
  {
    grub_uint16_t d;
  } __attribute__ ((packed));
  struct grub_unaligned_uint16_t *dd = (struct grub_unaligned_uint16_t *) ptr;
  dd->d = val;
}

static inline grub_uint32_t grub_get_unaligned32 (const void *ptr)
{
  struct grub_unaligned_uint32_t
  {
    grub_uint32_t d;
  } __attribute__ ((packed));
  const struct grub_unaligned_uint32_t *dd
    = (const struct grub_unaligned_uint32_t *) ptr;
  return dd->d;
}

static inline void grub_set_unaligned32 (void *ptr, grub_uint32_t val)
{
  struct grub_unaligned_uint32_t
  {
    grub_uint32_t d;
  } __attribute__ ((packed));
  struct grub_unaligned_uint32_t *dd = (struct grub_unaligned_uint32_t *) ptr;
  dd->d = val;
}

static inline grub_uint64_t grub_get_unaligned64 (const void *ptr)
{
  struct grub_unaligned_uint64_t
  {
    grub_uint64_t d;
  } __attribute__ ((packed));
  const struct grub_unaligned_uint64_t *dd
    = (const struct grub_unaligned_uint64_t *)ptr;
  return dd->d;
}

static inline void grub_set_unaligned64 (void *ptr, grub_uint64_t val)
{
  struct grub_unaligned_uint64_t
  {
    grub_uint64_t d;
  } __attribute__ ((packed));
  struct grub_unaligned_uint64_t *dd = (struct grub_unaligned_uint64_t *) ptr;
  dd->d = val;
}
# 26 "./include/grub/fs.h" 2

# 1 "./include/grub/list.h" 1
# 25 "./include/grub/list.h"
# 1 "./include/grub/misc.h" 1
# 23 "./include/grub/misc.h"
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdarg.h" 3 4

# 40 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 99 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 24 "./include/grub/misc.h" 2



# 1 "./include/grub/i18n.h" 1
# 22 "./include/grub/i18n.h"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 23 "./include/grub/i18n.h" 2






# 28 "./include/grub/i18n.h"
extern const char *(*grub_gettext) (const char *s);



# 1 "/usr/include/locale.h" 1 3 4
# 10 "/usr/include/locale.h" 3 4
# 1 "/usr/include/_ansi.h" 1 3 4
# 10 "/usr/include/_ansi.h" 3 4
# 1 "/usr/include/newlib.h" 1 3 4
# 14 "/usr/include/newlib.h" 3 4
# 1 "/usr/include/_newlib_version.h" 1 3 4
# 15 "/usr/include/newlib.h" 2 3 4
# 11 "/usr/include/_ansi.h" 2 3 4
# 1 "/usr/include/sys/config.h" 1 3 4



# 1 "/usr/include/machine/ieeefp.h" 1 3 4
# 5 "/usr/include/sys/config.h" 2 3 4
# 1 "/usr/include/sys/features.h" 1 3 4
# 6 "/usr/include/sys/config.h" 2 3 4
# 234 "/usr/include/sys/config.h" 3 4
# 1 "/usr/include/cygwin/config.h" 1 3 4
# 235 "/usr/include/sys/config.h" 2 3 4
# 12 "/usr/include/_ansi.h" 2 3 4
# 11 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 43 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/machine/_default_types.h" 1 3 4
# 41 "/usr/include/machine/_default_types.h" 3 4

# 41 "/usr/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/usr/include/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/usr/include/machine/_default_types.h" 3 4
typedef int __int32_t;

typedef unsigned int __uint32_t;
# 103 "/usr/include/machine/_default_types.h" 3 4
typedef long int __int64_t;

typedef long unsigned int __uint64_t;
# 134 "/usr/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/usr/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/usr/include/machine/_default_types.h" 3 4
typedef int __int_least32_t;

typedef unsigned int __uint_least32_t;
# 200 "/usr/include/machine/_default_types.h" 3 4
typedef long int __int_least64_t;

typedef long unsigned int __uint_least64_t;
# 214 "/usr/include/machine/_default_types.h" 3 4
typedef long int __intmax_t;







typedef long unsigned int __uintmax_t;







typedef long int __intptr_t;

typedef long unsigned int __uintptr_t;
# 44 "/usr/include/sys/cdefs.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 216 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 328 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef short unsigned int wchar_t;
# 426 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 46 "/usr/include/sys/cdefs.h" 2 3 4
# 12 "/usr/include/locale.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 15 "/usr/include/locale.h" 2 3 4
# 26 "/usr/include/locale.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 9 "/usr/include/xlocale.h" 3 4
struct __locale_t;
typedef struct __locale_t *locale_t;
# 27 "/usr/include/locale.h" 2 3 4
# 40 "/usr/include/locale.h" 3 4


struct lconv
{
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_n_cs_precedes;
  char int_n_sep_by_space;
  char int_n_sign_posn;
  char int_p_cs_precedes;
  char int_p_sep_by_space;
  char int_p_sign_posn;
};

struct _reent;
char *_setlocale_r (struct _reent *, int, const char *);
struct lconv *_localeconv_r (struct _reent *);

struct __locale_t *_newlocale_r (struct _reent *, int, const char *,
     struct __locale_t *);
void _freelocale_r (struct _reent *, struct __locale_t *);
struct __locale_t *_duplocale_r (struct _reent *, struct __locale_t *);
struct __locale_t *_uselocale_r (struct _reent *, struct __locale_t *);



char *setlocale (int, const char *);
struct lconv *localeconv (void);


locale_t newlocale (int, const char *, locale_t);
void freelocale (locale_t);
locale_t duplocale (locale_t);
locale_t uselocale (locale_t);





# 33 "./include/grub/i18n.h" 2
# 1 "/usr/include/libintl.h" 1 3 4
# 58 "/usr/include/libintl.h" 3 4
extern int libintl_version;
# 134 "/usr/include/libintl.h" 3 4
extern char *gettext (const char *__msgid)
       __asm__ ("" "libintl_gettext")
       __attribute__ ((__format_arg__ (1)));
# 152 "/usr/include/libintl.h" 3 4
extern char *dgettext (const char *__domainname, const char *__msgid)
       __asm__ ("" "libintl_dgettext")
       __attribute__ ((__format_arg__ (2)));
# 172 "/usr/include/libintl.h" 3 4
extern char *dcgettext (const char *__domainname, const char *__msgid,
                        int __category)
       __asm__ ("" "libintl_dcgettext")
       __attribute__ ((__format_arg__ (2)));
# 194 "/usr/include/libintl.h" 3 4
extern char *ngettext (const char *__msgid1, const char *__msgid2,
                       unsigned long int __n)
       __asm__ ("" "libintl_ngettext")
       __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));
# 215 "/usr/include/libintl.h" 3 4
extern char *dngettext (const char *__domainname,
                        const char *__msgid1, const char *__msgid2,
                        unsigned long int __n)
       __asm__ ("" "libintl_dngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
# 239 "/usr/include/libintl.h" 3 4
extern char *dcngettext (const char *__domainname,
                         const char *__msgid1, const char *__msgid2,
                         unsigned long int __n, int __category)
       __asm__ ("" "libintl_dcngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
# 261 "/usr/include/libintl.h" 3 4
extern char *textdomain (const char *__domainname)
       __asm__ ("" "libintl_textdomain");
# 279 "/usr/include/libintl.h" 3 4
extern char *bindtextdomain (const char *__domainname, const char *__dirname)
       __asm__ ("" "libintl_bindtextdomain");
# 297 "/usr/include/libintl.h" 3 4
extern char *bind_textdomain_codeset (const char *__domainname,
                                      const char *__codeset)
       __asm__ ("" "libintl_bind_textdomain_codeset");
# 433 "/usr/include/libintl.h" 3 4
extern char *libintl_setlocale (int, const char *);






extern locale_t libintl_newlocale (int, const char *, locale_t);
# 455 "/usr/include/libintl.h" 3 4
extern void
       libintl_set_relocation_prefix (const char *orig_prefix,
                                      const char *curr_prefix);
# 34 "./include/grub/i18n.h" 2
# 53 "./include/grub/i18n.h"

# 53 "./include/grub/i18n.h"
static inline const char * __attribute__ ((always_inline))
_ (const char *str)
{
  return gettext(str);
}
# 28 "./include/grub/misc.h" 2
# 55 "./include/grub/misc.h"
void *grub_memmove (void *dest, const void *src, grub_size_t n);
char *grub_strcpy (char *dest, const char *src);
char *grub_strncpy (char *dest, const char *src, int c);
static inline char *
grub_stpcpy (char *dest, const char *src)
{
  char *d = dest;
  const char *s = src;

  do
    *d++ = *s;
  while (*s++ != '\0');

  return d - 1;
}


static inline void *
grub_memcpy (void *dest, const void *src, grub_size_t n)
{
  return grub_memmove (dest, src, n);
}

static inline char *
grub_strcat (char *dest, const char *src)
{
  char *p = dest;

  while (*p)
    p++;

  while ((*p = *src) != '\0')
    {
      p++;
      src++;
    }

  return dest;
}

static inline char *
grub_strncat (char *dest, const char *src, int c)
{
  char *p = dest;

  while (*p)
    p++;

  while (c-- && (*p = *src) != '\0')
    {
      p++;
      src++;
    }

  *p = '\0';

  return dest;
}
# 129 "./include/grub/misc.h"
int grub_memcmp (const void *s1, const void *s2, grub_size_t n);
int grub_strcmp (const char *s1, const char *s2);
int grub_strncmp (const char *s1, const char *s2, grub_size_t n);

char *grub_strchr (const char *s, int c);
char *grub_strrchr (const char *s, int c);
int grub_strword (const char *s, const char *w);



static inline char *
grub_strstr (const char *haystack, const char *needle)
{





  if (*needle != '\0')
    {


      char b = *needle++;

      for (;; haystack++)
 {
   if (*haystack == '\0')

     return 0;
   if (*haystack == b)

     {
       const char *rhaystack = haystack + 1;
       const char *rneedle = needle;

       for (;; rhaystack++, rneedle++)
  {
    if (*rneedle == '\0')

      return (char *) haystack;
    if (*rhaystack == '\0')

      return 0;
    if (*rhaystack != *rneedle)

      break;
  }
     }
 }
    }
  else
    return (char *) haystack;
}

int grub_isspace (int c);
int grub_isprint (int c);

static inline int
grub_iscntrl (int c)
{
  return (c >= 0x00 && c <= 0x1F) || c == 0x7F;
}

static inline int
grub_isalpha (int c)
{
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

static inline int
grub_islower (int c)
{
  return (c >= 'a' && c <= 'z');
}

static inline int
grub_isupper (int c)
{
  return (c >= 'A' && c <= 'Z');
}

static inline int
grub_isgraph (int c)
{
  return (c >= '!' && c <= '~');
}

static inline int
grub_isdigit (int c)
{
  return (c >= '0' && c <= '9');
}

static inline int
grub_isxdigit (int c)
{
  return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

static inline int
grub_isalnum (int c)
{
  return grub_isalpha (c) || grub_isdigit (c);
}

static inline int
grub_tolower (int c)
{
  if (c >= 'A' && c <= 'Z')
    return c - 'A' + 'a';

  return c;
}

static inline int
grub_toupper (int c)
{
  if (c >= 'a' && c <= 'z')
    return c - 'a' + 'A';

  return c;
}

static inline int
grub_strcasecmp (const char *s1, const char *s2)
{
  while (*s1 && *s2)
    {
      if (grub_tolower ((grub_uint8_t) *s1)
   != grub_tolower ((grub_uint8_t) *s2))
 break;

      s1++;
      s2++;
    }

  return (int) grub_tolower ((grub_uint8_t) *s1)
    - (int) grub_tolower ((grub_uint8_t) *s2);
}

static inline int
grub_strncasecmp (const char *s1, const char *s2, grub_size_t n)
{
  if (n == 0)
    return 0;

  while (*s1 && *s2 && --n)
    {
      if (grub_tolower (*s1) != grub_tolower (*s2))
 break;

      s1++;
      s2++;
    }

  return (int) grub_tolower ((grub_uint8_t) *s1)
    - (int) grub_tolower ((grub_uint8_t) *s2);
}

unsigned long grub_strtoul (const char *str, char **end, int base);
unsigned long long grub_strtoull (const char *str, char **end, int base);

static inline long
grub_strtol (const char *str, char **end, int base)
{
  int negative = 0;
  unsigned long magnitude;

  while (*str && grub_isspace (*str))
    str++;

  if (*str == '-')
    {
      negative = 1;
      str++;
    }

  magnitude = grub_strtoull (str, end, base);
  if (negative)
    {
      if (magnitude > (unsigned long) 9223372036854775807L + 1)
        {
          grub_error (GRUB_ERR_OUT_OF_RANGE, "overflow is detected");
          return (-9223372036854775807L - 1);
        }
      return -((long) magnitude);
    }
  else
    {
      if (magnitude > 9223372036854775807L)
        {
          grub_error (GRUB_ERR_OUT_OF_RANGE, "overflow is detected");
          return 9223372036854775807L;
        }
      return (long) magnitude;
    }
}

char *grub_strdup (const char *s) __attribute__ ((warn_unused_result));
char *grub_strndup (const char *s, grub_size_t n) __attribute__ ((warn_unused_result));
void *grub_memset (void *s, int c, grub_size_t n);
grub_size_t grub_strlen (const char *s) __attribute__ ((warn_unused_result));
int grub_printf (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
int grub_printf_ (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));



static inline char *
grub_strchrsub (char *output, const char *input, char ch, const char *with)
{
  while (*input)
    {
      if (*input == ch)
 {
   grub_strcpy (output, with);
   output += grub_strlen (with);
   input++;
   continue;
 }
      *output++ = *input++;
    }
  *output = '\0';
  return output;
}

extern void (*grub_xputs) (const char *str);

static inline int
grub_puts (const char *s)
{
  const char nl[2] = "\n";
  grub_xputs (s);
  grub_xputs (nl);

  return 1;
}

int grub_puts_ (const char *s);
void grub_real_dprintf (const char *file,
                                     const int line,
                                     const char *condition,
                                     const char *fmt, ...) __attribute__ ((format (printf, 4, 5)));
int grub_vprintf (const char *fmt, va_list args);
int grub_snprintf (char *str, grub_size_t n, const char *fmt, ...)
     __attribute__ ((format (printf, 3, 4)));
int grub_vsnprintf (char *str, grub_size_t n, const char *fmt,
     va_list args);
char *grub_xasprintf (const char *fmt, ...)
     __attribute__ ((format (printf, 1, 2))) __attribute__ ((warn_unused_result));
char *grub_xvasprintf (const char *fmt, va_list args) __attribute__ ((warn_unused_result));
void grub_exit (void) __attribute__ ((noreturn));
void grub_abort (void) __attribute__ ((noreturn));
grub_uint64_t grub_divmod64 (grub_uint64_t n,
       grub_uint64_t d,
       grub_uint64_t *r);
# 396 "./include/grub/misc.h"
static inline char *
grub_memchr (const void *p, int c, grub_size_t len)
{
  const char *s = p;
  const char *e = s + len;

  for (; s < e; s++)
    if (*s == c)
      return (char *) s;

  return 0;
}


static inline unsigned int
grub_abs (int x)
{
  if (x < 0)
    return (unsigned int) (-x);
  else
    return (unsigned int) x;
}


static inline unsigned int
grub_div_roundup (unsigned int x, unsigned int y)
{
  return (x + y - 1) / y;
}





void grub_reboot (void) __attribute__ ((noreturn));
# 440 "./include/grub/misc.h"
void grub_halt (void) __attribute__ ((noreturn));
# 450 "./include/grub/misc.h"
static inline void
grub_error_save (struct grub_error_saved *save)
{
  grub_memcpy (save->errmsg, grub_errmsg, sizeof (save->errmsg));
  save->grub_errno = grub_errno;
  grub_errno = GRUB_ERR_NONE;
}

static inline void
grub_error_load (const struct grub_error_saved *save)
{
  grub_memcpy (grub_errmsg, save->errmsg, sizeof (grub_errmsg));
  grub_errno = save->grub_errno;
}
# 26 "./include/grub/list.h" 2

struct grub_list
{
  struct grub_list *next;
  struct grub_list **prev;
};
typedef struct grub_list *grub_list_t;

void grub_list_push (grub_list_t *head, grub_list_t item);
void grub_list_remove (grub_list_t item);



static inline void *
grub_bad_type_cast_real (int line, const char *file)
     __attribute__ ((__error__ ("bad type cast between incompatible grub types")));

static inline void *
grub_bad_type_cast_real (int line, const char *file)
{
  grub_fatal ("error:%s:%u: bad type cast between incompatible grub types",
       file, line);
}
# 63 "./include/grub/list.h"
struct grub_named_list
{
  struct grub_named_list *next;
  struct grub_named_list **prev;
  char *name;
};
typedef struct grub_named_list *grub_named_list_t;

void * grub_named_list_find (grub_named_list_t head,
       const char *name);
# 28 "./include/grub/fs.h" 2


# 1 "./include/grub/partition.h" 1
# 22 "./include/grub/partition.h"
# 1 "./include/grub/dl.h" 1
# 27 "./include/grub/dl.h"
# 1 "./include/grub/elf.h" 1
# 28 "./include/grub/elf.h"
typedef grub_uint16_t Elf32_Half;
typedef grub_uint16_t Elf64_Half;


typedef grub_uint32_t Elf32_Word;
typedef grub_int32_t Elf32_Sword;
typedef grub_uint32_t Elf64_Word;
typedef grub_int32_t Elf64_Sword;


typedef grub_uint64_t Elf32_Xword;
typedef grub_int64_t Elf32_Sxword;
typedef grub_uint64_t Elf64_Xword;
typedef grub_int64_t Elf64_Sxword;


typedef grub_uint32_t Elf32_Addr;
typedef grub_uint64_t Elf64_Addr;


typedef grub_uint32_t Elf32_Off;
typedef grub_uint64_t Elf64_Off;


typedef grub_uint16_t Elf32_Section;
typedef grub_uint16_t Elf64_Section;


typedef Elf32_Half Elf32_Versym;
typedef Elf64_Half Elf64_Versym;






typedef struct
{
  unsigned char e_ident[(16)];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct
{
  unsigned char e_ident[(16)];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;
# 263 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct
{
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 362 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Section st_shndx;
} Elf32_Sym;

typedef struct
{
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Section st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct
{
  Elf32_Half si_boundto;
  Elf32_Half si_flags;
} Elf32_Syminfo;

typedef struct
{
  Elf64_Half si_boundto;
  Elf64_Half si_flags;
} Elf64_Syminfo;
# 476 "./include/grub/elf.h"
typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;






typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;



typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;
# 521 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct
{
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 600 "./include/grub/elf.h"
typedef struct
{
  Elf32_Sword d_tag;
  union
    {
      Elf32_Word d_val;
      Elf32_Addr d_ptr;
    } d_un;
} Elf32_Dyn;

typedef struct
{
  Elf64_Sxword d_tag;
  union
    {
      Elf64_Xword d_val;
      Elf64_Addr d_ptr;
    } d_un;
} Elf64_Dyn;
# 764 "./include/grub/elf.h"
typedef struct
{
  Elf32_Half vd_version;
  Elf32_Half vd_flags;
  Elf32_Half vd_ndx;
  Elf32_Half vd_cnt;
  Elf32_Word vd_hash;
  Elf32_Word vd_aux;
  Elf32_Word vd_next;

} Elf32_Verdef;

typedef struct
{
  Elf64_Half vd_version;
  Elf64_Half vd_flags;
  Elf64_Half vd_ndx;
  Elf64_Half vd_cnt;
  Elf64_Word vd_hash;
  Elf64_Word vd_aux;
  Elf64_Word vd_next;

} Elf64_Verdef;
# 806 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word vda_name;
  Elf32_Word vda_next;

} Elf32_Verdaux;

typedef struct
{
  Elf64_Word vda_name;
  Elf64_Word vda_next;

} Elf64_Verdaux;




typedef struct
{
  Elf32_Half vn_version;
  Elf32_Half vn_cnt;
  Elf32_Word vn_file;

  Elf32_Word vn_aux;
  Elf32_Word vn_next;

} Elf32_Verneed;

typedef struct
{
  Elf64_Half vn_version;
  Elf64_Half vn_cnt;
  Elf64_Word vn_file;

  Elf64_Word vn_aux;
  Elf64_Word vn_next;

} Elf64_Verneed;
# 853 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word vna_hash;
  Elf32_Half vna_flags;
  Elf32_Half vna_other;
  Elf32_Word vna_name;
  Elf32_Word vna_next;

} Elf32_Vernaux;

typedef struct
{
  Elf64_Word vna_hash;
  Elf64_Half vna_flags;
  Elf64_Half vna_other;
  Elf64_Word vna_name;
  Elf64_Word vna_next;

} Elf64_Vernaux;
# 887 "./include/grub/elf.h"
typedef struct
{
  int a_type;
  union
    {
      long int a_val;
      void *a_ptr;
      void (*a_fcn) (void);
    } a_un;
} Elf32_auxv_t;

typedef struct
{
  long int a_type;
  union
    {
      long int a_val;
      void *a_ptr;
      void (*a_fcn) (void);
    } a_un;
} Elf64_auxv_t;
# 950 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;

typedef struct
{
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
# 997 "./include/grub/elf.h"
typedef struct
{
  Elf32_Xword m_value;
  Elf32_Word m_info;
  Elf32_Word m_poffset;
  Elf32_Half m_repeat;
  Elf32_Half m_stride;
} Elf32_Move;

typedef struct
{
  Elf64_Xword m_value;
  Elf64_Xword m_info;
  Elf64_Xword m_poffset;
  Elf64_Half m_repeat;
  Elf64_Half m_stride;
} Elf64_Move;
# 1361 "./include/grub/elf.h"
typedef union
{
  struct
    {
      Elf32_Word gt_current_g_value;
      Elf32_Word gt_unused;
    } gt_header;
  struct
    {
      Elf32_Word gt_g_value;
      Elf32_Word gt_bytes;
    } gt_entry;
} Elf32_gptab;



typedef struct
{
  Elf32_Word ri_gprmask;
  Elf32_Word ri_cprmask[4];
  Elf32_Sword ri_gp_value;
} Elf32_RegInfo;



typedef struct
{
  unsigned char kind;

  unsigned char size;
  Elf32_Section section;

  Elf32_Word info;
} Elf_Options;
# 1437 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word hwp_flags1;
  Elf32_Word hwp_flags2;
} Elf_Options_Hw;
# 1576 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word l_name;
  Elf32_Word l_time_stamp;
  Elf32_Word l_checksum;
  Elf32_Word l_version;
  Elf32_Word l_flags;
} Elf32_Lib;

typedef struct
{
  Elf64_Word l_name;
  Elf64_Word l_time_stamp;
  Elf64_Word l_checksum;
  Elf64_Word l_version;
  Elf64_Word l_flags;
} Elf64_Lib;
# 1607 "./include/grub/elf.h"
typedef Elf32_Addr Elf32_Conflict;
# 28 "./include/grub/dl.h" 2
# 142 "./include/grub/dl.h"
struct grub_dl_segment
{
  struct grub_dl_segment *next;
  void *addr;
  grub_size_t size;
  unsigned section;
};
typedef struct grub_dl_segment *grub_dl_segment_t;

struct grub_dl;

struct grub_dl_dep
{
  struct grub_dl_dep *next;
  struct grub_dl *mod;
};
typedef struct grub_dl_dep *grub_dl_dep_t;
# 179 "./include/grub/dl.h"
typedef struct grub_dl *grub_dl_t;

grub_dl_t grub_dl_load_file (const char *filename);
grub_dl_t grub_dl_load (const char *name);
grub_dl_t grub_dl_load_core (void *addr, grub_size_t size);
int grub_dl_unload (grub_dl_t mod);
void grub_dl_unload_unneeded (void);
int grub_dl_ref (grub_dl_t mod);
int grub_dl_unref (grub_dl_t mod);
extern grub_dl_t grub_dl_head;



grub_dl_t grub_dl_get (const char *name);
grub_err_t grub_dl_register_symbol (const char *name, void *addr,
        int isfunc, grub_dl_t mod);

grub_err_t grub_arch_dl_check_header (void *ehdr);
grub_err_t grub_arch_dl_relocate_symbols (grub_dl_t mod, void *ehdr);
# 208 "./include/grub/dl.h"
void
grub_ia64_dl_get_tramp_got_size (const void *ehdr, grub_size_t *tramp,
     grub_size_t *got);







void
grub_arch_dl_get_tramp_got_size (const void *ehdr, grub_size_t *tramp,
     grub_size_t *got);
# 23 "./include/grub/partition.h" 2


struct grub_disk;

typedef struct grub_partition *grub_partition_t;


typedef enum
{
  GRUB_EMBED_PCBIOS
} grub_embed_type_t;



struct grub_partition_map
{

  struct grub_partition_map *next;
  struct grub_partition_map **prev;


  const char *name;


  grub_err_t (*iterate) (struct grub_disk *disk,
    int (*hook) (struct grub_disk *disk,
          const grub_partition_t partition));


  grub_err_t (*embed) (struct grub_disk *disk, unsigned int *nsectors,
         unsigned int max_nsectors,
         grub_embed_type_t embed_type,
         grub_disk_addr_t **sectors);

};
typedef struct grub_partition_map *grub_partition_map_t;


struct grub_partition
{

  int number;


  grub_disk_addr_t start;


  grub_uint64_t len;


  grub_disk_addr_t offset;


  int index;


  struct grub_partition *parent;


  grub_partition_map_t partmap;



  grub_uint8_t msdostype;
};

grub_partition_t grub_partition_probe (struct grub_disk *disk,
          const char *str);
int grub_partition_iterate (struct grub_disk *disk,
      int (*hook) (struct grub_disk *disk,
            const grub_partition_t partition));
char *grub_partition_get_name (const grub_partition_t partition);


extern grub_partition_map_t grub_partition_map_list;


static inline void
grub_partition_map_register (grub_partition_map_t partmap)
{
  grub_list_push ((((char *) &(*&grub_partition_map_list)->next == (char *) &((grub_list_t) (*&grub_partition_map_list))->next) && ((char *) &(*&grub_partition_map_list)->prev == (char *) &((grub_list_t) (*&grub_partition_map_list))->prev) ? (grub_list_t *) (void *) &grub_partition_map_list : (grub_list_t *) grub_bad_type_cast_real(103, "util/grub-fstest.c")),
    (((char *) &(partmap)->next == (char *) &((grub_list_t) (partmap))->next) && ((char *) &(partmap)->prev == (char *) &((grub_list_t) (partmap))->prev) ? (grub_list_t) partmap : (grub_list_t) grub_bad_type_cast_real(104, "util/grub-fstest.c")));
}


static inline void
grub_partition_map_unregister (grub_partition_map_t partmap)
{
  grub_list_remove ((((char *) &(partmap)->next == (char *) &((grub_list_t) (partmap))->next) && ((char *) &(partmap)->prev == (char *) &((grub_list_t) (partmap))->prev) ? (grub_list_t) partmap : (grub_list_t) grub_bad_type_cast_real(111, "util/grub-fstest.c")));
}




static inline grub_disk_addr_t
grub_partition_get_start (const grub_partition_t p)
{
  grub_partition_t part;
  grub_uint64_t part_start = 0;

  for (part = p; part; part = part->parent)
    part_start += part->start;

  return part_start;
}

static inline grub_uint64_t
grub_partition_get_len (const grub_partition_t p)
{
  return p->len;
}
# 31 "./include/grub/fs.h" 2



struct grub_file;

struct grub_dirhook_info
{
  unsigned dir:1;
  unsigned mtimeset:1;
  unsigned case_insensitive:1;
  grub_int32_t mtime;
};


struct grub_fs
{

  struct grub_fs *next;
  struct grub_fs **prev;


  const char *name;


  grub_err_t (*dir) (grub_device_t device, const char *path,
       int (*hook) (const char *filename,
      const struct grub_dirhook_info *info));


  grub_err_t (*open) (struct grub_file *file, const char *name);


  grub_ssize_t (*read) (struct grub_file *file, char *buf, grub_size_t len);


  grub_err_t (*close) (struct grub_file *file);




  grub_err_t (*label) (grub_device_t device, char **label);




  grub_err_t (*uuid) (grub_device_t device, char **uuid);


  grub_err_t (*mtime) (grub_device_t device, grub_int32_t *timebuf);



  grub_err_t (*embed) (grub_device_t device, unsigned int *nsectors,
         unsigned int max_nsectors,
         grub_embed_type_t embed_type,
         grub_disk_addr_t **sectors);


  int reserved_first_sector;


  int blocklist_install;

};
typedef struct grub_fs *grub_fs_t;


extern struct grub_fs grub_fs_blocklist;





typedef int (*grub_fs_autoload_hook_t) (void);
extern grub_fs_autoload_hook_t grub_fs_autoload_hook;
extern grub_fs_t grub_fs_list;


static inline void
grub_fs_register (grub_fs_t fs)
{
  grub_list_push ((((char *) &(*&grub_fs_list)->next == (char *) &((grub_list_t) (*&grub_fs_list))->next) && ((char *) &(*&grub_fs_list)->prev == (char *) &((grub_list_t) (*&grub_fs_list))->prev) ? (grub_list_t *) (void *) &grub_fs_list : (grub_list_t *) grub_bad_type_cast_real(112, "util/grub-fstest.c")), (((char *) &(fs)->next == (char *) &((grub_list_t) (fs))->next) && ((char *) &(fs)->prev == (char *) &((grub_list_t) (fs))->prev) ? (grub_list_t) fs : (grub_list_t) grub_bad_type_cast_real(112, "util/grub-fstest.c")));
}


static inline void
grub_fs_unregister (grub_fs_t fs)
{
  grub_list_remove ((((char *) &(fs)->next == (char *) &((grub_list_t) (fs))->next) && ((char *) &(fs)->prev == (char *) &((grub_list_t) (fs))->prev) ? (grub_list_t) fs : (grub_list_t) grub_bad_type_cast_real(119, "util/grub-fstest.c")));
}



grub_fs_t grub_fs_probe (grub_device_t device);
# 21 "grub-core/kern/emu/hostfs.c" 2
# 1 "./include/grub/file.h" 1
# 28 "./include/grub/file.h"
struct grub_file
{

  grub_device_t device;


  grub_fs_t fs;


  grub_off_t offset;


  grub_off_t size;


  int not_easily_seekable;


  void *data;


  void (*read_hook) (grub_disk_addr_t sector,
       unsigned offset, unsigned length);
};
typedef struct grub_file *grub_file_t;


typedef enum grub_file_filter_id
  {
    GRUB_FILE_FILTER_GZIO,
    GRUB_FILE_FILTER_XZIO,
    GRUB_FILE_FILTER_LZOPIO,
    GRUB_FILE_FILTER_MAX,
    GRUB_FILE_FILTER_COMPRESSION_FIRST = GRUB_FILE_FILTER_GZIO,
    GRUB_FILE_FILTER_COMPRESSION_LAST = GRUB_FILE_FILTER_LZOPIO,
  } grub_file_filter_id_t;

typedef grub_file_t (*grub_file_filter_t) (grub_file_t in);

extern grub_file_filter_t grub_file_filters_all[GRUB_FILE_FILTER_MAX];
extern grub_file_filter_t grub_file_filters_enabled[GRUB_FILE_FILTER_MAX];

static inline void
grub_file_filter_register (grub_file_filter_id_t id, grub_file_filter_t filter)
{
  grub_file_filters_all[id] = filter;
  grub_file_filters_enabled[id] = filter;
};

static inline void
grub_file_filter_unregister (grub_file_filter_id_t id)
{
  grub_file_filters_all[id] = 0;
  grub_file_filters_enabled[id] = 0;
};

static inline void
grub_file_filter_disable (grub_file_filter_id_t id)
{
  grub_file_filters_enabled[id] = 0;
};

static inline void
grub_file_filter_disable_compression (void)
{
  grub_file_filter_id_t id;

  for (id = GRUB_FILE_FILTER_COMPRESSION_FIRST;
       id <= GRUB_FILE_FILTER_COMPRESSION_LAST; id++)
    grub_file_filters_enabled[id] = 0;
};


char *grub_file_get_device_name (const char *name);

grub_file_t grub_file_open (const char *name);
grub_ssize_t grub_file_read (grub_file_t file, void *buf,
       grub_size_t len);
grub_off_t grub_file_seek (grub_file_t file, grub_off_t offset);
grub_err_t grub_file_close (grub_file_t file);




static inline grub_off_t
grub_file_size (const grub_file_t file)
{
  return file->size;
}

static inline grub_off_t
grub_file_tell (const grub_file_t file)
{
  return file->offset;
}

static inline int
grub_file_seekable (const grub_file_t file)
{
  return !file->not_easily_seekable;
}
# 22 "grub-core/kern/emu/hostfs.c" 2
# 1 "./include/grub/disk.h" 1
# 29 "./include/grub/disk.h"
enum grub_disk_dev_id
  {
    GRUB_DISK_DEVICE_BIOSDISK_ID,
    GRUB_DISK_DEVICE_OFDISK_ID,
    GRUB_DISK_DEVICE_LOOPBACK_ID,
    GRUB_DISK_DEVICE_EFIDISK_ID,
    GRUB_DISK_DEVICE_DISKFILTER_ID,
    GRUB_DISK_DEVICE_HOST_ID,
    GRUB_DISK_DEVICE_ATA_ID,
    GRUB_DISK_DEVICE_MEMDISK_ID,
    GRUB_DISK_DEVICE_NAND_ID,
    GRUB_DISK_DEVICE_SCSI_ID,
    GRUB_DISK_DEVICE_CRYPTODISK_ID,
    GRUB_DISK_DEVICE_ARCDISK_ID,
    GRUB_DISK_DEVICE_HOSTDISK_ID,
  };

struct grub_disk;

struct grub_disk_memberlist;


typedef enum
  {
    GRUB_DISK_PULL_NONE,
    GRUB_DISK_PULL_REMOVABLE,
    GRUB_DISK_PULL_RESCAN,
    GRUB_DISK_PULL_MAX
  } grub_disk_pull_t;


struct grub_disk_dev
{

  const char *name;


  enum grub_disk_dev_id id;


  int (*iterate) (int (*hook) (const char *name),
    grub_disk_pull_t pull);


  grub_err_t (*open) (const char *name, struct grub_disk *disk);


  void (*close) (struct grub_disk *disk);


  grub_err_t (*read) (struct grub_disk *disk, grub_disk_addr_t sector,
        grub_size_t size, char *buf);


  grub_err_t (*write) (struct grub_disk *disk, grub_disk_addr_t sector,
         grub_size_t size, const char *buf);


  struct grub_disk_memberlist *(*memberlist) (struct grub_disk *disk);
  const char * (*raidname) (struct grub_disk *disk);



  struct grub_disk_dev *next;
};
typedef struct grub_disk_dev *grub_disk_dev_t;

extern grub_disk_dev_t grub_disk_dev_list;

struct grub_partition;


struct grub_disk
{

  const char *name;


  grub_disk_dev_t dev;


  grub_uint64_t total_sectors;


  unsigned int log_sector_size;


  unsigned long id;


  struct grub_partition *partition;



  void (*read_hook) (grub_disk_addr_t sector,
       unsigned offset, unsigned length);


  void *data;
};
typedef struct grub_disk *grub_disk_t;


struct grub_disk_memberlist
{
  grub_disk_t disk;
  struct grub_disk_memberlist *next;
};
typedef struct grub_disk_memberlist *grub_disk_memberlist_t;
# 156 "./include/grub/disk.h"
void grub_disk_cache_invalidate_all (void);

void grub_disk_dev_register (grub_disk_dev_t dev);
void grub_disk_dev_unregister (grub_disk_dev_t dev);
static inline int
grub_disk_dev_iterate (int (*hook) (const char *name))
{
  grub_disk_dev_t p;
  grub_disk_pull_t pull;

  for (pull = 0; pull < GRUB_DISK_PULL_MAX; pull++)
    for (p = grub_disk_dev_list; p; p = p->next)
      if (p->iterate && (p->iterate) (hook, pull))
 return 1;

  return 0;
}

grub_disk_t grub_disk_open (const char *name);
void grub_disk_close (grub_disk_t disk);
grub_err_t grub_disk_read (grub_disk_t disk,
     grub_disk_addr_t sector,
     grub_off_t offset,
     grub_size_t size,
     void *buf);
grub_err_t grub_disk_write (grub_disk_t disk,
      grub_disk_addr_t sector,
      grub_off_t offset,
      grub_size_t size,
      const void *buf);

grub_uint64_t grub_disk_get_size (grub_disk_t disk);






extern void (* grub_disk_firmware_fini) (void);
extern int grub_disk_firmware_is_tainted;


void grub_lvm_init (void);
void grub_ldm_init (void);
void grub_mdraid09_init (void);
void grub_mdraid1x_init (void);
void grub_diskfilter_init (void);
void grub_lvm_fini (void);
void grub_ldm_fini (void);
void grub_mdraid09_fini (void);
void grub_mdraid1x_fini (void);
void grub_diskfilter_fini (void);
# 23 "grub-core/kern/emu/hostfs.c" 2

# 1 "./include/grub/mm.h" 1
# 25 "./include/grub/mm.h"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 26 "./include/grub/mm.h" 2





void grub_mm_init_region (void *addr, grub_size_t size);
void *grub_malloc (grub_size_t size);
void *grub_zalloc (grub_size_t size);
void grub_free (void *ptr);
void *grub_realloc (void *ptr, grub_size_t size);
void *grub_memalign (grub_size_t align, grub_size_t size);

void grub_mm_check_real (char *file, int line);
# 77 "./include/grub/mm.h"
static inline grub_err_t
grub_extend_alloc (grub_size_t sz, grub_size_t *allocated, void **ptr)
{
  void *n;
  if (sz < *allocated)
    return GRUB_ERR_NONE;

  *allocated = 2 * sz;
  n = grub_realloc (*ptr, *allocated);
  if (!n)
    return grub_errno;
  *ptr = n;
  return GRUB_ERR_NONE;
}
# 25 "grub-core/kern/emu/hostfs.c" 2

# 1 "./include/grub/util/misc.h" 1
# 22 "./include/grub/util/misc.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 10 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/machine/ieeefp.h" 1 3 4
# 11 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 17 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/reent.h" 1 3 4
# 13 "/usr/include/sys/reent.h" 3 4
# 1 "/usr/include/_ansi.h" 1 3 4
# 14 "/usr/include/sys/reent.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 15 "/usr/include/sys/reent.h" 2 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 24 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 17 "/usr/include/machine/_types.h" 3 4

# 17 "/usr/include/machine/_types.h" 3 4
typedef __int64_t __blkcnt_t;


typedef __int32_t __blksize_t;


typedef __uint32_t __dev_t;



typedef unsigned long __fsblkcnt_t;



typedef unsigned long __fsfilcnt_t;


typedef __uint32_t __uid_t;


typedef __uint32_t __gid_t;


typedef __uint64_t __ino_t;


typedef long long __key_t;


typedef __uint16_t __sa_family_t;



typedef int __socklen_t;
# 25 "/usr/include/sys/_types.h" 2 3 4
# 1 "/usr/include/sys/lock.h" 1 3 4
# 12 "/usr/include/sys/lock.h" 3 4
typedef void *_LOCK_T;
# 42 "/usr/include/sys/lock.h" 3 4
void __cygwin_lock_init(_LOCK_T *);
void __cygwin_lock_init_recursive(_LOCK_T *);
void __cygwin_lock_fini(_LOCK_T *);
void __cygwin_lock_lock(_LOCK_T *);
int __cygwin_lock_trylock(_LOCK_T *);
void __cygwin_lock_unlock(_LOCK_T *);
# 26 "/usr/include/sys/_types.h" 2 3 4
# 44 "/usr/include/sys/_types.h" 3 4
typedef long _off_t;





typedef int __pid_t;
# 65 "/usr/include/sys/_types.h" 3 4
typedef __uint32_t __id_t;
# 88 "/usr/include/sys/_types.h" 3 4
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;
# 114 "/usr/include/sys/_types.h" 3 4
typedef long _fpos_t;





typedef _off64_t _fpos64_t;
# 129 "/usr/include/sys/_types.h" 3 4
typedef long unsigned int __size_t;
# 145 "/usr/include/sys/_types.h" 3 4
typedef long signed int _ssize_t;
# 156 "/usr/include/sys/_types.h" 3 4
typedef _ssize_t __ssize_t;


# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 357 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 160 "/usr/include/sys/_types.h" 2 3 4



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_T _flock_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef long __time_t;


typedef unsigned long __clockid_t;


typedef unsigned long __timer_t;
# 210 "/usr/include/sys/_types.h" 3 4
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;


typedef __builtin_va_list __va_list;
# 16 "/usr/include/sys/reent.h" 2 3 4
# 25 "/usr/include/sys/reent.h" 3 4
typedef unsigned int __ULong;
# 38 "/usr/include/sys/reent.h" 3 4
struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 93 "/usr/include/sys/reent.h" 3 4
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 117 "/usr/include/sys/reent.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 181 "/usr/include/sys/reent.h" 3 4
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  _ssize_t (*_read) (struct _reent *, void *,
        char *, size_t);
  _ssize_t (*_write) (struct _reent *, void *,
         const char *,
         size_t);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 239 "/usr/include/sys/reent.h" 3 4
struct __sFILE64 {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;

  struct _reent *_data;


  void * _cookie;

  _ssize_t (*_read) (struct _reent *, void *,
        char *, size_t);
  _ssize_t (*_write) (struct _reent *, void *,
         const char *,
         size_t);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _flags2;

  _off64_t _offset;
  _fpos64_t (*_seek64) (struct _reent *, void *, _fpos64_t, int);


  _flock_t _lock;

  _mbstate_t _mbstate;
};
typedef struct __sFILE64 __FILE;





struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 319 "/usr/include/sys/reent.h" 3 4
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 569 "/usr/include/sys/reent.h" 3 4
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};
# 775 "/usr/include/sys/reent.h" 3 4
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);





  struct _reent * __getreent (void);
# 19 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/machine/stdlib.h" 1 3 4
# 15 "/usr/include/machine/stdlib.h" 3 4
char *mkdtemp (char *);
# 21 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 23 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/cygwin/stdlib.h" 1 3 4
# 13 "/usr/include/cygwin/stdlib.h" 3 4
# 1 "/usr/include/cygwin/wait.h" 1 3 4
# 14 "/usr/include/cygwin/stdlib.h" 2 3 4






const char *getprogname (void);
void setprogname (const char *);


char *canonicalize_file_name (const char *);


int unsetenv (const char *);


char *ptsname (int);
int grantpt (int);
int unlockpt (int);


int ptsname_r(int, char *, size_t);
int getpt (void);



int posix_openpt (int);







extern void *memalign (size_t, size_t);

extern void *valloc (size_t);
# 81 "/usr/include/cygwin/stdlib.h" 3 4
int getloadavg(double loadavg[], int nelem);
# 27 "/usr/include/stdlib.h" 2 3 4








typedef struct
{
  int quot;
  int rem;
} div_t;

typedef struct
{
  long quot;
  long rem;
} ldiv_t;


typedef struct
{
  long long int quot;
  long long int rem;
} lldiv_t;




typedef int (*__compar_fn_t) (const void *, const void *);







int __locale_mb_cur_max (void);



void abort (void) __attribute__ ((__noreturn__));
int abs (int);

__uint32_t arc4random (void);
__uint32_t arc4random_uniform (__uint32_t);
void arc4random_buf (void *, size_t);

int atexit (void (*__func)(void));
double atof (const char *__nptr);

float atoff (const char *__nptr);

int atoi (const char *__nptr);
int _atoi_r (struct _reent *, const char *__nptr);
long atol (const char *__nptr);
long _atol_r (struct _reent *, const char *__nptr);
void * bsearch (const void *__key,
         const void *__base,
         size_t __nmemb,
         size_t __size,
         __compar_fn_t _compar);
void * calloc (size_t __nmemb, size_t __size) ;
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((__noreturn__));
void free (void *) ;
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);
char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);

extern char *suboptarg;
int getsubopt (char **, char * const *, char **);

long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void * malloc (size_t __size) ;
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int mbtowc (wchar_t *
# 107 "/usr/include/stdlib.h"
                    __restrict
# 107 "/usr/include/stdlib.h" 3 4
                              , const char *
# 107 "/usr/include/stdlib.h"
                                            __restrict
# 107 "/usr/include/stdlib.h" 3 4
                                                      , size_t);
int _mbtowc_r (struct _reent *, wchar_t *
# 108 "/usr/include/stdlib.h"
                                        __restrict
# 108 "/usr/include/stdlib.h" 3 4
                                                  , const char *
# 108 "/usr/include/stdlib.h"
                                                                __restrict
# 108 "/usr/include/stdlib.h" 3 4
                                                                          , size_t, _mbstate_t *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t mbstowcs (wchar_t *
# 111 "/usr/include/stdlib.h"
                         __restrict
# 111 "/usr/include/stdlib.h" 3 4
                                   , const char *
# 111 "/usr/include/stdlib.h"
                                                 __restrict
# 111 "/usr/include/stdlib.h" 3 4
                                                           , size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *
# 112 "/usr/include/stdlib.h"
                                             __restrict
# 112 "/usr/include/stdlib.h" 3 4
                                                       , const char *
# 112 "/usr/include/stdlib.h"
                                                                     __restrict
# 112 "/usr/include/stdlib.h" 3 4
                                                                               , size_t, _mbstate_t *);
size_t wcstombs (char *
# 113 "/usr/include/stdlib.h"
                      __restrict
# 113 "/usr/include/stdlib.h" 3 4
                                , const wchar_t *
# 113 "/usr/include/stdlib.h"
                                                 __restrict
# 113 "/usr/include/stdlib.h" 3 4
                                                           , size_t);
size_t _wcstombs_r (struct _reent *, char *
# 114 "/usr/include/stdlib.h"
                                          __restrict
# 114 "/usr/include/stdlib.h" 3 4
                                                    , const wchar_t *
# 114 "/usr/include/stdlib.h"
                                                                     __restrict
# 114 "/usr/include/stdlib.h" 3 4
                                                                               , size_t, _mbstate_t *);


char * mkdtemp (char *);


int mkostemp (char *, int);
int mkostemps (char *, int, int);


int mkstemp (char *);


int mkstemps (char *, int);


char * mktemp (char *) __attribute__ ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));


char * _mkdtemp_r (struct _reent *, char *);
int _mkostemp_r (struct _reent *, char *, int);
int _mkostemps_r (struct _reent *, char *, int, int);
int _mkstemp_r (struct _reent *, char *);
int _mkstemps_r (struct _reent *, char *, int);
char * _mktemp_r (struct _reent *, char *) __attribute__ ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));
void qsort (void *__base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int rand (void);
void * realloc (void *__r, size_t __size) ;

void *reallocarray(void *, size_t, size_t) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2)))
     __attribute__((__alloc_size__(3)));
void * reallocf (void *__r, size_t __size);


char * realpath (const char *
# 148 "/usr/include/stdlib.h"
                            __restrict 
# 148 "/usr/include/stdlib.h" 3 4
                                       path, char *
# 148 "/usr/include/stdlib.h"
                                                   __restrict 
# 148 "/usr/include/stdlib.h" 3 4
                                                              resolved_path);


int rpmatch (const char *response);


void setkey (const char *__key);

void srand (unsigned __seed);
double strtod (const char *
# 157 "/usr/include/stdlib.h"
                          __restrict 
# 157 "/usr/include/stdlib.h" 3 4
                                     __n, char **
# 157 "/usr/include/stdlib.h"
                                                 __restrict 
# 157 "/usr/include/stdlib.h" 3 4
                                                            __end_PTR);
double _strtod_r (struct _reent *,const char *
# 158 "/usr/include/stdlib.h"
                                             __restrict 
# 158 "/usr/include/stdlib.h" 3 4
                                                        __n, char **
# 158 "/usr/include/stdlib.h"
                                                                    __restrict 
# 158 "/usr/include/stdlib.h" 3 4
                                                                               __end_PTR);

float strtof (const char *
# 160 "/usr/include/stdlib.h"
                         __restrict 
# 160 "/usr/include/stdlib.h" 3 4
                                    __n, char **
# 160 "/usr/include/stdlib.h"
                                                __restrict 
# 160 "/usr/include/stdlib.h" 3 4
                                                           __end_PTR);







long strtol (const char *
# 168 "/usr/include/stdlib.h"
                        __restrict 
# 168 "/usr/include/stdlib.h" 3 4
                                   __n, char **
# 168 "/usr/include/stdlib.h"
                                               __restrict 
# 168 "/usr/include/stdlib.h" 3 4
                                                          __end_PTR, int __base);
long _strtol_r (struct _reent *,const char *
# 169 "/usr/include/stdlib.h"
                                           __restrict 
# 169 "/usr/include/stdlib.h" 3 4
                                                      __n, char **
# 169 "/usr/include/stdlib.h"
                                                                  __restrict 
# 169 "/usr/include/stdlib.h" 3 4
                                                                             __end_PTR, int __base);
unsigned long strtoul (const char *
# 170 "/usr/include/stdlib.h"
                                  __restrict 
# 170 "/usr/include/stdlib.h" 3 4
                                             __n, char **
# 170 "/usr/include/stdlib.h"
                                                         __restrict 
# 170 "/usr/include/stdlib.h" 3 4
                                                                    __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *
# 171 "/usr/include/stdlib.h"
                                                     __restrict 
# 171 "/usr/include/stdlib.h" 3 4
                                                                __n, char **
# 171 "/usr/include/stdlib.h"
                                                                            __restrict 
# 171 "/usr/include/stdlib.h" 3 4
                                                                                       __end_PTR, int __base);


double strtod_l (const char *
# 174 "/usr/include/stdlib.h"
                            __restrict
# 174 "/usr/include/stdlib.h" 3 4
                                      , char **
# 174 "/usr/include/stdlib.h"
                                               __restrict
# 174 "/usr/include/stdlib.h" 3 4
                                                         , locale_t);
float strtof_l (const char *
# 175 "/usr/include/stdlib.h"
                           __restrict
# 175 "/usr/include/stdlib.h" 3 4
                                     , char **
# 175 "/usr/include/stdlib.h"
                                              __restrict
# 175 "/usr/include/stdlib.h" 3 4
                                                        , locale_t);

extern long double strtold_l (const char *
# 177 "/usr/include/stdlib.h"
                                         __restrict
# 177 "/usr/include/stdlib.h" 3 4
                                                   , char **
# 177 "/usr/include/stdlib.h"
                                                            __restrict
# 177 "/usr/include/stdlib.h" 3 4
                                                                      ,
         locale_t);

long strtol_l (const char *
# 180 "/usr/include/stdlib.h"
                          __restrict
# 180 "/usr/include/stdlib.h" 3 4
                                    , char **
# 180 "/usr/include/stdlib.h"
                                             __restrict
# 180 "/usr/include/stdlib.h" 3 4
                                                       , int, locale_t);
unsigned long strtoul_l (const char *
# 181 "/usr/include/stdlib.h"
                                    __restrict
# 181 "/usr/include/stdlib.h" 3 4
                                              , char **
# 181 "/usr/include/stdlib.h"
                                                       __restrict
# 181 "/usr/include/stdlib.h" 3 4
                                                                 , int,
    locale_t __loc);
long long strtoll_l (const char *
# 183 "/usr/include/stdlib.h"
                                __restrict
# 183 "/usr/include/stdlib.h" 3 4
                                          , char **
# 183 "/usr/include/stdlib.h"
                                                   __restrict
# 183 "/usr/include/stdlib.h" 3 4
                                                             , int, locale_t);
unsigned long long strtoull_l (const char *
# 184 "/usr/include/stdlib.h"
                                          __restrict
# 184 "/usr/include/stdlib.h" 3 4
                                                    , char **
# 184 "/usr/include/stdlib.h"
                                                             __restrict
# 184 "/usr/include/stdlib.h" 3 4
                                                                       , int,
          locale_t __loc);


int system (const char *__string);


long a64l (const char *__input);
char * l64a (long __input);
char * _l64a_r (struct _reent *,long __input);


int on_exit (void (*__func)(int, void *),void *__arg);


void _Exit (int __status) __attribute__ ((__noreturn__));


int putenv (char *__string);

int _putenv_r (struct _reent *, char *__string);
void * _reallocf_r (struct _reent *, void *, size_t);

int setenv (const char *__string, const char *__value, int __overwrite);

int _setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);
# 221 "/usr/include/stdlib.h" 3 4
char * __itoa (int, char *, int);
char * __utoa (unsigned, char *, int);

char * itoa (int, char *, int);
char * utoa (unsigned, char *, int);


int rand_r (unsigned *__seed);



double drand48 (void);
double _drand48_r (struct _reent *);
double erand48 (unsigned short [3]);
double _erand48_r (struct _reent *, unsigned short [3]);
long jrand48 (unsigned short [3]);
long _jrand48_r (struct _reent *, unsigned short [3]);
void lcong48 (unsigned short [7]);
void _lcong48_r (struct _reent *, unsigned short [7]);
long lrand48 (void);
long _lrand48_r (struct _reent *);
long mrand48 (void);
long _mrand48_r (struct _reent *);
long nrand48 (unsigned short [3]);
long _nrand48_r (struct _reent *, unsigned short [3]);
unsigned short *
       seed48 (unsigned short [3]);
unsigned short *
       _seed48_r (struct _reent *, unsigned short [3]);
void srand48 (long);
void _srand48_r (struct _reent *, long);


char * initstate (unsigned, char *, size_t);
long random (void);
char * setstate (char *);
void srandom (unsigned);


long long atoll (const char *__nptr);

long long _atoll_r (struct _reent *, const char *__nptr);

long long llabs (long long);
lldiv_t lldiv (long long __numer, long long __denom);
long long strtoll (const char *
# 266 "/usr/include/stdlib.h"
                              __restrict 
# 266 "/usr/include/stdlib.h" 3 4
                                         __n, char **
# 266 "/usr/include/stdlib.h"
                                                     __restrict 
# 266 "/usr/include/stdlib.h" 3 4
                                                                __end_PTR, int __base);

long long _strtoll_r (struct _reent *, const char *
# 268 "/usr/include/stdlib.h"
                                                  __restrict 
# 268 "/usr/include/stdlib.h" 3 4
                                                             __n, char **
# 268 "/usr/include/stdlib.h"
                                                                         __restrict 
# 268 "/usr/include/stdlib.h" 3 4
                                                                                    __end_PTR, int __base);

unsigned long long strtoull (const char *
# 270 "/usr/include/stdlib.h"
                                        __restrict 
# 270 "/usr/include/stdlib.h" 3 4
                                                   __n, char **
# 270 "/usr/include/stdlib.h"
                                                               __restrict 
# 270 "/usr/include/stdlib.h" 3 4
                                                                          __end_PTR, int __base);

unsigned long long _strtoull_r (struct _reent *, const char *
# 272 "/usr/include/stdlib.h"
                                                            __restrict 
# 272 "/usr/include/stdlib.h" 3 4
                                                                       __n, char **
# 272 "/usr/include/stdlib.h"
                                                                                   __restrict 
# 272 "/usr/include/stdlib.h" 3 4
                                                                                              __end_PTR, int __base);
# 285 "/usr/include/stdlib.h" 3 4
int __attribute__((__nonnull__ (1))) posix_memalign (void **, size_t, size_t);


char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);







int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);






void qsort_r (void *__base, size_t __nmemb, size_t __size, int (*_compar)(const void *, const void *, void *), void *__thunk);
# 318 "/usr/include/stdlib.h" 3 4
extern long double _strtold_r (struct _reent *, const char *
# 318 "/usr/include/stdlib.h"
                                                           __restrict
# 318 "/usr/include/stdlib.h" 3 4
                                                                     , char **
# 318 "/usr/include/stdlib.h"
                                                                              __restrict
# 318 "/usr/include/stdlib.h" 3 4
                                                                                        );

extern long double strtold (const char *
# 320 "/usr/include/stdlib.h"
                                       __restrict
# 320 "/usr/include/stdlib.h" 3 4
                                                 , char **
# 320 "/usr/include/stdlib.h"
                                                          __restrict
# 320 "/usr/include/stdlib.h" 3 4
                                                                    );







void * aligned_alloc(size_t, size_t) __attribute__((__malloc__)) __attribute__((__alloc_align__(1)))
     __attribute__((__alloc_size__(2)));
int at_quick_exit(void (*)(void));
_Noreturn void
 quick_exit(int);



# 23 "./include/grub/util/misc.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 36 "/usr/include/stdio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 37 "/usr/include/stdio.h" 2 3 4
# 61 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/types.h" 1 3 4
# 28 "/usr/include/sys/types.h" 3 4
typedef __uint8_t u_int8_t;


typedef __uint16_t u_int16_t;


typedef __uint32_t u_int32_t;


typedef __uint64_t u_int64_t;

typedef int register_t;
# 62 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 63 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/sys/_stdint.h" 1 3 4
# 20 "/usr/include/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intmax_t intmax_t;




typedef __uintmax_t uintmax_t;




typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;
# 65 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/machine/endian.h" 1 3 4





# 1 "/usr/include/machine/_endian.h" 1 3 4
# 14 "/usr/include/machine/_endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 15 "/usr/include/machine/_endian.h" 2 3 4
# 23 "/usr/include/machine/_endian.h" 3 4
static __inline__ __uint32_t __ntohl(__uint32_t);
static __inline__ __uint16_t __ntohs(__uint16_t);

static __inline__ __uint32_t
__ntohl(__uint32_t _x)
{
 __asm__("bswap %0" : "=r" (_x) : "0" (_x));
 return _x;
}

static __inline__ __uint16_t
__ntohs(__uint16_t _x)
{
 __asm__("xchgb %b0,%h0"
  : "=Q" (_x)
  : "0" (_x));
 return _x;
}
# 7 "/usr/include/machine/endian.h" 2 3 4
# 68 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 14 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_sigset.h" 1 3 4
# 41 "/usr/include/sys/_sigset.h" 3 4
typedef unsigned long __sigset_t;
# 15 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_timeval.h" 1 3 4
# 35 "/usr/include/sys/_timeval.h" 3 4
typedef __suseconds_t suseconds_t;




typedef long time_t;
# 52 "/usr/include/sys/_timeval.h" 3 4
struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};
# 16 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/timespec.h" 1 3 4
# 38 "/usr/include/sys/timespec.h" 3 4
# 1 "/usr/include/sys/_timespec.h" 1 3 4
# 45 "/usr/include/sys/_timespec.h" 3 4
struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 39 "/usr/include/sys/timespec.h" 2 3 4
# 58 "/usr/include/sys/timespec.h" 3 4
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};
# 17 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;
# 34 "/usr/include/sys/select.h" 3 4
typedef unsigned long fd_mask;







typedef struct _types_fd_set {
 fd_mask fds_bits[(((64)+(((sizeof (fd_mask) * 8))-1))/((sizeof (fd_mask) * 8)))];
} _types_fd_set;
# 60 "/usr/include/sys/select.h" 3 4


int select (int __n, _types_fd_set *__readfds, _types_fd_set *__writefds, _types_fd_set *__exceptfds, struct timeval *__timeout)
                                                   ;

int pselect (int __n, _types_fd_set *__readfds, _types_fd_set *__writefds, _types_fd_set *__exceptfds, const struct timespec *__timeout, const sigset_t *__set)

                           ;



# 69 "/usr/include/sys/types.h" 2 3 4




typedef __uint32_t in_addr_t;




typedef __uint16_t in_port_t;
# 87 "/usr/include/sys/types.h" 3 4
typedef unsigned char u_char;



typedef unsigned short u_short;



typedef unsigned int u_int;



typedef unsigned long u_long;







typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;



typedef __blkcnt_t blkcnt_t;




typedef __blksize_t blksize_t;




typedef unsigned long clock_t;
# 135 "/usr/include/sys/types.h" 3 4
typedef long daddr_t;



typedef char * caddr_t;




typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;




typedef __id_t id_t;




typedef __ino_t ino_t;
# 173 "/usr/include/sys/types.h" 3 4
typedef __off_t off_t;



typedef __dev_t dev_t;



typedef __uid_t uid_t;



typedef __gid_t gid_t;




typedef __pid_t pid_t;




typedef __key_t key_t;




typedef _ssize_t ssize_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __clockid_t clockid_t;





typedef __timer_t timer_t;





typedef __useconds_t useconds_t;
# 236 "/usr/include/sys/types.h" 3 4
typedef __int64_t sbintime_t;


# 1 "/usr/include/sys/_pthreadtypes.h" 1 3 4
# 15 "/usr/include/sys/_pthreadtypes.h" 3 4
typedef struct __pthread_t {char __dummy;} *pthread_t;
typedef struct __pthread_mutex_t {char __dummy;} *pthread_mutex_t;

typedef struct __pthread_key_t {char __dummy;} *pthread_key_t;
typedef struct __pthread_attr_t {char __dummy;} *pthread_attr_t;
typedef struct __pthread_mutexattr_t {char __dummy;} *pthread_mutexattr_t;
typedef struct __pthread_condattr_t {char __dummy;} *pthread_condattr_t;
typedef struct __pthread_cond_t {char __dummy;} *pthread_cond_t;
typedef struct __pthread_barrierattr_t {char __dummy;} *pthread_barrierattr_t;
typedef struct __pthread_barrier_t {char __dummy;} *pthread_barrier_t;


typedef struct
{
  pthread_mutex_t mutex;
  int state;
}
pthread_once_t;
typedef struct __pthread_spinlock_t {char __dummy;} *pthread_spinlock_t;
typedef struct __pthread_rwlock_t {char __dummy;} *pthread_rwlock_t;
typedef struct __pthread_rwlockattr_t {char __dummy;} *pthread_rwlockattr_t;
# 240 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/machine/types.h" 1 3 4
# 19 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 16 "/usr/include/bits/byteswap.h" 3 4
static __inline unsigned short
__bswap_16 (unsigned short __x)
{
  return (__x >> 8) | (__x << 8);
}

static __inline unsigned int
__bswap_32 (unsigned int __x)
{
  return (__bswap_16 (__x & 0xffff) << 16) | (__bswap_16 (__x >> 16));
}

static __inline unsigned long long
__bswap_64 (unsigned long long __x)
{
  return (((unsigned long long) __bswap_32 (__x & 0xffffffffull)) << 32) | (__bswap_32 (__x >> 32));
}
# 39 "/usr/include/endian.h" 2 3 4
# 20 "/usr/include/machine/types.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 21 "/usr/include/machine/types.h" 2 3 4




typedef struct timespec timespec_t;




typedef struct timespec timestruc_t;


typedef __loff_t loff_t;
# 46 "/usr/include/machine/types.h" 3 4
struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
};






typedef unsigned long vm_offset_t;




typedef unsigned long vm_size_t;




typedef void *vm_object_t;




typedef char *addr_t;





# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 12 "/usr/include/sys/sysmacros.h" 3 4
# 1 "/usr/include/sys/types.h" 1 3 4
# 13 "/usr/include/sys/sysmacros.h" 2 3 4

static __inline__ int gnu_dev_major(dev_t);
static __inline__ int gnu_dev_minor(dev_t);
static __inline__ dev_t gnu_dev_makedev(int, int);

static __inline__ int
gnu_dev_major(dev_t dev)
{
 return (int)(((dev) >> 16) & 0xffff);
}

static __inline__ int
gnu_dev_minor(dev_t dev)
{
 return (int)((dev) & 0xffff);
}

static __inline__ dev_t
gnu_dev_makedev(int maj, int min)
{
 return (((maj) << 16) | ((min) & 0xffff));
}
# 81 "/usr/include/machine/types.h" 2 3 4
# 241 "/usr/include/sys/types.h" 2 3 4
# 62 "/usr/include/stdio.h" 2 3 4




typedef __FILE FILE;




typedef _fpos64_t fpos_t;







# 1 "/usr/include/sys/stdio.h" 1 3 4
# 33 "/usr/include/sys/stdio.h" 3 4


ssize_t getline (char **, size_t *, FILE *);
ssize_t getdelim (char **, size_t *, int, FILE *);


# 80 "/usr/include/stdio.h" 2 3 4
# 181 "/usr/include/stdio.h" 3 4
char * ctermid (char *);




FILE * tmpfile (void);
char * tmpnam (char *);

char * tempnam (const char *, const char *);

int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *
# 193 "/usr/include/stdio.h"
                           __restrict
# 193 "/usr/include/stdio.h" 3 4
                                     , const char *
# 193 "/usr/include/stdio.h"
                                                   __restrict
# 193 "/usr/include/stdio.h" 3 4
                                                             , FILE *
# 193 "/usr/include/stdio.h"
                                                                     __restrict
# 193 "/usr/include/stdio.h" 3 4
                                                                               );
void setbuf (FILE *
# 194 "/usr/include/stdio.h"
                  __restrict
# 194 "/usr/include/stdio.h" 3 4
                            , char *
# 194 "/usr/include/stdio.h"
                                    __restrict
# 194 "/usr/include/stdio.h" 3 4
                                              );
int setvbuf (FILE *
# 195 "/usr/include/stdio.h"
                  __restrict
# 195 "/usr/include/stdio.h" 3 4
                            , char *
# 195 "/usr/include/stdio.h"
                                    __restrict
# 195 "/usr/include/stdio.h" 3 4
                                              , int, size_t);
int fprintf (FILE *
# 196 "/usr/include/stdio.h"
                  __restrict
# 196 "/usr/include/stdio.h" 3 4
                            , const char *
# 196 "/usr/include/stdio.h"
                                          __restrict
# 196 "/usr/include/stdio.h" 3 4
                                                    , ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf (FILE *
# 198 "/usr/include/stdio.h"
                 __restrict
# 198 "/usr/include/stdio.h" 3 4
                           , const char *
# 198 "/usr/include/stdio.h"
                                         __restrict
# 198 "/usr/include/stdio.h" 3 4
                                                   , ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int printf (const char *
# 200 "/usr/include/stdio.h"
                       __restrict
# 200 "/usr/include/stdio.h" 3 4
                                 , ...)
               __attribute__ ((__format__ (__printf__, 1, 2)));
int scanf (const char *
# 202 "/usr/include/stdio.h"
                      __restrict
# 202 "/usr/include/stdio.h" 3 4
                                , ...)
               __attribute__ ((__format__ (__scanf__, 1, 2)));
int sscanf (const char *
# 204 "/usr/include/stdio.h"
                       __restrict
# 204 "/usr/include/stdio.h" 3 4
                                 , const char *
# 204 "/usr/include/stdio.h"
                                               __restrict
# 204 "/usr/include/stdio.h" 3 4
                                                         , ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int vfprintf (FILE *
# 206 "/usr/include/stdio.h"
                   __restrict
# 206 "/usr/include/stdio.h" 3 4
                             , const char *
# 206 "/usr/include/stdio.h"
                                           __restrict
# 206 "/usr/include/stdio.h" 3 4
                                                     , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vprintf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 1, 0)));
int vsprintf (char *
# 210 "/usr/include/stdio.h"
                   __restrict
# 210 "/usr/include/stdio.h" 3 4
                             , const char *
# 210 "/usr/include/stdio.h"
                                           __restrict
# 210 "/usr/include/stdio.h" 3 4
                                                     , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int fgetc (FILE *);
char * fgets (char *
# 213 "/usr/include/stdio.h"
                    __restrict
# 213 "/usr/include/stdio.h" 3 4
                              , int, FILE *
# 213 "/usr/include/stdio.h"
                                           __restrict
# 213 "/usr/include/stdio.h" 3 4
                                                     );
int fputc (int, FILE *);
int fputs (const char *
# 215 "/usr/include/stdio.h"
                      __restrict
# 215 "/usr/include/stdio.h" 3 4
                                , FILE *
# 215 "/usr/include/stdio.h"
                                        __restrict
# 215 "/usr/include/stdio.h" 3 4
                                                  );
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void *
# 223 "/usr/include/stdio.h"
                   __restrict
# 223 "/usr/include/stdio.h" 3 4
                             , size_t _size, size_t _n, FILE *
# 223 "/usr/include/stdio.h"
                                                              __restrict
# 223 "/usr/include/stdio.h" 3 4
                                                                        );
size_t fwrite (const void *
# 224 "/usr/include/stdio.h"
                          __restrict 
# 224 "/usr/include/stdio.h" 3 4
                                     , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *
# 228 "/usr/include/stdio.h"
                  __restrict
# 228 "/usr/include/stdio.h" 3 4
                            , fpos_t *
# 228 "/usr/include/stdio.h"
                                      __restrict
# 228 "/usr/include/stdio.h" 3 4
                                                );

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char *
# 243 "/usr/include/stdio.h"
                         __restrict 
# 243 "/usr/include/stdio.h" 3 4
                                    _name, const char *
# 243 "/usr/include/stdio.h"
                                                       __restrict 
# 243 "/usr/include/stdio.h" 3 4
                                                                  _type);
int sprintf (char *
# 244 "/usr/include/stdio.h"
                  __restrict
# 244 "/usr/include/stdio.h" 3 4
                            , const char *
# 244 "/usr/include/stdio.h"
                                          __restrict
# 244 "/usr/include/stdio.h" 3 4
                                                    , ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int remove (const char *);
int rename (const char *, const char *);
# 257 "/usr/include/stdio.h" 3 4
int fseeko (FILE *, off_t, int);
off_t ftello (FILE *);



int fcloseall (void);



int snprintf (char *
# 266 "/usr/include/stdio.h"
                   __restrict
# 266 "/usr/include/stdio.h" 3 4
                             , size_t, const char *
# 266 "/usr/include/stdio.h"
                                                   __restrict
# 266 "/usr/include/stdio.h" 3 4
                                                             , ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf (char *
# 268 "/usr/include/stdio.h"
                    __restrict
# 268 "/usr/include/stdio.h" 3 4
                              , size_t, const char *
# 268 "/usr/include/stdio.h"
                                                    __restrict
# 268 "/usr/include/stdio.h" 3 4
                                                              , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int vfscanf (FILE *
# 270 "/usr/include/stdio.h"
                  __restrict
# 270 "/usr/include/stdio.h" 3 4
                            , const char *
# 270 "/usr/include/stdio.h"
                                          __restrict
# 270 "/usr/include/stdio.h" 3 4
                                                    , __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int vscanf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 1, 0)));
int vsscanf (const char *
# 274 "/usr/include/stdio.h"
                        __restrict
# 274 "/usr/include/stdio.h" 3 4
                                  , const char *
# 274 "/usr/include/stdio.h"
                                                __restrict
# 274 "/usr/include/stdio.h" 3 4
                                                          , __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));


int asprintf (char **
# 278 "/usr/include/stdio.h"
                    __restrict
# 278 "/usr/include/stdio.h" 3 4
                              , const char *
# 278 "/usr/include/stdio.h"
                                            __restrict
# 278 "/usr/include/stdio.h" 3 4
                                                      , ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int vasprintf (char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));


int asiprintf (char **, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
char * asniprintf (char *, size_t *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
char * asnprintf (char *
# 288 "/usr/include/stdio.h"
                       __restrict
# 288 "/usr/include/stdio.h" 3 4
                                 , size_t *
# 288 "/usr/include/stdio.h"
                                           __restrict
# 288 "/usr/include/stdio.h" 3 4
                                                     , const char *
# 288 "/usr/include/stdio.h"
                                                                   __restrict
# 288 "/usr/include/stdio.h" 3 4
                                                                             , ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));

int diprintf (int, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));

int fiprintf (FILE *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int fiscanf (FILE *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int iprintf (const char *, ...)
               __attribute__ ((__format__ (__printf__, 1, 2)));
int iscanf (const char *, ...)
               __attribute__ ((__format__ (__scanf__, 1, 2)));
int siprintf (char *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int siscanf (const char *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int sniprintf (char *, size_t, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int vasiprintf (char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
char * vasniprintf (char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
char * vasnprintf (char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int vdiprintf (int, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vfiprintf (FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vfiscanf (FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int viprintf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 1, 0)));
int viscanf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 1, 0)));
int vsiprintf (char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vsiscanf (const char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int vsniprintf (char *, size_t, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
# 339 "/usr/include/stdio.h" 3 4
FILE * fdopen (int, const char *);

int fileno (FILE *);


int pclose (FILE *);
FILE * popen (const char *, const char *);



void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);



int getw (FILE *);
int putw (int, FILE *);


int getc_unlocked (FILE *);
int getchar_unlocked (void);
void flockfile (FILE *);
int ftrylockfile (FILE *);
void funlockfile (FILE *);
int putc_unlocked (int, FILE *);
int putchar_unlocked (int);
# 374 "/usr/include/stdio.h" 3 4
int dprintf (int, const char *
# 374 "/usr/include/stdio.h"
                             __restrict
# 374 "/usr/include/stdio.h" 3 4
                                       , ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));

FILE * fmemopen (void *
# 377 "/usr/include/stdio.h"
                      __restrict
# 377 "/usr/include/stdio.h" 3 4
                                , size_t, const char *
# 377 "/usr/include/stdio.h"
                                                      __restrict
# 377 "/usr/include/stdio.h" 3 4
                                                                );


FILE * open_memstream (char **, size_t *);
int vdprintf (int, const char *
# 381 "/usr/include/stdio.h"
                              __restrict
# 381 "/usr/include/stdio.h" 3 4
                                        , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));



int renameat (int, const char *, int, const char *);

int renameat2 (int, const char *, int, const char *, unsigned int);







int _asiprintf_r (struct _reent *, char **, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
char * _asniprintf_r (struct _reent *, char *, size_t *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
char * _asnprintf_r (struct _reent *, char *
# 400 "/usr/include/stdio.h"
                                           __restrict
# 400 "/usr/include/stdio.h" 3 4
                                                     , size_t *
# 400 "/usr/include/stdio.h"
                                                               __restrict
# 400 "/usr/include/stdio.h" 3 4
                                                                         , const char *
# 400 "/usr/include/stdio.h"
                                                                                       __restrict
# 400 "/usr/include/stdio.h" 3 4
                                                                                                 , ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _asprintf_r (struct _reent *, char **
# 402 "/usr/include/stdio.h"
                                        __restrict
# 402 "/usr/include/stdio.h" 3 4
                                                  , const char *
# 402 "/usr/include/stdio.h"
                                                                __restrict
# 402 "/usr/include/stdio.h" 3 4
                                                                          , ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _diprintf_r (struct _reent *, int, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _dprintf_r (struct _reent *, int, const char *
# 406 "/usr/include/stdio.h"
                                                 __restrict
# 406 "/usr/include/stdio.h" 3 4
                                                           , ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
int _fgetc_r (struct _reent *, FILE *);
int _fgetc_unlocked_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *
# 414 "/usr/include/stdio.h"
                                        __restrict
# 414 "/usr/include/stdio.h" 3 4
                                                  , int, FILE *
# 414 "/usr/include/stdio.h"
                                                               __restrict
# 414 "/usr/include/stdio.h" 3 4
                                                                         );
char * _fgets_unlocked_r (struct _reent *, char *
# 415 "/usr/include/stdio.h"
                                                 __restrict
# 415 "/usr/include/stdio.h" 3 4
                                                           , int, FILE *
# 415 "/usr/include/stdio.h"
                                                                        __restrict
# 415 "/usr/include/stdio.h" 3 4
                                                                                  );




int _fgetpos_r (struct _reent *, FILE *, fpos_t *);
int _fsetpos_r (struct _reent *, FILE *, const fpos_t *);

int _fiprintf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fiscanf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
FILE * _fmemopen_r (struct _reent *, void *
# 427 "/usr/include/stdio.h"
                                          __restrict
# 427 "/usr/include/stdio.h" 3 4
                                                    , size_t, const char *
# 427 "/usr/include/stdio.h"
                                                                          __restrict
# 427 "/usr/include/stdio.h" 3 4
                                                                                    );
FILE * _fopen_r (struct _reent *, const char *
# 428 "/usr/include/stdio.h"
                                             __restrict
# 428 "/usr/include/stdio.h" 3 4
                                                       , const char *
# 428 "/usr/include/stdio.h"
                                                                     __restrict
# 428 "/usr/include/stdio.h" 3 4
                                                                               );
FILE * _freopen_r (struct _reent *, const char *
# 429 "/usr/include/stdio.h"
                                               __restrict
# 429 "/usr/include/stdio.h" 3 4
                                                         , const char *
# 429 "/usr/include/stdio.h"
                                                                       __restrict
# 429 "/usr/include/stdio.h" 3 4
                                                                                 , FILE *
# 429 "/usr/include/stdio.h"
                                                                                         __restrict
# 429 "/usr/include/stdio.h" 3 4
                                                                                                   );
int _fprintf_r (struct _reent *, FILE *
# 430 "/usr/include/stdio.h"
                                      __restrict
# 430 "/usr/include/stdio.h" 3 4
                                                , const char *
# 430 "/usr/include/stdio.h"
                                                              __restrict
# 430 "/usr/include/stdio.h" 3 4
                                                                        , ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fpurge_r (struct _reent *, FILE *);
int _fputc_r (struct _reent *, int, FILE *);
int _fputc_unlocked_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *
# 435 "/usr/include/stdio.h"
                                          __restrict
# 435 "/usr/include/stdio.h" 3 4
                                                    , FILE *
# 435 "/usr/include/stdio.h"
                                                            __restrict
# 435 "/usr/include/stdio.h" 3 4
                                                                      );
int _fputs_unlocked_r (struct _reent *, const char *
# 436 "/usr/include/stdio.h"
                                                   __restrict
# 436 "/usr/include/stdio.h" 3 4
                                                             , FILE *
# 436 "/usr/include/stdio.h"
                                                                     __restrict
# 436 "/usr/include/stdio.h" 3 4
                                                                               );
size_t _fread_r (struct _reent *, void *
# 437 "/usr/include/stdio.h"
                                       __restrict
# 437 "/usr/include/stdio.h" 3 4
                                                 , size_t _size, size_t _n, FILE *
# 437 "/usr/include/stdio.h"
                                                                                  __restrict
# 437 "/usr/include/stdio.h" 3 4
                                                                                            );
size_t _fread_unlocked_r (struct _reent *, void *
# 438 "/usr/include/stdio.h"
                                                __restrict
# 438 "/usr/include/stdio.h" 3 4
                                                          , size_t _size, size_t _n, FILE *
# 438 "/usr/include/stdio.h"
                                                                                           __restrict
# 438 "/usr/include/stdio.h" 3 4
                                                                                                     );
int _fscanf_r (struct _reent *, FILE *
# 439 "/usr/include/stdio.h"
                                     __restrict
# 439 "/usr/include/stdio.h" 3 4
                                               , const char *
# 439 "/usr/include/stdio.h"
                                                             __restrict
# 439 "/usr/include/stdio.h" 3 4
                                                                       , ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _fseek_r (struct _reent *, FILE *, long, int);
int _fseeko_r (struct _reent *, FILE *, _off_t, int);
long _ftell_r (struct _reent *, FILE *);
_off_t _ftello_r (struct _reent *, FILE *);
void _rewind_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void *
# 446 "/usr/include/stdio.h"
                                              __restrict
# 446 "/usr/include/stdio.h" 3 4
                                                        , size_t _size, size_t _n, FILE *
# 446 "/usr/include/stdio.h"
                                                                                         __restrict
# 446 "/usr/include/stdio.h" 3 4
                                                                                                   );
size_t _fwrite_unlocked_r (struct _reent *, const void *
# 447 "/usr/include/stdio.h"
                                                       __restrict
# 447 "/usr/include/stdio.h" 3 4
                                                                 , size_t _size, size_t _n, FILE *
# 447 "/usr/include/stdio.h"
                                                                                                  __restrict
# 447 "/usr/include/stdio.h" 3 4
                                                                                                            );
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _iscanf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
FILE * _open_memstream_r (struct _reent *, char **, size_t *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *
# 459 "/usr/include/stdio.h"
                                           __restrict
# 459 "/usr/include/stdio.h" 3 4
                                                     , ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *,
      const char *_old, const char *_new);
int _scanf_r (struct _reent *, const char *
# 469 "/usr/include/stdio.h"
                                          __restrict
# 469 "/usr/include/stdio.h" 3 4
                                                    , ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int _siprintf_r (struct _reent *, char *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _siscanf_r (struct _reent *, const char *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _snprintf_r (struct _reent *, char *
# 477 "/usr/include/stdio.h"
                                       __restrict
# 477 "/usr/include/stdio.h" 3 4
                                                 , size_t, const char *
# 477 "/usr/include/stdio.h"
                                                                       __restrict
# 477 "/usr/include/stdio.h" 3 4
                                                                                 , ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _sprintf_r (struct _reent *, char *
# 479 "/usr/include/stdio.h"
                                      __restrict
# 479 "/usr/include/stdio.h" 3 4
                                                , const char *
# 479 "/usr/include/stdio.h"
                                                              __restrict
# 479 "/usr/include/stdio.h" 3 4
                                                                        , ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _sscanf_r (struct _reent *, const char *
# 481 "/usr/include/stdio.h"
                                           __restrict
# 481 "/usr/include/stdio.h" 3 4
                                                     , const char *
# 481 "/usr/include/stdio.h"
                                                                   __restrict
# 481 "/usr/include/stdio.h" 3 4
                                                                             , ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
char * _vasniprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
char * _vasnprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdprintf_r (struct _reent *, int, const char *
# 497 "/usr/include/stdio.h"
                                                  __restrict
# 497 "/usr/include/stdio.h" 3 4
                                                            , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vfprintf_r (struct _reent *, FILE *
# 503 "/usr/include/stdio.h"
                                       __restrict
# 503 "/usr/include/stdio.h" 3 4
                                                 , const char *
# 503 "/usr/include/stdio.h"
                                                               __restrict
# 503 "/usr/include/stdio.h" 3 4
                                                                         , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfscanf_r (struct _reent *, FILE *
# 505 "/usr/include/stdio.h"
                                      __restrict
# 505 "/usr/include/stdio.h" 3 4
                                                , const char *
# 505 "/usr/include/stdio.h"
                                                              __restrict
# 505 "/usr/include/stdio.h" 3 4
                                                                        , __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _viprintf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _viscanf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vprintf_r (struct _reent *, const char *
# 511 "/usr/include/stdio.h"
                                            __restrict
# 511 "/usr/include/stdio.h" 3 4
                                                      , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _vscanf_r (struct _reent *, const char *
# 513 "/usr/include/stdio.h"
                                           __restrict
# 513 "/usr/include/stdio.h" 3 4
                                                     , __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsnprintf_r (struct _reent *, char *
# 521 "/usr/include/stdio.h"
                                        __restrict
# 521 "/usr/include/stdio.h" 3 4
                                                  , size_t, const char *
# 521 "/usr/include/stdio.h"
                                                                        __restrict
# 521 "/usr/include/stdio.h" 3 4
                                                                                  , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsprintf_r (struct _reent *, char *
# 523 "/usr/include/stdio.h"
                                       __restrict
# 523 "/usr/include/stdio.h" 3 4
                                                 , const char *
# 523 "/usr/include/stdio.h"
                                                               __restrict
# 523 "/usr/include/stdio.h" 3 4
                                                                         , __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsscanf_r (struct _reent *, const char *
# 525 "/usr/include/stdio.h"
                                            __restrict
# 525 "/usr/include/stdio.h" 3 4
                                                      , const char *
# 525 "/usr/include/stdio.h"
                                                                    __restrict
# 525 "/usr/include/stdio.h" 3 4
                                                                              , __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));



int fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);


void clearerr_unlocked (FILE *);
int feof_unlocked (FILE *);
int ferror_unlocked (FILE *);
int fileno_unlocked (FILE *);
int fflush_unlocked (FILE *);
int fgetc_unlocked (FILE *);
int fputc_unlocked (int, FILE *);
size_t fread_unlocked (void *
# 542 "/usr/include/stdio.h"
                            __restrict
# 542 "/usr/include/stdio.h" 3 4
                                      , size_t _size, size_t _n, FILE *
# 542 "/usr/include/stdio.h"
                                                                       __restrict
# 542 "/usr/include/stdio.h" 3 4
                                                                                 );
size_t fwrite_unlocked (const void *
# 543 "/usr/include/stdio.h"
                                   __restrict 
# 543 "/usr/include/stdio.h" 3 4
                                              , size_t _size, size_t _n, FILE *);



char * fgets_unlocked (char *
# 547 "/usr/include/stdio.h"
                             __restrict
# 547 "/usr/include/stdio.h" 3 4
                                       , int, FILE *
# 547 "/usr/include/stdio.h"
                                                    __restrict
# 547 "/usr/include/stdio.h" 3 4
                                                              );
int fputs_unlocked (const char *
# 548 "/usr/include/stdio.h"
                               __restrict
# 548 "/usr/include/stdio.h" 3 4
                                         , FILE *
# 548 "/usr/include/stdio.h"
                                                 __restrict
# 548 "/usr/include/stdio.h" 3 4
                                                           );
# 577 "/usr/include/stdio.h" 3 4
int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);







FILE *funopen (const void *__cookie,
  int (*__readfn)(void *__c, char *__buf,
    size_t __n),
  int (*__writefn)(void *__c, const char *__buf,
     size_t __n),
  _fpos64_t (*__seekfn)(void *__c, _fpos64_t __off, int __whence),
  int (*__closefn)(void *__c));
FILE *_funopen_r (struct _reent *, const void *__cookie,
  int (*__readfn)(void *__c, char *__buf,
    size_t __n),
  int (*__writefn)(void *__c, const char *__buf,
     size_t __n),
  _fpos64_t (*__seekfn)(void *__c, _fpos64_t __off, int __whence),
  int (*__closefn)(void *__c));
# 624 "/usr/include/stdio.h" 3 4
typedef ssize_t cookie_read_function_t(void *__cookie, char *__buf, size_t __n);
typedef ssize_t cookie_write_function_t(void *__cookie, const char *__buf,
     size_t __n);

typedef int cookie_seek_function_t(void *__cookie, _off64_t *__off,
       int __whence);



typedef int cookie_close_function_t(void *__cookie);
typedef struct
{


  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
FILE *fopencookie (void *__cookie,
  const char *__mode, cookie_io_functions_t __functions);
FILE *_fopencookie_r (struct _reent *, void *__cookie,
  const char *__mode, cookie_io_functions_t __functions);
# 667 "/usr/include/stdio.h" 3 4
static __inline__ int __sgetc_r(struct _reent *__ptr, FILE *__p);

static __inline__ int __sgetc_r(struct _reent *__ptr, FILE *__p)
  {
    int __c = (--(__p)->_r < 0 ? __srget_r(__ptr, __p) : (int)(*(__p)->_p++));
    if ((__p->_flags & 0x4000) && (__c == '\r'))
      {
      int __c2 = (--(__p)->_r < 0 ? __srget_r(__ptr, __p) : (int)(*(__p)->_p++));
      if (__c2 == '\n')
        __c = __c2;
      else
        ungetc(__c2, __p);
      }
    return __c;
  }





static __inline__ int __sputc_r(struct _reent *_ptr, int _c, FILE *_p) {

 if ((_p->_flags & 0x4000) && _c == '\n')
   __sputc_r (_ptr, '\r', _p);

 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf_r(_ptr, _c, _p));
}
# 741 "/usr/include/stdio.h" 3 4
static __inline int
_getchar_unlocked(void)
{
 struct _reent *_ptr;

 _ptr = (__getreent());
 return (__sgetc_r(_ptr, ((_ptr)->_stdin)));
}

static __inline int
_putchar_unlocked(int _c)
{
 struct _reent *_ptr;

 _ptr = (__getreent());
 return (__sputc_r(_ptr, _c, ((_ptr)->_stdout)));
}
# 797 "/usr/include/stdio.h" 3 4

# 24 "./include/grub/util/misc.h" 2

# 1 "/usr/include/setjmp.h" 1 3 4
# 10 "/usr/include/setjmp.h" 3 4
# 1 "/usr/include/machine/setjmp.h" 1 3 4


# 374 "/usr/include/machine/setjmp.h" 3 4
typedef long jmp_buf[32];








# 1 "/usr/include/signal.h" 1 3 4





# 1 "/usr/include/sys/signal.h" 1 3 4
# 22 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/cygwin/signal.h" 1 3 4
# 24 "/usr/include/cygwin/signal.h" 3 4
struct _uc_fpxreg {
  __uint16_t significand[4];
  __uint16_t exponent;
  __uint16_t padding[3];
};

struct _uc_xmmreg {
  __uint32_t element[4];
};

struct _fpstate
{
  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _uc_fpxreg st[8];
  struct _uc_xmmreg xmm[16];
  __uint32_t padding[24];
};

struct __attribute__ ((__aligned__ (16))) __mcontext
{
  __uint64_t p1home;
  __uint64_t p2home;
  __uint64_t p3home;
  __uint64_t p4home;
  __uint64_t p5home;
  __uint64_t p6home;
  __uint32_t ctxflags;
  __uint32_t mxcsr;
  __uint16_t cs;
  __uint16_t ds;
  __uint16_t es;
  __uint16_t fs;
  __uint16_t gs;
  __uint16_t ss;
  __uint32_t eflags;
  __uint64_t dr0;
  __uint64_t dr1;
  __uint64_t dr2;
  __uint64_t dr3;
  __uint64_t dr6;
  __uint64_t dr7;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rdx;
  __uint64_t rbx;
  __uint64_t rsp;
  __uint64_t rbp;
  __uint64_t rsi;
  __uint64_t rdi;
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rip;
  struct _fpstate fpregs;
  __uint64_t vregs[52];
  __uint64_t vcx;
  __uint64_t dbc;
  __uint64_t btr;
  __uint64_t bfr;
  __uint64_t etr;
  __uint64_t efr;
  __uint64_t oldmask;
  __uint64_t cr2;
};
# 163 "/usr/include/cygwin/signal.h" 3 4
typedef union sigval
{
  int sival_int;
  void *sival_ptr;
} sigval_t;

typedef struct sigevent
{
  sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;
  void (*sigev_notify_function) (sigval_t);
  pthread_attr_t *sigev_notify_attributes;
} sigevent_t;



#pragma pack(push,4)

struct _sigcommune
{
  __uint32_t _si_code;
  void *_si_read_handle;
  void *_si_write_handle;
  void *_si_process_handle;
  __extension__ union
  {
    int _si_fd;
    int64_t _si_pipe_unique_id;
    char *_si_str;
  };
};
# 209 "/usr/include/cygwin/signal.h" 3 4
typedef struct
{
  int si_signo;
  int si_code;
  pid_t si_pid;
  uid_t si_uid;
  int si_errno;

  __extension__ union
  {
    __uint32_t __pad[32];
    struct _sigcommune _si_commune;
    __extension__ struct
    {
      __extension__ union
      {
 sigval_t si_sigval;
 sigval_t si_value;
      };
      __extension__ struct
      {
 timer_t si_tid;
 unsigned int si_overrun;
      };
    };

    __extension__ struct
    {
      int si_status;
      clock_t si_utime;
      clock_t si_stime;
    };

    void *si_addr;
# 253 "/usr/include/cygwin/signal.h" 3 4
  };
} siginfo_t;

#pragma pack(pop)



enum
{
  SI_USER = 0,
  SI_ASYNCIO = 2,

  SI_MESGQ,

  SI_TIMER,
  SI_QUEUE,
  SI_KERNEL,

  ILL_ILLOPC,
  ILL_ILLOPN,
  ILL_ILLADR,
  ILL_ILLTRP,
  ILL_PRVOPC,
  ILL_PRVREG,
  ILL_COPROC,
  ILL_BADSTK,

  FPE_INTDIV,
  FPE_INTOVF,
  FPE_FLTDIV,
  FPE_FLTOVF,
  FPE_FLTUND,
  FPE_FLTRES,
  FPE_FLTINV,
  FPE_FLTSUB,

  SEGV_MAPERR,
  SEGV_ACCERR,

  BUS_ADRALN,
  BUS_ADRERR,
  BUS_OBJERR,

  CLD_EXITED,
  CLD_KILLED,
  CLD_DUMPED,
  CLD_TRAPPED,
  CLD_STOPPED,
  CLD_CONTINUED
};

enum
{
  SIGEV_SIGNAL = 0,


  SIGEV_NONE,


  SIGEV_THREAD

};





typedef void (*_sig_func_ptr)(int);



struct sigaction
{
  __extension__ union
  {
    _sig_func_ptr sa_handler;

    void (*sa_sigaction) ( int, siginfo_t *, void * );

  };
  sigset_t sa_mask;
  int sa_flags;
};
# 416 "/usr/include/cygwin/signal.h" 3 4
void psiginfo (const siginfo_t *, const char *);


int sigwait (const sigset_t *, int *);


int sigwaitinfo (const sigset_t *, siginfo_t *);


int sighold (int);
int sigignore (int);
int sigrelse (int);
_sig_func_ptr sigset (int, _sig_func_ptr);



int sigqueue(pid_t, int, const union sigval);


int siginterrupt (int, int);





extern const char __attribute__((dllimport)) *sys_sigabbrev[];
extern const char __attribute__((dllimport)) *sys_siglist[];
# 23 "/usr/include/sys/signal.h" 2 3 4
# 153 "/usr/include/sys/signal.h" 3 4
typedef struct sigaltstack {
  void *ss_sp;
  int ss_flags;
  size_t ss_size;
} stack_t;






int sigprocmask (int how, const sigset_t *set, sigset_t *oset);



int pthread_sigmask (int how, const sigset_t *set, sigset_t *oset);







int kill (pid_t, int);



int killpg (pid_t, int);


int sigaction (int, const struct sigaction *, struct sigaction *);
int sigaddset (sigset_t *, const int);
int sigdelset (sigset_t *, const int);
int sigismember (const sigset_t *, int);
int sigfillset (sigset_t *);
int sigemptyset (sigset_t *);
int sigpending (sigset_t *);
int sigsuspend (const sigset_t *);
int sigwait (const sigset_t *set, int *sig);
# 212 "/usr/include/sys/signal.h" 3 4
int sigpause (int) __asm__ ("" "__xpg_sigpause");
# 222 "/usr/include/sys/signal.h" 3 4
int sigaltstack (const stack_t *
# 222 "/usr/include/sys/signal.h"
                               __restrict
# 222 "/usr/include/sys/signal.h" 3 4
                                         , stack_t *
# 222 "/usr/include/sys/signal.h"
                                                    __restrict
# 222 "/usr/include/sys/signal.h" 3 4
                                                              );



int pthread_kill (pthread_t thread, int sig);







int sigwaitinfo (const sigset_t *set, siginfo_t *info);
int sigtimedwait (const sigset_t *set, siginfo_t *info,
    const struct timespec *timeout);

int sigqueue (pid_t pid, int signo, const union sigval value);
# 363 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/ucontext.h" 1 3 4
# 12 "/usr/include/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 13 "/usr/include/sys/ucontext.h" 2 3 4

typedef struct __mcontext mcontext_t;

typedef __attribute__ ((__aligned__ (16))) struct __ucontext {
 mcontext_t uc_mcontext;
 struct __ucontext *uc_link;
 sigset_t uc_sigmask;
 stack_t uc_stack;
 unsigned long int uc_flags;
} ucontext_t;
# 364 "/usr/include/sys/signal.h" 2 3 4
# 7 "/usr/include/signal.h" 2 3 4



typedef int sig_atomic_t;

typedef _sig_func_ptr sig_t;


typedef _sig_func_ptr sighandler_t;






struct _reent;

_sig_func_ptr _signal_r (struct _reent *, int, _sig_func_ptr);
int _raise_r (struct _reent *, int);


_sig_func_ptr signal (int, _sig_func_ptr);
int raise (int);
void psignal (int, const char *);



# 384 "/usr/include/machine/setjmp.h" 2 3 4







typedef long sigjmp_buf[32 +1+((sizeof (long) + sizeof (sigset_t) - 1)
         /sizeof (long))];
# 413 "/usr/include/machine/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf, int) __attribute__ ((__noreturn__));
extern int sigsetjmp (sigjmp_buf, int);
# 454 "/usr/include/machine/setjmp.h" 3 4
extern void _longjmp (jmp_buf, int) __attribute__ ((__noreturn__));
extern int _setjmp (jmp_buf);
# 11 "/usr/include/setjmp.h" 2 3 4




void longjmp (jmp_buf __jmpb, int __retval)
   __attribute__ ((__noreturn__));



int setjmp (jmp_buf __jmpb);


# 26 "./include/grub/util/misc.h" 2
# 1 "/usr/include/unistd.h" 1 3 4



# 1 "/usr/include/sys/unistd.h" 1 3 4
# 14 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 15 "/usr/include/sys/unistd.h" 2 3 4

extern char **environ;

void _exit (int __status) __attribute__ ((__noreturn__));

int access (const char *__path, int __amode);
unsigned alarm (unsigned __secs);
int chdir (const char *__path);
int chmod (const char *__path, mode_t __mode);

int chown (const char *__path, uid_t __owner, gid_t __group);


int chroot (const char *__path);

int close (int __fildes);

size_t confstr (int __name, char *__buf, size_t __len);


char * crypt (const char *__key, const char *__salt);
# 44 "/usr/include/sys/unistd.h" 3 4
int daemon (int nochdir, int noclose);

int dup (int __fildes);
int dup2 (int __fildes, int __fildes2);

int dup3 (int __fildes, int __fildes2, int flags);
int eaccess (const char *__path, int __mode);


void encrypt (char *__block, int __edflag);


void endusershell (void);


int euidaccess (const char *__path, int __mode);

int execl (const char *__path, const char *, ...);
int execle (const char *__path, const char *, ...);
int execlp (const char *__file, const char *, ...);

int execlpe (const char *__file, const char *, ...);

int execv (const char *__path, char * const __argv[]);
int execve (const char *__path, char * const __argv[], char * const __envp[]);
int execvp (const char *__file, char * const __argv[]);

int execvpe (const char *__file, char * const __argv[], char * const __envp[]);


int faccessat (int __dirfd, const char *__path, int __mode, int __flags);


int fchdir (int __fildes);


int fchmod (int __fildes, mode_t __mode);



int fchown (int __fildes, uid_t __owner, gid_t __group);



int fchownat (int __dirfd, const char *__path, uid_t __owner, gid_t __group, int __flags);


int fexecve (int __fd, char * const __argv[], char * const __envp[]);

pid_t fork (void);
long fpathconf (int __fd, int __name);
int fsync (int __fd);

int fdatasync (int __fd);


char * get_current_dir_name (void);

char * getcwd (char *__buf, size_t __size);

int getdomainname (char *__name, size_t __len);


int getentropy (void *, size_t);


gid_t getegid (void);
uid_t geteuid (void);
gid_t getgid (void);

int getgroups (int __gidsetsize, gid_t __grouplist[]);

long gethostid (void);

char * getlogin (void);

int getlogin_r (char *name, size_t namesize) ;


char * getpass (const char *__prompt);
int getpagesize (void);


int getpeereid (int, uid_t *, gid_t *);


pid_t getpgid (pid_t);

pid_t getpgrp (void);
pid_t getpid (void);
pid_t getppid (void);

pid_t getsid (pid_t);


uid_t getuid (void);


char * getusershell (void);


char * getwd (char *__buf);


int iruserok (unsigned long raddr, int superuser, const char *ruser, const char *luser);

int isatty (int __fildes);

int issetugid (void);



int lchown (const char *__path, uid_t __owner, gid_t __group);


int link (const char *__path1, const char *__path2);

int linkat (int __dirfd1, const char *__path1, int __dirfd2, const char *__path2, int __flags);


int nice (int __nice_value);


off_t lseek (int __fildes, off_t __offset, int __whence);






int lockf (int __fd, int __cmd, off_t __len);

long pathconf (const char *__path, int __name);
int pause (void);

int pthread_atfork (void (*)(void), void (*)(void), void (*)(void));

int pipe (int __fildes[2]);

int pipe2 (int __fildes[2], int flags);


ssize_t pread (int __fd, void *__buf, size_t __nbytes, off_t __offset);
ssize_t pwrite (int __fd, const void *__buf, size_t __nbytes, off_t __offset);

_ssize_t read (int __fd, void *__buf, size_t __nbyte);

int rresvport (int *__alport);
int revoke (char *__path);

int rmdir (const char *__path);

int ruserok (const char *rhost, int superuser, const char *ruser, const char *luser);


void * sbrk (ptrdiff_t __incr);



int setegid (gid_t __gid);
int seteuid (uid_t __uid);

int setgid (gid_t __gid);


int setgroups (int ngroups, const gid_t *grouplist);


int sethostname (const char *, size_t);

int setpgid (pid_t __pid, pid_t __pgid);

int setpgrp (void);


int setregid (gid_t __rgid, gid_t __egid);
int setreuid (uid_t __ruid, uid_t __euid);

pid_t setsid (void);

int setuid (uid_t __uid);


void setusershell (void);

unsigned sleep (unsigned int __seconds);

void swab (const void *
# 231 "/usr/include/sys/unistd.h"
                         __restrict
# 231 "/usr/include/sys/unistd.h" 3 4
                                   , void *
# 231 "/usr/include/sys/unistd.h"
                                           __restrict
# 231 "/usr/include/sys/unistd.h" 3 4
                                                     , ssize_t);

long sysconf (int __name);
pid_t tcgetpgrp (int __fildes);
int tcsetpgrp (int __fildes, pid_t __pgrp_id);
char * ttyname (int __fildes);
int ttyname_r (int, char *, size_t);
int unlink (const char *__path);

int usleep (useconds_t __useconds);


int vhangup (void);

_ssize_t write (int __fd, const void *__buf, size_t __nbyte);



# 1 "/usr/include/getopt.h" 1 3 4
# 45 "/usr/include/getopt.h" 3 4
extern int __attribute__((dllimport)) opterr;
extern int __attribute__((dllimport)) optind;
extern int __attribute__((dllimport)) optopt;
extern int __attribute__((dllimport)) optreset;
extern char __attribute__((dllimport)) *optarg;


int getopt (int, char * const *, const char *);
# 250 "/usr/include/sys/unistd.h" 2 3 4
# 259 "/usr/include/sys/unistd.h" 3 4
pid_t vfork (void);
# 283 "/usr/include/sys/unistd.h" 3 4
int ftruncate (int __fd, off_t __length);


int truncate (const char *, off_t __length);




int getdtablesize (void);


useconds_t ualarm (useconds_t __useconds, useconds_t __interval);





 int gethostname (char *__name, size_t __len);




int setdtablesize (int);



void sync (void);



ssize_t readlink (const char *
# 313 "/usr/include/sys/unistd.h"
                             __restrict 
# 313 "/usr/include/sys/unistd.h" 3 4
                                        __path,
                          char *
# 314 "/usr/include/sys/unistd.h"
                               __restrict 
# 314 "/usr/include/sys/unistd.h" 3 4
                                          __buf, size_t __buflen);
int symlink (const char *__name1, const char *__name2);


ssize_t readlinkat (int __dirfd1, const char *
# 318 "/usr/include/sys/unistd.h"
                                                    __restrict 
# 318 "/usr/include/sys/unistd.h" 3 4
                                                               __path,
                            char *
# 319 "/usr/include/sys/unistd.h"
                                 __restrict 
# 319 "/usr/include/sys/unistd.h" 3 4
                                            __buf, size_t __buflen);
int symlinkat (const char *, int, const char *);
int unlinkat (int, const char *, int);
# 5 "/usr/include/unistd.h" 2 3 4
# 27 "./include/grub/util/misc.h" 2

# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 29 "./include/grub/util/misc.h" 2


# 1 "./include/grub/emu/misc.h" 1
# 22 "./include/grub/emu/misc.h"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 23 "./include/grub/emu/misc.h" 2






# 1 "/usr/include/sys/fcntl.h" 1 3 4


# 1 "/usr/include/sys/_default_fcntl.h" 1 3 4
# 187 "/usr/include/sys/_default_fcntl.h" 3 4
struct eflock {
 short l_type;
 short l_whence;
 long l_start;
 long l_len;
 short l_pid;
 short l_xxx;
 long l_rpid;
 long l_rsys;
};



# 1 "/usr/include/sys/stat.h" 1 3 4
# 9 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 16 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 17 "/usr/include/time.h" 2 3 4


# 1 "/usr/include/machine/time.h" 1 3 4
# 20 "/usr/include/time.h" 2 3 4
# 35 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;

  long tm_gmtoff;


  const char *tm_zone;

};

clock_t clock (void);
double difftime (time_t _time2, time_t _time1);
time_t mktime (struct tm *_timeptr);
time_t time (time_t *_timer);

char *asctime (const struct tm *_tblock);
char *ctime (const time_t *_time);
struct tm *gmtime (const time_t *_timer);
struct tm *localtime (const time_t *_timer);

size_t strftime (char *
# 66 "/usr/include/time.h"
                         __restrict 
# 66 "/usr/include/time.h" 3 4
                                    _s,
        size_t _maxsize, const char *
# 67 "/usr/include/time.h"
                                    __restrict 
# 67 "/usr/include/time.h" 3 4
                                               _fmt,
        const struct tm *
# 68 "/usr/include/time.h"
                        __restrict 
# 68 "/usr/include/time.h" 3 4
                                   _t);


extern size_t strftime_l (char *
# 71 "/usr/include/time.h"
                               __restrict 
# 71 "/usr/include/time.h" 3 4
                                          _s, size_t _maxsize,
     const char *
# 72 "/usr/include/time.h"
                __restrict 
# 72 "/usr/include/time.h" 3 4
                           _fmt,
     const struct tm *
# 73 "/usr/include/time.h"
                     __restrict 
# 73 "/usr/include/time.h" 3 4
                                _t, locale_t _l);


char *asctime_r (const struct tm *
# 76 "/usr/include/time.h"
                                    __restrict
# 76 "/usr/include/time.h" 3 4
                                              ,
     char *
# 77 "/usr/include/time.h"
          __restrict
# 77 "/usr/include/time.h" 3 4
                    );
char *ctime_r (const time_t *, char *);
struct tm *gmtime_r (const time_t *
# 79 "/usr/include/time.h"
                                   __restrict
# 79 "/usr/include/time.h" 3 4
                                             ,
     struct tm *
# 80 "/usr/include/time.h"
               __restrict
# 80 "/usr/include/time.h" 3 4
                         );
struct tm *localtime_r (const time_t *
# 81 "/usr/include/time.h"
                                      __restrict
# 81 "/usr/include/time.h" 3 4
                                                ,
     struct tm *
# 82 "/usr/include/time.h"
               __restrict
# 82 "/usr/include/time.h" 3 4
                         );








char *strptime (const char *
# 91 "/usr/include/time.h"
                                __restrict
# 91 "/usr/include/time.h" 3 4
                                          ,
     const char *
# 92 "/usr/include/time.h"
                __restrict
# 92 "/usr/include/time.h" 3 4
                          ,
     struct tm *
# 93 "/usr/include/time.h"
               __restrict
# 93 "/usr/include/time.h" 3 4
                         );


char *strptime_l (const char *
# 96 "/usr/include/time.h"
                             __restrict
# 96 "/usr/include/time.h" 3 4
                                       , const char *
# 96 "/usr/include/time.h"
                                                     __restrict
# 96 "/usr/include/time.h" 3 4
                                                               ,
    struct tm *
# 97 "/usr/include/time.h"
              __restrict
# 97 "/usr/include/time.h" 3 4
                        , locale_t);



void tzset (void);

void _tzset_r (struct _reent *);

typedef struct __tzrule_struct
{
  char ch;
  int m;
  int n;
  int d;
  int s;
  time_t change;
  long offset;
} __tzrule_type;

typedef struct __tzinfo_struct
{
  int __tznorth;
  int __tzyear;
  __tzrule_type __tzrule[2];
} __tzinfo_type;

__tzinfo_type *__gettzinfo (void);
# 154 "/usr/include/time.h" 3 4
extern __attribute__((dllimport)) long _timezone;
extern __attribute__((dllimport)) int _daylight;


extern __attribute__((dllimport)) char *_tzname[2];
# 173 "/usr/include/time.h" 3 4
# 1 "/usr/include/cygwin/time.h" 1 3 4
# 17 "/usr/include/cygwin/time.h" 3 4
int __attribute__((__cdecl__)) clock_setres (clockid_t, struct timespec *);


time_t __attribute__((__cdecl__)) timelocal (struct tm *);
time_t __attribute__((__cdecl__)) timegm (struct tm *);




extern int stime (const time_t *);



extern int daylight __asm__ ( "_daylight");


extern long timezone __asm__ ( "_timezone");
# 174 "/usr/include/time.h" 2 3 4
# 186 "/usr/include/time.h" 3 4
int clock_settime (clockid_t clock_id, const struct timespec *tp);
int clock_gettime (clockid_t clock_id, struct timespec *tp);
int clock_getres (clockid_t clock_id, struct timespec *res);



int timer_create (clockid_t clock_id,
  struct sigevent *
# 193 "/usr/include/time.h"
                  __restrict 
# 193 "/usr/include/time.h" 3 4
                             evp,
 timer_t *
# 194 "/usr/include/time.h"
         __restrict 
# 194 "/usr/include/time.h" 3 4
                    timerid);



int timer_delete (timer_t timerid);



int timer_settime (timer_t timerid, int flags,
 const struct itimerspec *
# 203 "/usr/include/time.h"
                         __restrict 
# 203 "/usr/include/time.h" 3 4
                                    value,
 struct itimerspec *
# 204 "/usr/include/time.h"
                   __restrict 
# 204 "/usr/include/time.h" 3 4
                              ovalue);
int timer_gettime (timer_t timerid, struct itimerspec *value);
int timer_getoverrun (timer_t timerid);



int nanosleep (const struct timespec *rqtp, struct timespec *rmtp);
# 223 "/usr/include/time.h" 3 4
int clock_nanosleep (clockid_t clock_id, int flags,
 const struct timespec *rqtp, struct timespec *rmtp);
# 297 "/usr/include/time.h" 3 4
int clock_getcpuclockid (pid_t pid, clockid_t *clock_id);







int clock_setenable_attr (clockid_t clock_id, int attr);
int clock_getenable_attr (clockid_t clock_id, int *attr);
# 10 "/usr/include/sys/stat.h" 2 3 4
# 22 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/cygwin/stat.h" 1 3 4
# 17 "/usr/include/cygwin/stat.h" 3 4
struct stat
{
  dev_t st_dev;
  ino_t st_ino;
  mode_t st_mode;
  nlink_t st_nlink;
  uid_t st_uid;
  gid_t st_gid;
  dev_t st_rdev;
  off_t st_size;
  timestruc_t st_atim;
  timestruc_t st_mtim;
  timestruc_t st_ctim;
  blksize_t st_blksize;
  blkcnt_t st_blocks;
  timestruc_t st_birthtim;
};
# 23 "/usr/include/sys/stat.h" 2 3 4
# 147 "/usr/include/sys/stat.h" 3 4
int chmod (const char *__path, mode_t __mode );
int fchmod (int __fd, mode_t __mode);
int fstat (int __fd, struct stat *__sbuf );
int mkdir (const char *_path, mode_t __mode );
int mkfifo (const char *__path, mode_t __mode );
int stat (const char *
# 152 "/usr/include/sys/stat.h"
                     __restrict 
# 152 "/usr/include/sys/stat.h" 3 4
                                __path, struct stat *
# 152 "/usr/include/sys/stat.h"
                                                     __restrict 
# 152 "/usr/include/sys/stat.h" 3 4
                                                                __sbuf );
mode_t umask (mode_t __mask );


int lstat (const char *
# 156 "/usr/include/sys/stat.h"
                      __restrict 
# 156 "/usr/include/sys/stat.h" 3 4
                                 __path, struct stat *
# 156 "/usr/include/sys/stat.h"
                                                      __restrict 
# 156 "/usr/include/sys/stat.h" 3 4
                                                                 __buf );
int mknod (const char *__path, mode_t __mode, dev_t __dev );



int fchmodat (int, const char *, mode_t, int);
int fstatat (int, const char *
# 162 "/usr/include/sys/stat.h"
                             __restrict 
# 162 "/usr/include/sys/stat.h" 3 4
                                        , struct stat *
# 162 "/usr/include/sys/stat.h"
                                                       __restrict
# 162 "/usr/include/sys/stat.h" 3 4
                                                                 , int);
int mkdirat (int, const char *, mode_t);
int mkfifoat (int, const char *, mode_t);
int mknodat (int, const char *, mode_t, dev_t);
int utimensat (int, const char *, const struct timespec *, int);


int futimens (int, const struct timespec *);
# 201 "/usr/include/sys/_default_fcntl.h" 2 3 4

extern int open (const char *, int, ...);

extern int openat (int, const char *, int, ...);

extern int creat (const char *, mode_t);
extern int fcntl (int, int, ...);

extern int flock (int, int);


# 1 "/usr/include/sys/time.h" 1 3 4
# 50 "/usr/include/sys/time.h" 3 4
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 63 "/usr/include/sys/time.h" 3 4
struct bintime {
 time_t sec;
 uint64_t frac;
};

static __inline void
bintime_addx(struct bintime *_bt, uint64_t _x)
{
 uint64_t _u;

 _u = _bt->frac;
 _bt->frac += _x;
 if (_u > _bt->frac)
  _bt->sec++;
}

static __inline void
bintime_add(struct bintime *_bt, const struct bintime *_bt2)
{
 uint64_t _u;

 _u = _bt->frac;
 _bt->frac += _bt2->frac;
 if (_u > _bt->frac)
  _bt->sec++;
 _bt->sec += _bt2->sec;
}

static __inline void
bintime_sub(struct bintime *_bt, const struct bintime *_bt2)
{
 uint64_t _u;

 _u = _bt->frac;
 _bt->frac -= _bt2->frac;
 if (_u < _bt->frac)
  _bt->sec--;
 _bt->sec -= _bt2->sec;
}

static __inline void
bintime_mul(struct bintime *_bt, u_int _x)
{
 uint64_t _p1, _p2;

 _p1 = (_bt->frac & 0xffffffffull) * _x;
 _p2 = (_bt->frac >> 32) * _x + (_p1 >> 32);
 _bt->sec *= _x;
 _bt->sec += (_p2 >> 32);
 _bt->frac = (_p2 << 32) | (_p1 & 0xffffffffull);
}

static __inline void
bintime_shift(struct bintime *_bt, int _exp)
{

 if (_exp > 0) {
  _bt->sec <<= _exp;
  _bt->sec |= _bt->frac >> (64 - _exp);
  _bt->frac <<= _exp;
 } else if (_exp < 0) {
  _bt->frac >>= -_exp;
  _bt->frac |= (uint64_t)_bt->sec << (64 + _exp);
  _bt->sec >>= -_exp;
 }
}
# 144 "/usr/include/sys/time.h" 3 4
static __inline int
sbintime_getsec(sbintime_t _sbt)
{

 return (_sbt >> 32);
}

static __inline sbintime_t
bttosbt(const struct bintime _bt)
{

 return (((sbintime_t)_bt.sec << 32) + (_bt.frac >> 32));
}

static __inline struct bintime
sbttobt(sbintime_t _sbt)
{
 struct bintime _bt;

 _bt.sec = _sbt >> 32;
 _bt.frac = _sbt << 32;
 return (_bt);
}
# 182 "/usr/include/sys/time.h" 3 4
static __inline void
bintime2timespec(const struct bintime *_bt, struct timespec *_ts)
{

 _ts->tv_sec = _bt->sec;
 _ts->tv_nsec = ((uint64_t)1000000000 *
     (uint32_t)(_bt->frac >> 32)) >> 32;
}

static __inline void
timespec2bintime(const struct timespec *_ts, struct bintime *_bt)
{

 _bt->sec = _ts->tv_sec;

 _bt->frac = _ts->tv_nsec * (uint64_t)18446744073LL;
}

static __inline void
bintime2timeval(const struct bintime *_bt, struct timeval *_tv)
{

 _tv->tv_sec = _bt->sec;
 _tv->tv_usec = ((uint64_t)1000000 * (uint32_t)(_bt->frac >> 32)) >> 32;
}

static __inline void
timeval2bintime(const struct timeval *_tv, struct bintime *_bt)
{

 _bt->sec = _tv->tv_sec;

 _bt->frac = _tv->tv_usec * (uint64_t)18446744073709LL;
}

static __inline struct timespec
sbttots(sbintime_t _sbt)
{
 struct timespec _ts;

 _ts.tv_sec = _sbt >> 32;
 _ts.tv_nsec = ((uint64_t)1000000000 * (uint32_t)_sbt) >> 32;
 return (_ts);
}

static __inline sbintime_t
tstosbt(struct timespec _ts)
{

 return (((sbintime_t)_ts.tv_sec << 32) +
     (_ts.tv_nsec * (((uint64_t)1 << 63) / 500000000) >> 32));
}

static __inline struct timeval
sbttotv(sbintime_t _sbt)
{
 struct timeval _tv;

 _tv.tv_sec = _sbt >> 32;
 _tv.tv_usec = ((uint64_t)1000000 * (uint32_t)_sbt) >> 32;
 return (_tv);
}

static __inline sbintime_t
tvtosbt(struct timeval _tv)
{

 return (((sbintime_t)_tv.tv_sec << 32) +
     (_tv.tv_usec * (((uint64_t)1 << 63) / 500000) >> 32));
}
# 262 "/usr/include/sys/time.h" 3 4
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};





int utimes (const char *__path, const struct timeval *__tvp);


int adjtime (const struct timeval *, struct timeval *);
int futimes (int, const struct timeval *);
int lutimes (const char *, const struct timeval *);
int settimeofday (const struct timeval *, const struct timezone *);



int getitimer (int __which, struct itimerval *__value);
int setitimer (int __which, const struct itimerval *
# 282 "/usr/include/sys/time.h"
                                                   __restrict 
# 282 "/usr/include/sys/time.h" 3 4
                                                              __value,
     struct itimerval *
# 283 "/usr/include/sys/time.h"
                      __restrict 
# 283 "/usr/include/sys/time.h" 3 4
                                 __ovalue);


int gettimeofday (struct timeval *
# 286 "/usr/include/sys/time.h"
                                 __restrict 
# 286 "/usr/include/sys/time.h" 3 4
                                            __p,
     void *
# 287 "/usr/include/sys/time.h"
          __restrict 
# 287 "/usr/include/sys/time.h" 3 4
                     __tz);


int futimesat (int, const char *, const struct timeval [2]);









# 1 "/usr/include/machine/_time.h" 1 3 4
# 301 "/usr/include/sys/time.h" 2 3 4
# 213 "/usr/include/sys/_default_fcntl.h" 2 3 4
extern int futimesat (int, const char *, const struct timeval *);
# 4 "/usr/include/sys/fcntl.h" 2 3 4
# 30 "./include/grub/emu/misc.h" 2
# 1 "/usr/include/sys/cygwin.h" 1 3 4
# 14 "/usr/include/sys/cygwin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 11 "/usr/include/limits.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 12 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 2 3 4
# 15 "/usr/include/sys/cygwin.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 13 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/sys/_intsup.h" 1 3 4
# 35 "/usr/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
# 187 "/usr/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
# 14 "/usr/include/stdint.h" 2 3 4







typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "/usr/include/stdint.h" 3 4
  typedef signed char int_fast8_t;
  typedef unsigned char uint_fast8_t;
# 61 "/usr/include/stdint.h" 3 4
  typedef long int int_fast16_t;
  typedef long unsigned int uint_fast16_t;
# 71 "/usr/include/stdint.h" 3 4
  typedef long int int_fast32_t;
  typedef long unsigned int uint_fast32_t;
# 81 "/usr/include/stdint.h" 3 4
  typedef long int int_fast64_t;
  typedef long unsigned int uint_fast64_t;
# 10 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdint.h" 2 3 4
# 16 "/usr/include/sys/cygwin.h" 2 3 4
# 47 "/usr/include/sys/cygwin.h" 3 4
enum
{
  CCP_POSIX_TO_WIN_A = 0,
  CCP_POSIX_TO_WIN_W,
  CCP_WIN_A_TO_POSIX,
  CCP_WIN_W_TO_POSIX,

  CCP_CONVTYPE_MASK = 3,


  CCP_ABSOLUTE = 0,
  CCP_RELATIVE = 0x100,
  CCP_PROC_CYGDRIVE = 0x200,


  CCP_CONVFLAGS_MASK = 0x300,
};
typedef unsigned int cygwin_conv_path_t;
# 76 "/usr/include/sys/cygwin.h" 3 4
extern ssize_t cygwin_conv_path (cygwin_conv_path_t what, const void *from,
     void *to, size_t size);

extern ssize_t cygwin_conv_path_list (cygwin_conv_path_t what, const void *from,
     void *to, size_t size);



extern void *cygwin_create_path (cygwin_conv_path_t what, const void *from);

extern pid_t cygwin_winpid_to_pid (int);
extern int cygwin_posix_path_list_p (const char *);
extern void cygwin_split_path (const char *, char *, char *);

struct __cygwin_perfile
{
  const char *name;
  unsigned flags;
};




typedef enum
  {
    CW_LOCK_PINFO,
    CW_UNLOCK_PINFO,
    CW_GETTHREADNAME,
    CW_GETPINFO,
    CW_SETPINFO,
    CW_SETTHREADNAME,
    CW_GETVERSIONINFO,
    CW_READ_V1_MOUNT_TABLES,
    CW_USER_DATA,
    CW_PERFILE,
    CW_GET_CYGDRIVE_PREFIXES,
    CW_GETPINFO_FULL,
    CW_INIT_EXCEPTIONS,
    CW_GET_CYGDRIVE_INFO,
    CW_SET_CYGWIN_REGISTRY_NAME,
    CW_GET_CYGWIN_REGISTRY_NAME,
    CW_STRACE_TOGGLE,
    CW_STRACE_ACTIVE,
    CW_CYGWIN_PID_TO_WINPID,
    CW_EXTRACT_DOMAIN_AND_USER,
    CW_CMDLINE,
    CW_CHECK_NTSEC,
    CW_GET_ERRNO_FROM_WINERROR,
    CW_GET_POSIX_SECURITY_ATTRIBUTE,
    CW_GET_SHMLBA,
    CW_GET_UID_FROM_SID,
    CW_GET_GID_FROM_SID,
    CW_GET_BINMODE,
    CW_HOOK,
    CW_ARGV,
    CW_ENVP,
    CW_DEBUG_SELF,
    CW_SYNC_WINENV,
    CW_CYGTLS_PADSIZE,
    CW_SET_DOS_FILE_WARNING,
    CW_SET_PRIV_KEY,
    CW_SETERRNO,
    CW_EXIT_PROCESS,
    CW_SET_EXTERNAL_TOKEN,
    CW_GET_INSTKEY,
    CW_INT_SETLOCALE,
    CW_CVT_MNT_OPTS,
    CW_LST_MNT_OPTS,
    CW_STRERROR,
    CW_CVT_ENV_TO_WINENV,
    CW_ALLOC_DRIVE_MAP,
    CW_MAP_DRIVE_MAP,
    CW_FREE_DRIVE_MAP,
    CW_SETENT,
    CW_GETENT,
    CW_ENDENT,
    CW_GETNSSSEP,
    CW_GETPWSID,
    CW_GETGRSID,
    CW_CYGNAME_FROM_WINNAME,
    CW_FIXED_ATEXIT,
    CW_GETNSS_PWD_SRC,
    CW_GETNSS_GRP_SRC,
    CW_EXCEPTION_RECORD_FROM_SIGINFO_T,
    CW_CYGHEAP_PROFTHR_ALL,
  } cygwin_getinfo_types;
# 225 "/usr/include/sys/cygwin.h" 3 4
enum
{
  CW_TOKEN_IMPERSONATION = 0,
  CW_TOKEN_RESTRICTED = 1
};


enum
{
  NSS_SRC_FILES = 1,
  NSS_SRC_DB = 2
};


enum nss_enum_t
{
  ENUM_NONE = 0x00,
  ENUM_CACHE = 0x01,
  ENUM_FILES = 0x02,
  ENUM_BUILTIN = 0x04,
  ENUM_LOCAL = 0x08,
  ENUM_PRIMARY = 0x10,
  ENUM_TDOMS = 0x20,
  ENUM_TDOMS_ALL = 0x40,
  ENUM_ALL = 0x7f
};


uintptr_t cygwin_internal (cygwin_getinfo_types, ...);


enum
{
  PID_IN_USE = 0x00001,
  PID_UNUSED = 0x00002,
  PID_STOPPED = 0x00004,
  PID_TTYIN = 0x00008,
  PID_TTYOU = 0x00010,
  PID_NOTCYGWIN = 0x00020,
  PID_ACTIVE = 0x00040,
  PID_CYGPARENT = 0x00080,
  PID_MAP_RW = 0x00100,
  PID_MYSELF = 0x00200,
  PID_NOCLDSTOP = 0x00400,
  PID_INITIALIZING = 0x00800,
  PID_NEW = 0x01000,
  PID_ALLPIDS = 0x02000,
  PID_EXECED = 0x04000,
  PID_NOREDIR = 0x08000,
  PID_EXITED = 0x40000000,
  PID_REAPED = 0x80000000
};
# 31 "./include/grub/emu/misc.h" 2
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 1 3 4
# 32 "./include/grub/emu/misc.h" 2
# 44 "./include/grub/emu/misc.h"

# 44 "./include/grub/emu/misc.h"
extern int verbosity;
extern const char *program_name;

void grub_emu_init (void);
void grub_init_all (void);
void grub_fini_all (void);
void grub_emu_post_init (void);

void grub_find_zpool_from_dir (const char *dir,
          char **poolname, char **poolfs);

char *grub_make_system_path_relative_to_its_root (const char *path)
  __attribute__ ((warn_unused_result));
int
grub_util_device_is_mapped (const char *dev);

void * xmalloc (grub_size_t size) __attribute__ ((warn_unused_result));
void * xrealloc (void *ptr, grub_size_t size) __attribute__ ((warn_unused_result));
char * xstrdup (const char *str) __attribute__ ((warn_unused_result));
char * xasprintf (const char *fmt, ...) __attribute__ ((format (printf, 1, 2))) __attribute__ ((warn_unused_result));

void grub_util_warn (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
void grub_util_info (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
void grub_util_error (const char *fmt, ...) __attribute__ ((format (printf, 1, 2), noreturn));
# 77 "./include/grub/emu/misc.h"
extern char * canonicalize_file_name (const char *path);
# 32 "./include/grub/util/misc.h" 2

char *grub_util_get_path (const char *dir, const char *file);
size_t grub_util_get_image_size (const char *path);
char *grub_util_read_image (const char *path);
void grub_util_load_image (const char *path, char *buf);
void grub_util_write_image (const char *img, size_t size, FILE *out,
       const char *name);
void grub_util_write_image_at (const void *img, size_t size, off_t offset,
          FILE *out, const char *name);
# 55 "./include/grub/util/misc.h"
char *make_system_path_relative_to_its_root (const char *path);

char *canonicalize_file_name (const char *path);

void grub_util_init_nls (void);
# 27 "grub-core/kern/emu/hostfs.c" 2
# 1 "./include/grub/emu/hostdisk.h" 1
# 27 "./include/grub/emu/hostdisk.h"
void grub_util_biosdisk_init (const char *dev_map);
void grub_util_biosdisk_fini (void);
char *grub_util_biosdisk_get_grub_dev (const char *os_dev);
const char *grub_util_biosdisk_get_osdev (grub_disk_t disk);
int grub_util_biosdisk_is_present (const char *name);
int grub_util_biosdisk_is_floppy (grub_disk_t disk);
const char *
grub_util_biosdisk_get_compatibility_hint (grub_disk_t disk);
grub_err_t grub_util_biosdisk_flush (struct grub_disk *disk);
void grub_util_pull_device (const char *osname);
grub_err_t
grub_util_fd_seek (int fd, const char *name, grub_uint64_t sector);
ssize_t grub_util_fd_read (int fd, char *buf, size_t len);
ssize_t grub_util_fd_write (int fd, const char *buf, size_t len);
grub_err_t
grub_cryptodisk_cheat_mount (const char *sourcedev, const char *cheat);
void grub_util_cryptodisk_print_uuid (grub_disk_t disk);
char *
grub_util_get_ldm (grub_disk_t disk, grub_disk_addr_t start);
int
grub_util_is_ldm (grub_disk_t disk);

grub_err_t
grub_util_ldm_embed (struct grub_disk *disk, unsigned int *nsectors,
       unsigned int max_nsectors,
       grub_embed_type_t embed_type,
       grub_disk_addr_t **sectors);

grub_disk_addr_t
grub_hostdisk_find_partition_start (const char *dev);
const char *
grub_hostdisk_os_dev_to_grub_drive (const char *os_dev, int add);


grub_uint64_t
grub_util_get_fd_size (int fd, const char *name, unsigned *log_secsize);


char *
grub_util_get_os_disk (const char *os_dev);
# 28 "grub-core/kern/emu/hostfs.c" 2


# 1 "/usr/include/dirent.h" 1 3 4






# 1 "/usr/include/sys/dirent.h" 1 3 4
# 14 "/usr/include/sys/dirent.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/limits.h" 1 3 4
# 15 "/usr/include/sys/dirent.h" 2 3 4








# 22 "/usr/include/sys/dirent.h" 3 4
struct dirent
{
  uint32_t __d_version;
  ino_t d_ino;
  unsigned char d_type;
  unsigned char __d_unused1[3];
  __uint32_t __d_internal1;
  char d_name[255 + 1];
};
# 46 "/usr/include/sys/dirent.h" 3 4
typedef struct __DIR
{

  unsigned long __d_cookie;
  struct dirent *__d_dirent;
  char *__d_dirname;
  __int32_t __d_position;
  int __d_fd;
  uintptr_t __d_internal;
  void *__handle;
  void *__fh;
  unsigned __flags;
} DIR;




DIR *opendir (const char *);
DIR *fdopendir (int);
struct dirent *readdir (DIR *);
int readdir_r (DIR * 
# 66 "/usr/include/sys/dirent.h"
                    __restrict
# 66 "/usr/include/sys/dirent.h" 3 4
                              , struct dirent * 
# 66 "/usr/include/sys/dirent.h"
                                                __restrict
# 66 "/usr/include/sys/dirent.h" 3 4
                                                          ,
        struct dirent ** 
# 67 "/usr/include/sys/dirent.h"
                        __restrict
# 67 "/usr/include/sys/dirent.h" 3 4
                                  );
void rewinddir (DIR *);
int closedir (DIR *);

int dirfd (DIR *);



long telldir (DIR *);
void seekdir (DIR *, long loc);




int scandir (const char *__dir,
      struct dirent ***__namelist,
      int (*select) (const struct dirent *),
      int (*compar) (const struct dirent **, const struct dirent **));
int alphasort (const struct dirent **__a, const struct dirent **__b);



int scandirat (int __dirfd, const char *__dir, struct dirent ***__namelist,
        int (*select) (const struct dirent *),
        int (*compar) (const struct dirent **, const struct dirent **));
int versionsort (const struct dirent **__a, const struct dirent **__b);





enum
{
  DT_UNKNOWN = 0,

  DT_FIFO = 1,

  DT_CHR = 2,

  DT_DIR = 4,

  DT_BLK = 6,

  DT_REG = 8,

  DT_LNK = 10,

  DT_SOCK = 12,

  DT_WHT = 14

};
# 8 "/usr/include/dirent.h" 2 3 4
# 31 "grub-core/kern/emu/hostfs.c" 2

# 1 "/usr/include/errno.h" 1 3 4




typedef int error_t;



# 1 "/usr/include/sys/errno.h" 1 3 4
# 15 "/usr/include/sys/errno.h" 3 4
extern int *__errno (void);




extern __attribute__((dllimport)) const char * const _sys_errlist[];
extern __attribute__((dllimport)) int _sys_nerr;

extern __attribute__((dllimport)) const char * const sys_errlist[];
extern __attribute__((dllimport)) int sys_nerr;
extern __attribute__((dllimport)) char *program_invocation_name;
extern __attribute__((dllimport)) char *program_invocation_short_name;
# 10 "/usr/include/errno.h" 2 3 4
# 33 "grub-core/kern/emu/hostfs.c" 2




# 1 "/usr/include/string.h" 1 3 4
# 17 "/usr/include/string.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 18 "/usr/include/string.h" 2 3 4






# 1 "/usr/include/strings.h" 1 3 4
# 44 "/usr/include/strings.h" 3 4


int bcmp(const void *, const void *, size_t) __attribute__((__pure__));
void bcopy(const void *, void *, size_t);
void bzero(void *, size_t);


void explicit_bzero(void *, size_t);


int ffs(int) __attribute__((__const__));


int ffsl(long) __attribute__((__const__));
int ffsll(long long) __attribute__((__const__));
int fls(int) __attribute__((__const__));
int flsl(long) __attribute__((__const__));
int flsll(long long) __attribute__((__const__));


char *index(const char *, int) __attribute__((__pure__));
char *rindex(const char *, int) __attribute__((__pure__));

int strcasecmp(const char *, const char *) __attribute__((__pure__));
int strncasecmp(const char *, const char *, size_t) __attribute__((__pure__));


int strcasecmp_l (const char *, const char *, locale_t);
int strncasecmp_l (const char *, const char *, size_t, locale_t);


# 25 "/usr/include/string.h" 2 3 4




void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void *
# 31 "/usr/include/string.h"
                     __restrict
# 31 "/usr/include/string.h" 3 4
                               , const void *
# 31 "/usr/include/string.h"
                                             __restrict
# 31 "/usr/include/string.h" 3 4
                                                       , size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *
# 34 "/usr/include/string.h"
                    __restrict
# 34 "/usr/include/string.h" 3 4
                              , const char *
# 34 "/usr/include/string.h"
                                            __restrict
# 34 "/usr/include/string.h" 3 4
                                                      );
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *
# 38 "/usr/include/string.h"
                    __restrict
# 38 "/usr/include/string.h" 3 4
                              , const char *
# 38 "/usr/include/string.h"
                                            __restrict
# 38 "/usr/include/string.h" 3 4
                                                      );
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *
# 42 "/usr/include/string.h"
                     __restrict
# 42 "/usr/include/string.h" 3 4
                               , const char *
# 42 "/usr/include/string.h"
                                             __restrict
# 42 "/usr/include/string.h" 3 4
                                                       , size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *
# 44 "/usr/include/string.h"
                     __restrict
# 44 "/usr/include/string.h" 3 4
                               , const char *
# 44 "/usr/include/string.h"
                                             __restrict
# 44 "/usr/include/string.h" 3 4
                                                       , size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *
# 50 "/usr/include/string.h"
                    __restrict
# 50 "/usr/include/string.h" 3 4
                              , const char *
# 50 "/usr/include/string.h"
                                            __restrict
# 50 "/usr/include/string.h" 3 4
                                                      );

size_t strxfrm (char *
# 52 "/usr/include/string.h"
                      __restrict
# 52 "/usr/include/string.h" 3 4
                                , const char *
# 52 "/usr/include/string.h"
                                              __restrict
# 52 "/usr/include/string.h" 3 4
                                                        , size_t);


int strcoll_l (const char *, const char *, locale_t);
char *strerror_l (int, locale_t);
size_t strxfrm_l (char *
# 57 "/usr/include/string.h"
                        __restrict
# 57 "/usr/include/string.h" 3 4
                                  , const char *
# 57 "/usr/include/string.h"
                                                __restrict
# 57 "/usr/include/string.h" 3 4
                                                          , size_t, locale_t);


char *strtok_r (char *
# 60 "/usr/include/string.h"
                      __restrict
# 60 "/usr/include/string.h" 3 4
                                , const char *
# 60 "/usr/include/string.h"
                                              __restrict
# 60 "/usr/include/string.h" 3 4
                                                        , char **
# 60 "/usr/include/string.h"
                                                                 __restrict
# 60 "/usr/include/string.h" 3 4
                                                                           );


int timingsafe_bcmp (const void *, const void *, size_t);
int timingsafe_memcmp (const void *, const void *, size_t);


void * memccpy (void *
# 67 "/usr/include/string.h"
                      __restrict
# 67 "/usr/include/string.h" 3 4
                                , const void *
# 67 "/usr/include/string.h"
                                              __restrict
# 67 "/usr/include/string.h" 3 4
                                                        , int, size_t);


void * mempcpy (void *, const void *, size_t);
void * memmem (const void *, size_t, const void *, size_t);
void * memrchr (const void *, int, size_t);
void * rawmemchr (const void *, int);


char *stpcpy (char *
# 76 "/usr/include/string.h"
                    __restrict
# 76 "/usr/include/string.h" 3 4
                              , const char *
# 76 "/usr/include/string.h"
                                            __restrict
# 76 "/usr/include/string.h" 3 4
                                                      );
char *stpncpy (char *
# 77 "/usr/include/string.h"
                     __restrict
# 77 "/usr/include/string.h" 3 4
                               , const char *
# 77 "/usr/include/string.h"
                                             __restrict
# 77 "/usr/include/string.h" 3 4
                                                       , size_t);


char *strcasestr (const char *, const char *);
char *strchrnul (const char *, int);


char *strdup (const char *);

char *_strdup_r (struct _reent *, const char *);

char *strndup (const char *, size_t);

char *_strndup_r (struct _reent *, const char *, size_t);






char *strerror_r (int, char *, size_t);
# 112 "/usr/include/string.h" 3 4
char * _strerror_r (struct _reent *, int, int, int *);


size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);


size_t strnlen (const char *, size_t);


char *strsep (char **, const char *);


char *strnstr(const char *, const char *, size_t) __attribute__((__pure__));



char *strlwr (char *);
char *strupr (char *);



char *strsignal (int __signo);



int strtosigno (const char *__name);



int strverscmp (const char *, const char *);
# 172 "/usr/include/string.h" 3 4
char *__attribute__((__nonnull__ (1))) basename (const char *) __asm__("" "__gnu_basename");


# 1 "/usr/include/sys/string.h" 1 3 4
# 176 "/usr/include/string.h" 2 3 4


# 38 "grub-core/kern/emu/hostfs.c" 2


# 39 "grub-core/kern/emu/hostfs.c"
static int
is_dir (const char *path, const char *name)
{
  int len1 = strlen(path);
  int len2 = strlen(name);

  char pathname[len1 + 1 + len2 + 1 + 13];
  strcpy (pathname, path);


  if (len1 > 0 && pathname[len1 - 1] != '/')
    strcat (pathname, "/");

  strcat (pathname, name);

  struct stat st;
  if (stat (pathname, &st))
    return 0;
  return 
# 57 "grub-core/kern/emu/hostfs.c" 3 4
        (((
# 57 "grub-core/kern/emu/hostfs.c"
        st.st_mode
# 57 "grub-core/kern/emu/hostfs.c" 3 4
        )&0170000) == 0040000)
# 57 "grub-core/kern/emu/hostfs.c"
                            ;
}

struct grub_hostfs_data
{
  char *filename;
  FILE *f;
};

static grub_err_t
grub_hostfs_dir (grub_device_t device, const char *path,
   int (*hook) (const char *filename,
         const struct grub_dirhook_info *info))
{
  DIR *dir;


  if (grub_strcmp (device->disk->name, "host"))
    return grub_error (GRUB_ERR_BAD_FS, "not a hostfs");

  dir = opendir (path);
  if (! dir)
    return grub_error (GRUB_ERR_BAD_FILENAME,
         "can't open `%s': %s", path,
         strerror (
# 81 "grub-core/kern/emu/hostfs.c" 3 4
                  (*__errno())
# 81 "grub-core/kern/emu/hostfs.c"
                       ));

  while (1)
    {
      struct dirent *de;
      struct grub_dirhook_info info;
      grub_memset (&info, 0, sizeof (info));

      de = readdir (dir);
      if (! de)
 break;

      info.dir = !! is_dir (path, de->d_name);
      hook (de->d_name, &info);

    }

  closedir (dir);

  return GRUB_ERR_NONE;
}


static grub_err_t
grub_hostfs_open (struct grub_file *file, const char *name)
{
  FILE *f;
  struct grub_hostfs_data *data;

  f = fopen (name, "rb");
  if (! f)
    return grub_error (GRUB_ERR_BAD_FILENAME,
         "can't open `%s': %s", name,
         strerror (
# 114 "grub-core/kern/emu/hostfs.c" 3 4
                  (*__errno())
# 114 "grub-core/kern/emu/hostfs.c"
                       ));
  data = grub_malloc (sizeof (*data));
  if (!data)
    {
      fclose (f);
      return grub_errno;
    }
  data->filename = grub_strdup (name);
  if (!data->filename)
    {
      grub_free (data);
      fclose (f);
      return grub_errno;
    }

  data->f = f;

  file->data = data;




  file->size = grub_util_get_fd_size (fileno (f), name, 
# 136 "grub-core/kern/emu/hostfs.c" 3 4
                                                       ((void *)0)
# 136 "grub-core/kern/emu/hostfs.c"
                                                           );


  return GRUB_ERR_NONE;
}

static grub_ssize_t
grub_hostfs_read (grub_file_t file, char *buf, grub_size_t len)
{
  struct grub_hostfs_data *data;

  data = file->data;
  if (fseeko (data->f, file->offset, 
# 148 "grub-core/kern/emu/hostfs.c" 3 4
                                    0
# 148 "grub-core/kern/emu/hostfs.c"
                                            ) != 0)
    {
      grub_error (GRUB_ERR_OUT_OF_RANGE, "cannot seek `%s': %s",
    data->filename, strerror (
# 151 "grub-core/kern/emu/hostfs.c" 3 4
                             (*__errno())
# 151 "grub-core/kern/emu/hostfs.c"
                                  ));
      return -1;
    }

  unsigned int s = fread (buf, 1, len, data->f);
  if (s != len)
    grub_error (GRUB_ERR_FILE_READ_ERROR, "cannot read `%s': %s",
  data->filename, strerror (
# 158 "grub-core/kern/emu/hostfs.c" 3 4
                           (*__errno())
# 158 "grub-core/kern/emu/hostfs.c"
                                ));

  return (signed) s;
}

static grub_err_t
grub_hostfs_close (grub_file_t file)
{
  struct grub_hostfs_data *data;

  data = file->data;
  fclose (data->f);
  grub_free (data->filename);
  grub_free (data);

  return GRUB_ERR_NONE;
}

static grub_err_t
grub_hostfs_label (grub_device_t device __attribute ((unused)),
     char **label __attribute ((unused)))
{
  *label = 0;
  return GRUB_ERR_NONE;
}

static struct grub_fs grub_hostfs_fs =
  {
    .name = "hostfs",
    .dir = grub_hostfs_dir,
    .open = grub_hostfs_open,
    .read = grub_hostfs_read,
    .close = grub_hostfs_close,
    .label = grub_hostfs_label,
    .next = 0
  };



@MARKER@hostfs@
{
  grub_fs_register (&grub_hostfs_fs);
}

static void grub_mod_fini (void) __attribute__ ((used)); void grub_hostfs_fini (void); void grub_hostfs_fini (void) { grub_mod_fini (); } static void grub_mod_fini (void)
{
  grub_fs_unregister (&grub_hostfs_fs);
}
# 1 "grub-core/disk/host.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "grub-core/disk/host.c"
# 23 "grub-core/disk/host.c"
# 1 "./include/grub/dl.h" 1
# 23 "./include/grub/dl.h"
# 1 "./include/grub/symbol.h" 1
# 22 "./include/grub/symbol.h"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 23 "./include/grub/symbol.h" 2
# 24 "./include/grub/dl.h" 2

# 1 "./include/grub/err.h" 1
# 27 "./include/grub/err.h"
typedef enum
  {
    GRUB_ERR_NONE = 0,
    GRUB_ERR_TEST_FAILURE,
    GRUB_ERR_BAD_MODULE,
    GRUB_ERR_OUT_OF_MEMORY,
    GRUB_ERR_BAD_FILE_TYPE,
    GRUB_ERR_FILE_NOT_FOUND,
    GRUB_ERR_FILE_READ_ERROR,
    GRUB_ERR_BAD_FILENAME,
    GRUB_ERR_UNKNOWN_FS,
    GRUB_ERR_BAD_FS,
    GRUB_ERR_BAD_NUMBER,
    GRUB_ERR_OUT_OF_RANGE,
    GRUB_ERR_UNKNOWN_DEVICE,
    GRUB_ERR_BAD_DEVICE,
    GRUB_ERR_READ_ERROR,
    GRUB_ERR_WRITE_ERROR,
    GRUB_ERR_UNKNOWN_COMMAND,
    GRUB_ERR_INVALID_COMMAND,
    GRUB_ERR_BAD_ARGUMENT,
    GRUB_ERR_BAD_PART_TABLE,
    GRUB_ERR_UNKNOWN_OS,
    GRUB_ERR_BAD_OS,
    GRUB_ERR_NO_KERNEL,
    GRUB_ERR_BAD_FONT,
    GRUB_ERR_NOT_IMPLEMENTED_YET,
    GRUB_ERR_SYMLINK_LOOP,
    GRUB_ERR_BAD_COMPRESSED_DATA,
    GRUB_ERR_MENU,
    GRUB_ERR_TIMEOUT,
    GRUB_ERR_IO,
    GRUB_ERR_ACCESS_DENIED,
    GRUB_ERR_EXTRACTOR,
    GRUB_ERR_NET_BAD_ADDRESS,
    GRUB_ERR_NET_ROUTE_LOOP,
    GRUB_ERR_NET_NO_ROUTE,
    GRUB_ERR_NET_NO_ANSWER,
    GRUB_ERR_WAIT,
    GRUB_ERR_BUG,
    GRUB_ERR_NET_PORT_CLOSED,
    GRUB_ERR_NET_INVALID_RESPONSE,
    GRUB_ERR_NET_UNKNOWN_ERROR,
    GRUB_ERR_NET_PACKET_TOO_BIG,
    GRUB_ERR_NET_NO_DOMAIN,
    GRUB_ERR_EOF
  }
grub_err_t;

struct grub_error_saved
{
  grub_err_t grub_errno;
  char errmsg[256];
};

extern grub_err_t grub_errno;
extern char grub_errmsg[256];

grub_err_t grub_error (grub_err_t n, const char *fmt, ...);
void grub_fatal (const char *fmt, ...) __attribute__ ((noreturn));
void grub_error_push (void);
int grub_error_pop (void);
void grub_print_error (void);
extern int grub_err_printed_errors;
int grub_err_printf (const char *fmt, ...)
     __attribute__ ((format (printf, 1, 2)));
# 26 "./include/grub/dl.h" 2
# 1 "./include/grub/types.h" 1
# 22 "./include/grub/types.h"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 23 "./include/grub/types.h" 2
# 62 "./include/grub/types.h"
typedef signed char grub_int8_t;
typedef short grub_int16_t;
typedef int grub_int32_t;

typedef long grub_int64_t;




typedef unsigned char grub_uint8_t;
typedef unsigned short grub_uint16_t;
typedef unsigned grub_uint32_t;



typedef unsigned long grub_uint64_t;
# 89 "./include/grub/types.h"
typedef grub_uint64_t grub_addr_t;
typedef grub_uint64_t grub_size_t;
typedef grub_int64_t grub_ssize_t;
# 131 "./include/grub/types.h"
typedef grub_uint64_t grub_properly_aligned_t;




typedef grub_uint64_t grub_off_t;


typedef grub_uint64_t grub_disk_addr_t;
# 164 "./include/grub/types.h"
static inline grub_uint32_t grub_swap_bytes32(grub_uint32_t x)
{
 return __builtin_bswap32(x);
}

static inline grub_uint64_t grub_swap_bytes64(grub_uint64_t x)
{
 return __builtin_bswap64(x);
}
# 240 "./include/grub/types.h"
static inline grub_uint16_t grub_get_unaligned16 (const void *ptr)
{
  struct grub_unaligned_uint16_t
  {
    grub_uint16_t d;
  } __attribute__ ((packed));
  const struct grub_unaligned_uint16_t *dd
    = (const struct grub_unaligned_uint16_t *) ptr;
  return dd->d;
}

static inline void grub_set_unaligned16 (void *ptr, grub_uint16_t val)
{
  struct grub_unaligned_uint16_t
  {
    grub_uint16_t d;
  } __attribute__ ((packed));
  struct grub_unaligned_uint16_t *dd = (struct grub_unaligned_uint16_t *) ptr;
  dd->d = val;
}

static inline grub_uint32_t grub_get_unaligned32 (const void *ptr)
{
  struct grub_unaligned_uint32_t
  {
    grub_uint32_t d;
  } __attribute__ ((packed));
  const struct grub_unaligned_uint32_t *dd
    = (const struct grub_unaligned_uint32_t *) ptr;
  return dd->d;
}

static inline void grub_set_unaligned32 (void *ptr, grub_uint32_t val)
{
  struct grub_unaligned_uint32_t
  {
    grub_uint32_t d;
  } __attribute__ ((packed));
  struct grub_unaligned_uint32_t *dd = (struct grub_unaligned_uint32_t *) ptr;
  dd->d = val;
}

static inline grub_uint64_t grub_get_unaligned64 (const void *ptr)
{
  struct grub_unaligned_uint64_t
  {
    grub_uint64_t d;
  } __attribute__ ((packed));
  const struct grub_unaligned_uint64_t *dd
    = (const struct grub_unaligned_uint64_t *)ptr;
  return dd->d;
}

static inline void grub_set_unaligned64 (void *ptr, grub_uint64_t val)
{
  struct grub_unaligned_uint64_t
  {
    grub_uint64_t d;
  } __attribute__ ((packed));
  struct grub_unaligned_uint64_t *dd = (struct grub_unaligned_uint64_t *) ptr;
  dd->d = val;
}
# 27 "./include/grub/dl.h" 2
# 1 "./include/grub/elf.h" 1
# 28 "./include/grub/elf.h"
typedef grub_uint16_t Elf32_Half;
typedef grub_uint16_t Elf64_Half;


typedef grub_uint32_t Elf32_Word;
typedef grub_int32_t Elf32_Sword;
typedef grub_uint32_t Elf64_Word;
typedef grub_int32_t Elf64_Sword;


typedef grub_uint64_t Elf32_Xword;
typedef grub_int64_t Elf32_Sxword;
typedef grub_uint64_t Elf64_Xword;
typedef grub_int64_t Elf64_Sxword;


typedef grub_uint32_t Elf32_Addr;
typedef grub_uint64_t Elf64_Addr;


typedef grub_uint32_t Elf32_Off;
typedef grub_uint64_t Elf64_Off;


typedef grub_uint16_t Elf32_Section;
typedef grub_uint16_t Elf64_Section;


typedef Elf32_Half Elf32_Versym;
typedef Elf64_Half Elf64_Versym;






typedef struct
{
  unsigned char e_ident[(16)];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct
{
  unsigned char e_ident[(16)];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;
# 263 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct
{
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 362 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Section st_shndx;
} Elf32_Sym;

typedef struct
{
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Section st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct
{
  Elf32_Half si_boundto;
  Elf32_Half si_flags;
} Elf32_Syminfo;

typedef struct
{
  Elf64_Half si_boundto;
  Elf64_Half si_flags;
} Elf64_Syminfo;
# 476 "./include/grub/elf.h"
typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;






typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;



typedef struct
{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct
{
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;
# 521 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct
{
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 600 "./include/grub/elf.h"
typedef struct
{
  Elf32_Sword d_tag;
  union
    {
      Elf32_Word d_val;
      Elf32_Addr d_ptr;
    } d_un;
} Elf32_Dyn;

typedef struct
{
  Elf64_Sxword d_tag;
  union
    {
      Elf64_Xword d_val;
      Elf64_Addr d_ptr;
    } d_un;
} Elf64_Dyn;
# 764 "./include/grub/elf.h"
typedef struct
{
  Elf32_Half vd_version;
  Elf32_Half vd_flags;
  Elf32_Half vd_ndx;
  Elf32_Half vd_cnt;
  Elf32_Word vd_hash;
  Elf32_Word vd_aux;
  Elf32_Word vd_next;

} Elf32_Verdef;

typedef struct
{
  Elf64_Half vd_version;
  Elf64_Half vd_flags;
  Elf64_Half vd_ndx;
  Elf64_Half vd_cnt;
  Elf64_Word vd_hash;
  Elf64_Word vd_aux;
  Elf64_Word vd_next;

} Elf64_Verdef;
# 806 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word vda_name;
  Elf32_Word vda_next;

} Elf32_Verdaux;

typedef struct
{
  Elf64_Word vda_name;
  Elf64_Word vda_next;

} Elf64_Verdaux;




typedef struct
{
  Elf32_Half vn_version;
  Elf32_Half vn_cnt;
  Elf32_Word vn_file;

  Elf32_Word vn_aux;
  Elf32_Word vn_next;

} Elf32_Verneed;

typedef struct
{
  Elf64_Half vn_version;
  Elf64_Half vn_cnt;
  Elf64_Word vn_file;

  Elf64_Word vn_aux;
  Elf64_Word vn_next;

} Elf64_Verneed;
# 853 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word vna_hash;
  Elf32_Half vna_flags;
  Elf32_Half vna_other;
  Elf32_Word vna_name;
  Elf32_Word vna_next;

} Elf32_Vernaux;

typedef struct
{
  Elf64_Word vna_hash;
  Elf64_Half vna_flags;
  Elf64_Half vna_other;
  Elf64_Word vna_name;
  Elf64_Word vna_next;

} Elf64_Vernaux;
# 887 "./include/grub/elf.h"
typedef struct
{
  int a_type;
  union
    {
      long int a_val;
      void *a_ptr;
      void (*a_fcn) (void);
    } a_un;
} Elf32_auxv_t;

typedef struct
{
  long int a_type;
  union
    {
      long int a_val;
      void *a_ptr;
      void (*a_fcn) (void);
    } a_un;
} Elf64_auxv_t;
# 950 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;

typedef struct
{
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
# 997 "./include/grub/elf.h"
typedef struct
{
  Elf32_Xword m_value;
  Elf32_Word m_info;
  Elf32_Word m_poffset;
  Elf32_Half m_repeat;
  Elf32_Half m_stride;
} Elf32_Move;

typedef struct
{
  Elf64_Xword m_value;
  Elf64_Xword m_info;
  Elf64_Xword m_poffset;
  Elf64_Half m_repeat;
  Elf64_Half m_stride;
} Elf64_Move;
# 1361 "./include/grub/elf.h"
typedef union
{
  struct
    {
      Elf32_Word gt_current_g_value;
      Elf32_Word gt_unused;
    } gt_header;
  struct
    {
      Elf32_Word gt_g_value;
      Elf32_Word gt_bytes;
    } gt_entry;
} Elf32_gptab;



typedef struct
{
  Elf32_Word ri_gprmask;
  Elf32_Word ri_cprmask[4];
  Elf32_Sword ri_gp_value;
} Elf32_RegInfo;



typedef struct
{
  unsigned char kind;

  unsigned char size;
  Elf32_Section section;

  Elf32_Word info;
} Elf_Options;
# 1437 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word hwp_flags1;
  Elf32_Word hwp_flags2;
} Elf_Options_Hw;
# 1576 "./include/grub/elf.h"
typedef struct
{
  Elf32_Word l_name;
  Elf32_Word l_time_stamp;
  Elf32_Word l_checksum;
  Elf32_Word l_version;
  Elf32_Word l_flags;
} Elf32_Lib;

typedef struct
{
  Elf64_Word l_name;
  Elf64_Word l_time_stamp;
  Elf64_Word l_checksum;
  Elf64_Word l_version;
  Elf64_Word l_flags;
} Elf64_Lib;
# 1607 "./include/grub/elf.h"
typedef Elf32_Addr Elf32_Conflict;
# 28 "./include/grub/dl.h" 2
# 142 "./include/grub/dl.h"
struct grub_dl_segment
{
  struct grub_dl_segment *next;
  void *addr;
  grub_size_t size;
  unsigned section;
};
typedef struct grub_dl_segment *grub_dl_segment_t;

struct grub_dl;

struct grub_dl_dep
{
  struct grub_dl_dep *next;
  struct grub_dl *mod;
};
typedef struct grub_dl_dep *grub_dl_dep_t;
# 179 "./include/grub/dl.h"
typedef struct grub_dl *grub_dl_t;

grub_dl_t grub_dl_load_file (const char *filename);
grub_dl_t grub_dl_load (const char *name);
grub_dl_t grub_dl_load_core (void *addr, grub_size_t size);
int grub_dl_unload (grub_dl_t mod);
void grub_dl_unload_unneeded (void);
int grub_dl_ref (grub_dl_t mod);
int grub_dl_unref (grub_dl_t mod);
extern grub_dl_t grub_dl_head;



grub_dl_t grub_dl_get (const char *name);
grub_err_t grub_dl_register_symbol (const char *name, void *addr,
        int isfunc, grub_dl_t mod);

grub_err_t grub_arch_dl_check_header (void *ehdr);
grub_err_t grub_arch_dl_relocate_symbols (grub_dl_t mod, void *ehdr);
# 208 "./include/grub/dl.h"
void
grub_ia64_dl_get_tramp_got_size (const void *ehdr, grub_size_t *tramp,
     grub_size_t *got);







void
grub_arch_dl_get_tramp_got_size (const void *ehdr, grub_size_t *tramp,
     grub_size_t *got);
# 24 "grub-core/disk/host.c" 2
# 1 "./include/grub/disk.h" 1
# 25 "./include/grub/disk.h"
# 1 "./include/grub/device.h" 1
# 26 "./include/grub/device.h"
struct grub_disk;
struct grub_net;

struct grub_device
{
  struct grub_disk *disk;
  struct grub_net *net;
};
typedef struct grub_device *grub_device_t;

grub_device_t grub_device_open (const char *name);
grub_err_t grub_device_close (grub_device_t device);
int grub_device_iterate (int (*hook) (const char *name));
# 26 "./include/grub/disk.h" 2



enum grub_disk_dev_id
  {
    GRUB_DISK_DEVICE_BIOSDISK_ID,
    GRUB_DISK_DEVICE_OFDISK_ID,
    GRUB_DISK_DEVICE_LOOPBACK_ID,
    GRUB_DISK_DEVICE_EFIDISK_ID,
    GRUB_DISK_DEVICE_DISKFILTER_ID,
    GRUB_DISK_DEVICE_HOST_ID,
    GRUB_DISK_DEVICE_ATA_ID,
    GRUB_DISK_DEVICE_MEMDISK_ID,
    GRUB_DISK_DEVICE_NAND_ID,
    GRUB_DISK_DEVICE_SCSI_ID,
    GRUB_DISK_DEVICE_CRYPTODISK_ID,
    GRUB_DISK_DEVICE_ARCDISK_ID,
    GRUB_DISK_DEVICE_HOSTDISK_ID,
  };

struct grub_disk;

struct grub_disk_memberlist;


typedef enum
  {
    GRUB_DISK_PULL_NONE,
    GRUB_DISK_PULL_REMOVABLE,
    GRUB_DISK_PULL_RESCAN,
    GRUB_DISK_PULL_MAX
  } grub_disk_pull_t;


struct grub_disk_dev
{

  const char *name;


  enum grub_disk_dev_id id;


  int (*iterate) (int (*hook) (const char *name),
    grub_disk_pull_t pull);


  grub_err_t (*open) (const char *name, struct grub_disk *disk);


  void (*close) (struct grub_disk *disk);


  grub_err_t (*read) (struct grub_disk *disk, grub_disk_addr_t sector,
        grub_size_t size, char *buf);


  grub_err_t (*write) (struct grub_disk *disk, grub_disk_addr_t sector,
         grub_size_t size, const char *buf);


  struct grub_disk_memberlist *(*memberlist) (struct grub_disk *disk);
  const char * (*raidname) (struct grub_disk *disk);



  struct grub_disk_dev *next;
};
typedef struct grub_disk_dev *grub_disk_dev_t;

extern grub_disk_dev_t grub_disk_dev_list;

struct grub_partition;


struct grub_disk
{

  const char *name;


  grub_disk_dev_t dev;


  grub_uint64_t total_sectors;


  unsigned int log_sector_size;


  unsigned long id;


  struct grub_partition *partition;



  void (*read_hook) (grub_disk_addr_t sector,
       unsigned offset, unsigned length);


  void *data;
};
typedef struct grub_disk *grub_disk_t;


struct grub_disk_memberlist
{
  grub_disk_t disk;
  struct grub_disk_memberlist *next;
};
typedef struct grub_disk_memberlist *grub_disk_memberlist_t;
# 156 "./include/grub/disk.h"
void grub_disk_cache_invalidate_all (void);

void grub_disk_dev_register (grub_disk_dev_t dev);
void grub_disk_dev_unregister (grub_disk_dev_t dev);
static inline int
grub_disk_dev_iterate (int (*hook) (const char *name))
{
  grub_disk_dev_t p;
  grub_disk_pull_t pull;

  for (pull = 0; pull < GRUB_DISK_PULL_MAX; pull++)
    for (p = grub_disk_dev_list; p; p = p->next)
      if (p->iterate && (p->iterate) (hook, pull))
 return 1;

  return 0;
}

grub_disk_t grub_disk_open (const char *name);
void grub_disk_close (grub_disk_t disk);
grub_err_t grub_disk_read (grub_disk_t disk,
     grub_disk_addr_t sector,
     grub_off_t offset,
     grub_size_t size,
     void *buf);
grub_err_t grub_disk_write (grub_disk_t disk,
      grub_disk_addr_t sector,
      grub_off_t offset,
      grub_size_t size,
      const void *buf);

grub_uint64_t grub_disk_get_size (grub_disk_t disk);






extern void (* grub_disk_firmware_fini) (void);
extern int grub_disk_firmware_is_tainted;


void grub_lvm_init (void);
void grub_ldm_init (void);
void grub_mdraid09_init (void);
void grub_mdraid1x_init (void);
void grub_diskfilter_init (void);
void grub_lvm_fini (void);
void grub_ldm_fini (void);
void grub_mdraid09_fini (void);
void grub_mdraid1x_fini (void);
void grub_diskfilter_fini (void);
# 25 "grub-core/disk/host.c" 2
# 1 "./include/grub/misc.h" 1
# 23 "./include/grub/misc.h"
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdarg.h" 3 4

# 40 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 99 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 24 "./include/grub/misc.h" 2



# 1 "./include/grub/i18n.h" 1
# 22 "./include/grub/i18n.h"
# 1 "./config.h" 1
# 9 "./config.h"
# 1 "./config-util.h" 1
# 10 "./config.h" 2
# 23 "./include/grub/i18n.h" 2






# 28 "./include/grub/i18n.h"
extern const char *(*grub_gettext) (const char *s);



# 1 "/usr/include/locale.h" 1 3 4
# 10 "/usr/include/locale.h" 3 4
# 1 "/usr/include/_ansi.h" 1 3 4
# 10 "/usr/include/_ansi.h" 3 4
# 1 "/usr/include/newlib.h" 1 3 4
# 14 "/usr/include/newlib.h" 3 4
# 1 "/usr/include/_newlib_version.h" 1 3 4
# 15 "/usr/include/newlib.h" 2 3 4
# 11 "/usr/include/_ansi.h" 2 3 4
# 1 "/usr/include/sys/config.h" 1 3 4



# 1 "/usr/include/machine/ieeefp.h" 1 3 4
# 5 "/usr/include/sys/config.h" 2 3 4
# 1 "/usr/include/sys/features.h" 1 3 4
# 6 "/usr/include/sys/config.h" 2 3 4
# 234 "/usr/include/sys/config.h" 3 4
# 1 "/usr/include/cygwin/config.h" 1 3 4
# 235 "/usr/include/sys/config.h" 2 3 4
# 12 "/usr/include/_ansi.h" 2 3 4
# 11 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 43 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/machine/_default_types.h" 1 3 4
# 41 "/usr/include/machine/_default_types.h" 3 4

# 41 "/usr/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/usr/include/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/usr/include/machine/_default_types.h" 3 4
typedef int __int32_t;

typedef unsigned int __uint32_t;
# 103 "/usr/include/machine/_default_types.h" 3 4
typedef long int __int64_t;

typedef long unsigned int __uint64_t;
# 134 "/usr/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/usr/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/usr/include/machine/_default_types.h" 3 4
typedef int __int_least32_t;

typedef unsigned int __uint_least32_t;
# 200 "/usr/include/machine/_default_types.h" 3 4
typedef long int __int_least64_t;

typedef long unsigned int __uint_least64_t;
# 214 "/usr/include/machine/_default_types.h" 3 4
typedef long int __intmax_t;







typedef long unsigned int __uintmax_t;







typedef long int __intptr_t;

typedef long unsigned int __uintptr_t;
# 44 "/usr/include/sys/cdefs.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 216 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 328 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef short unsigned int wchar_t;
# 426 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 46 "/usr/include/sys/cdefs.h" 2 3 4
# 12 "/usr/include/locale.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-pc-cygwin/6.4.0/include/stddef.h" 1 3 4
# 15 "/usr/include/locale.h" 2 3 4
# 26 "/usr/include/locale.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 9 "/usr/include/xlocale.h" 3 4
struct __locale_t;
typedef struct __locale_t *locale_t;
# 27 "/usr/include/locale.h" 2 3 4
# 40 "/usr/include/locale.h" 3 4


struct lconv
{
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_n_cs_precedes;
  char int_n_sep_by_space;
  char int_n_sign_posn;
  char int_p_cs_precedes;
  char int_p_sep_by_space;
  char int_p_sign_posn;
};

struct _reent;
char *_setlocale_r (struct _reent *, int, const char *);
struct lconv *_localeconv_r (struct _reent *);

struct __locale_t *_newlocale_r (struct _reent *, int, const char *,
     struct __locale_t *);
void _freelocale_r (struct _reent *, struct __locale_t *);
struct __locale_t *_duplocale_r (struct _reent *, struct __locale_t *);
struct __locale_t *_uselocale_r (struct _reent *, struct __locale_t *);



char *setlocale (int, const char *);
struct lconv *localeconv (void);


locale_t newlocale (int, const char *, locale_t);
void freelocale (locale_t);
locale_t duplocale (locale_t);
locale_t uselocale (locale_t);





# 33 "./include/grub/i18n.h" 2
# 1 "/usr/include/libintl.h" 1 3 4
# 58 "/usr/include/libintl.h" 3 4
extern int libintl_version;
# 134 "/usr/include/libintl.h" 3 4
extern char *gettext (const char *__msgid)
       __asm__ ("" "libintl_gettext")
       __attribute__ ((__format_arg__ (1)));
# 152 "/usr/include/libintl.h" 3 4
extern char *dgettext (const char *__domainname, const char *__msgid)
       __asm__ ("" "libintl_dgettext")
       __attribute__ ((__format_arg__ (2)));
# 172 "/usr/include/libintl.h" 3 4
extern char *dcgettext (const char *__domainname, const char *__msgid,
                        int __category)
       __asm__ ("" "libintl_dcgettext")
       __attribute__ ((__format_arg__ (2)));
# 194 "/usr/include/libintl.h" 3 4
extern char *ngettext (const char *__msgid1, const char *__msgid2,
                       unsigned long int __n)
       __asm__ ("" "libintl_ngettext")
       __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));
# 215 "/usr/include/libintl.h" 3 4
extern char *dngettext (const char *__domainname,
                        const char *__msgid1, const char *__msgid2,
                        unsigned long int __n)
       __asm__ ("" "libintl_dngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
# 239 "/usr/include/libintl.h" 3 4
extern char *dcngettext (const char *__domainname,
                         const char *__msgid1, const char *__msgid2,
                         unsigned long int __n, int __category)
       __asm__ ("" "libintl_dcngettext")
       __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));
# 261 "/usr/include/libintl.h" 3 4
extern char *textdomain (const char *__domainname)
       __asm__ ("" "libintl_textdomain");
# 279 "/usr/include/libintl.h" 3 4
extern char *bindtextdomain (const char *__domainname, const char *__dirname)
       __asm__ ("" "libintl_bindtextdomain");
# 297 "/usr/include/libintl.h" 3 4
extern char *bind_textdomain_codeset (const char *__domainname,
                                      const char *__codeset)
       __asm__ ("" "libintl_bind_textdomain_codeset");
# 433 "/usr/include/libintl.h" 3 4
extern char *libintl_setlocale (int, const char *);






extern locale_t libintl_newlocale (int, const char *, locale_t);
# 455 "/usr/include/libintl.h" 3 4
extern void
       libintl_set_relocation_prefix (const char *orig_prefix,
                                      const char *curr_prefix);
# 34 "./include/grub/i18n.h" 2
# 53 "./include/grub/i18n.h"

# 53 "./include/grub/i18n.h"
static inline const char * __attribute__ ((always_inline))
_ (const char *str)
{
  return gettext(str);
}
# 28 "./include/grub/misc.h" 2
# 55 "./include/grub/misc.h"
void *grub_memmove (void *dest, const void *src, grub_size_t n);
char *grub_strcpy (char *dest, const char *src);
char *grub_strncpy (char *dest, const char *src, int c);
static inline char *
grub_stpcpy (char *dest, const char *src)
{
  char *d = dest;
  const char *s = src;

  do
    *d++ = *s;
  while (*s++ != '\0');

  return d - 1;
}


static inline void *
grub_memcpy (void *dest, const void *src, grub_size_t n)
{
  return grub_memmove (dest, src, n);
}

static inline char *
grub_strcat (char *dest, const char *src)
{
  char *p = dest;

  while (*p)
    p++;

  while ((*p = *src) != '\0')
    {
      p++;
      src++;
    }

  return dest;
}

static inline char *
grub_strncat (char *dest, const char *src, int c)
{
  char *p = dest;

  while (*p)
    p++;

  while (c-- && (*p = *src) != '\0')
    {
      p++;
      src++;
    }

  *p = '\0';

  return dest;
}
# 129 "./include/grub/misc.h"
int grub_memcmp (const void *s1, const void *s2, grub_size_t n);
int grub_strcmp (const char *s1, const char *s2);
int grub_strncmp (const char *s1, const char *s2, grub_size_t n);

char *grub_strchr (const char *s, int c);
char *grub_strrchr (const char *s, int c);
int grub_strword (const char *s, const char *w);



static inline char *
grub_strstr (const char *haystack, const char *needle)
{





  if (*needle != '\0')
    {


      char b = *needle++;

      for (;; haystack++)
 {
   if (*haystack == '\0')

     return 0;
   if (*haystack == b)

     {
       const char *rhaystack = haystack + 1;
       const char *rneedle = needle;

       for (;; rhaystack++, rneedle++)
  {
    if (*rneedle == '\0')

      return (char *) haystack;
    if (*rhaystack == '\0')

      return 0;
    if (*rhaystack != *rneedle)

      break;
  }
     }
 }
    }
  else
    return (char *) haystack;
}

int grub_isspace (int c);
int grub_isprint (int c);

static inline int
grub_iscntrl (int c)
{
  return (c >= 0x00 && c <= 0x1F) || c == 0x7F;
}

static inline int
grub_isalpha (int c)
{
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

static inline int
grub_islower (int c)
{
  return (c >= 'a' && c <= 'z');
}

static inline int
grub_isupper (int c)
{
  return (c >= 'A' && c <= 'Z');
}

static inline int
grub_isgraph (int c)
{
  return (c >= '!' && c <= '~');
}

static inline int
grub_isdigit (int c)
{
  return (c >= '0' && c <= '9');
}

static inline int
grub_isxdigit (int c)
{
  return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

static inline int
grub_isalnum (int c)
{
  return grub_isalpha (c) || grub_isdigit (c);
}

static inline int
grub_tolower (int c)
{
  if (c >= 'A' && c <= 'Z')
    return c - 'A' + 'a';

  return c;
}

static inline int
grub_toupper (int c)
{
  if (c >= 'a' && c <= 'z')
    return c - 'a' + 'A';

  return c;
}

static inline int
grub_strcasecmp (const char *s1, const char *s2)
{
  while (*s1 && *s2)
    {
      if (grub_tolower ((grub_uint8_t) *s1)
   != grub_tolower ((grub_uint8_t) *s2))
 break;

      s1++;
      s2++;
    }

  return (int) grub_tolower ((grub_uint8_t) *s1)
    - (int) grub_tolower ((grub_uint8_t) *s2);
}

static inline int
grub_strncasecmp (const char *s1, const char *s2, grub_size_t n)
{
  if (n == 0)
    return 0;

  while (*s1 && *s2 && --n)
    {
      if (grub_tolower (*s1) != grub_tolower (*s2))
 break;

      s1++;
      s2++;
    }

  return (int) grub_tolower ((grub_uint8_t) *s1)
    - (int) grub_tolower ((grub_uint8_t) *s2);
}

unsigned long grub_strtoul (const char *str, char **end, int base);
unsigned long long grub_strtoull (const char *str, char **end, int base);

static inline long
grub_strtol (const char *str, char **end, int base)
{
  int negative = 0;
  unsigned long magnitude;

  while (*str && grub_isspace (*str))
    str++;

  if (*str == '-')
    {
      negative = 1;
      str++;
    }

  magnitude = grub_strtoull (str, end, base);
  if (negative)
    {
      if (magnitude > (unsigned long) 9223372036854775807L + 1)
        {
          grub_error (GRUB_ERR_OUT_OF_RANGE, "overflow is detected");
          return (-9223372036854775807L - 1);
        }
      return -((long) magnitude);
    }
  else
    {
      if (magnitude > 9223372036854775807L)
        {
          grub_error (GRUB_ERR_OUT_OF_RANGE, "overflow is detected");
          return 9223372036854775807L;
        }
      return (long) magnitude;
    }
}

char *grub_strdup (const char *s) __attribute__ ((warn_unused_result));
char *grub_strndup (const char *s, grub_size_t n) __attribute__ ((warn_unused_result));
void *grub_memset (void *s, int c, grub_size_t n);
grub_size_t grub_strlen (const char *s) __attribute__ ((warn_unused_result));
int grub_printf (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
int grub_printf_ (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));



static inline char *
grub_strchrsub (char *output, const char *input, char ch, const char *with)
{
  while (*input)
    {
      if (*input == ch)
 {
   grub_strcpy (output, with);
   output += grub_strlen (with);
   input++;
   continue;
 }
      *output++ = *input++;
    }
  *output = '\0';
  return output;
}

extern void (*grub_xputs) (const char *str);

static inline int
grub_puts (const char *s)
{
  const char nl[2] = "\n";
  grub_xputs (s);
  grub_xputs (nl);

  return 1;
}

int grub_puts_ (const char *s);
void grub_real_dprintf (const char *file,
                                     const int line,
                                     const char *condition,
                                     const char *fmt, ...) __attribute__ ((format (printf, 4, 5)));
int grub_vprintf (const char *fmt, va_list args);
int grub_snprintf (char *str, grub_size_t n, const char *fmt, ...)
     __attribute__ ((format (printf, 3, 4)));
int grub_vsnprintf (char *str, grub_size_t n, const char *fmt,
     va_list args);
char *grub_xasprintf (const char *fmt, ...)
     __attribute__ ((format (printf, 1, 2))) __attribute__ ((warn_unused_result));
char *grub_xvasprintf (const char *fmt, va_list args) __attribute__ ((warn_unused_result));
void grub_exit (void) __attribute__ ((noreturn));
void grub_abort (void) __attribute__ ((noreturn));
grub_uint64_t grub_divmod64 (grub_uint64_t n,
       grub_uint64_t d,
       grub_uint64_t *r);
# 396 "./include/grub/misc.h"
static inline char *
grub_memchr (const void *p, int c, grub_size_t len)
{
  const char *s = p;
  const char *e = s + len;

  for (; s < e; s++)
    if (*s == c)
      return (char *) s;

  return 0;
}


static inline unsigned int
grub_abs (int x)
{
  if (x < 0)
    return (unsigned int) (-x);
  else
    return (unsigned int) x;
}


static inline unsigned int
grub_div_roundup (unsigned int x, unsigned int y)
{
  return (x + y - 1) / y;
}





void grub_reboot (void) __attribute__ ((noreturn));
# 440 "./include/grub/misc.h"
void grub_halt (void) __attribute__ ((noreturn));
# 450 "./include/grub/misc.h"
static inline void
grub_error_save (struct grub_error_saved *save)
{
  grub_memcpy (save->errmsg, grub_errmsg, sizeof (save->errmsg));
  save->grub_errno = grub_errno;
  grub_errno = GRUB_ERR_NONE;
}

static inline void
grub_error_load (const struct grub_error_saved *save)
{
  grub_memcpy (grub_errmsg, save->errmsg, sizeof (grub_errmsg));
  grub_errno = save->grub_errno;
}
# 26 "grub-core/disk/host.c" 2

int grub_disk_host_i_want_a_reference;

static int
grub_host_iterate (int (*hook) (const char *name),
     grub_disk_pull_t pull)
{
  if (pull != GRUB_DISK_PULL_NONE)
    return 0;

  if (hook ("host"))
    return 1;
  return 0;
}

static grub_err_t
grub_host_open (const char *name, grub_disk_t disk)
{
  if (grub_strcmp (name, "host"))
      return grub_error (GRUB_ERR_UNKNOWN_DEVICE, "not a host disk");

  disk->total_sectors = 0;
  disk->id = (unsigned long) "host";

  disk->data = 0;

  return GRUB_ERR_NONE;
}

static void
grub_host_close (grub_disk_t disk __attribute((unused)))
{
}

static grub_err_t
grub_host_read (grub_disk_t disk __attribute((unused)),
  grub_disk_addr_t sector __attribute((unused)),
  grub_size_t size __attribute((unused)),
  char *buf __attribute((unused)))
{
  return GRUB_ERR_OUT_OF_RANGE;
}

static grub_err_t
grub_host_write (grub_disk_t disk __attribute ((unused)),
       grub_disk_addr_t sector __attribute ((unused)),
       grub_size_t size __attribute ((unused)),
       const char *buf __attribute ((unused)))
{
  return GRUB_ERR_OUT_OF_RANGE;
}

static struct grub_disk_dev grub_host_dev =
  {

    .name = "host",
    .id = GRUB_DISK_DEVICE_HOST_ID,
    .iterate = grub_host_iterate,
    .open = grub_host_open,
    .close = grub_host_close,
    .read = grub_host_read,
    .write = grub_host_write,
    .next = 0
  };

@MARKER@host@
{
  grub_disk_dev_register (&grub_host_dev);
}

static void grub_mod_fini (void) __attribute__ ((used)); void grub_host_fini (void); void grub_host_fini (void) { grub_mod_fini (); } static void grub_mod_fini (void)
{
  grub_disk_dev_unregister (&grub_host_dev);
}
