#include "my_lib.h"


__void __exit(int error_code)
{
    asm volatile
    (
        "syscall"
        :
        : "a" (SYSEXIT), "D"(error_code)
    );
}

__void __write(unsigned fd, const char *buf , size_t count)
{
	asm volatile
		(
			"syscall"
			:
			: "a"(SYSWRITE), "D"(fd),"S"(buf), "d"(count)
		);
}
ssize_t __read(int fd, void *buf, size_t count)
{
    ssize_t ret;
    asm volatile
    (
        "syscall"
        : "=a"(ret), "=S"(buf)
        : "a"(SYSREAD), "D"(fd), "d"(count)
    );
    return ret;
}

int __MKDIR(const char *pathname,umode_t mode)
{
    int ret;
    asm volatile
    (
        "syscall"
        :"=a"(ret) , "=S"(pathname)
        : "a"(SYSMKDIR), "d"(mode) 

    );
    return ret;
}