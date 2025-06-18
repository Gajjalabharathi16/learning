//Develop a C program to get the last modified timestamp of a file named "file.txt"?
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<time.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
        char *filename="file.txt";
        struct stat st;
        if(stat(filename,&st)==0)
        {
                printf("last modified of file '%s' time is  %s",filename,ctime(&st.st_mtime));
        }
}
