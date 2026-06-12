#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>

int main() {
    int fd = open("/etc/passwd", O_RDONLY);
    printf("fd = %d\n", fd);
    int count = 80;
    char buff[count];
    ssize_t read_bytes = read(fd, buff, count);
    printf("%long\n", read_bytes);
    buff[count] = '\0';
    printf("%s\n", buff);
    return 0;
}
