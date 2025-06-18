//Implement a C program to count the number of lines in a file named "data.txt"?
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd = open("new.txt", O_RDONLY);
    if (fd < 0) {
        perror("File open failed");
        return 1;
    }

    int line_count = 0;
    char buf[32];
    int bytesread;

    while ((bytesread = read(fd, buf, sizeof(buf))) > 0) {
        for (int i = 0; i < bytesread; i++) {
            if (buf[i] == '\n') {
                line_count++;
            }
        }
    }

    close(fd);
    printf("Total lines in data.txt: %d\n", line_count);
    return 0;
}
