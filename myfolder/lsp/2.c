// Develop a C program to open an existing text file and display its contents?
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
        int fd=open("new.txt",O_RDONLY);
        char buf[32];
        int bytesread;
        while((bytesread=read(fd,buf,sizeof(buf)-1))>0)
        {

                buf[bytesread]='\0';
                printf("%s",buf);
        }

        close(fd);
}
