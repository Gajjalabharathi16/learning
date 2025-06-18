//21. Write a C program to check if a given path refers to a file or a directory?
#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
         char path[100];
        scanf("%s",path);
        struct stat buf;
        if(stat(path,&buf)==0)
        {
                if(S_ISREG(buf.st_mode))
                {
                        printf("'%s' is regular file\n",path);
                }
                else if(S_ISDIR(buf.st_mode))
                {
                        printf("'%s' is directory",path);
                }
                else
                {
                        printf("neither file nor directory\n");
                }
        }
}
