//Write a C program to create a new text file and write "Hello, World!" to it
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
        int fd;
        int bytesread;
        fd=open("new.txt",O_WRONLY|O_CREAT,0666);
        char buf[32]={0};
        fgets(buf,32,stdin);
        bytesread=write(fd,buf,(sizeof(buf)-1))>0;
        close(fd);
}
