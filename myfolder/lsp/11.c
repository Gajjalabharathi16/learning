// Develop a C program to check if a directory named "Test" exists in the current directory?
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>

int main()
{
        const char *dir_name="Test";
        struct stat st;
        if(stat(dir_name,&st)==0 && S_ISDIR(st.st_mode))
        {
                printf("%s directory is present\n",dir_name);
        }
        else
        {
                printf("%s directory not prresent\n",dir_name);
        }
}
