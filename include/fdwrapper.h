#ifndef FDWRAPPER_H
#define FDWRAPPER_H
#include <unistd.h>
#include <fcntl.h>
#include <sys/epoll.h>
enum RET_CODE { OK = 0, NOTHING = 1, IOERR = -1, CLOSED = -2, BUFFER_FULL = -3, BUFFER_EMPTY = -4, TRY_AGAIN };
enum OP_TYPE { READ = 0, WRITE, ERROR };
int setnonblocking( int fd );//设置非阻塞
void add_read_fd( int epollfd, int fd );//添加可读文件描述符
void add_write_fd( int epollfd, int fd );//添加可写文件描述符
void removefd( int epollfd, int fd );//只移除不关闭文件描述符
void closefd( int epollfd, int fd );//关闭文件描述符
void modfd( int epollfd, int fd, int ev );//修改文件描述符

#endif
