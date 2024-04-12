#ifndef _MY_LIB_H
# define _MY_LIB_H

/* linux 64 bit */
/*this working  just in x86_64 (64-bit) */

/*syscall*/
#define SYSWRITE 1
#define SYSREAD 0
#define SYSEXIT 60
#define SYSMKDIR 83

#define NULL ((void *)0)
#define __void void
#define EXIT_FAILURE    1     
#define EXIT_SUCCESS    0  

typedef unsigned long size_t; 
typedef long ssize_t;
typedef unsigned short umode_t;

__void      __write(unsigned fd, const char *buf, size_t count);
ssize_t     __read(int fd, void *buf, size_t count);
__void      __exit(int error_code);
int         __MKDIR(const char *pathname,umode_t mode);

#endif