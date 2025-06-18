//Write a C program to append "Goodbye!" to the end of an existing file named "new.txt"?
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
        int fd=open("new.txt",O_WRONLY|O_APPEND);
        char buf[]="Good Bye";
        int bytes_read=write(fd,buf,sizeof(buf)-1);
        close(fd);
}
