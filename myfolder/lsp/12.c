// Implement a C program to create a new directory named "Backup" in the parent directory?
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>

int main()
{
        const char *file="../Backup";
        if(mkdir(file,0777)==0)
        {
                printf("%s created in parent directory\n",file);
        }
        else
        {
                printf("not created");
        }
}
