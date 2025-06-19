// Develop a C program to create a hard link named "hardlink.txt" to a file named "source.txt"?
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
        char *src1="source.txt";
        char *src2="hardlink.txt";

        if(link(src1,src2)==0)
        {
                printf("hard link created\n");
        }
        else
                {
                        perror("hardlink error");
                }
}
