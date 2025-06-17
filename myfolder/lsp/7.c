//Write a C program to copy the contents of one file to another?

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
        int fd=open("1.c",O_RDONLY);
        int fd1=open("file.txt",O_CREAT|O_WRONLY,0666);
        int bytesread;
        char buf[32];
        while((bytesread=read(fd,buf,31))>0)
        {
                buf[bytesread]='\0';
                write(fd1,buf,bytesread);
        }
        close(fd);
        close(fd1);
}
