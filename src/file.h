#ifndef _FILE_H_
#define _FILE_H_

#define FD_NOT_SET (-1)

struct __FILE {
    int fd;
    void *handle;
};

#endif
