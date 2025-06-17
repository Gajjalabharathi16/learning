// 4.Write a C program to check if a file named "sample.txt" exists in the current directory?
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
        char *filename=(char*)malloc(100*sizeof(char));
        scanf("%s",filename);
        if(access(filename,F_OK)==0)
        {
                printf("%s file exist",filename);
        }
        else
        {
                printf("%s is not exist",filename);
        }
}
