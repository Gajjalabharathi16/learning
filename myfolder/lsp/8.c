// Develop a C program to move a file from one directory to another?
#include<stdio.h>
int main()
{
        char *src="/home/breddy1/lsp/files/new.txt";
        char *dst="/home/breddy1/lsp/files/Test/new.txt";
        if((rename(src,dst))==0)
        {
                printf("moved");
        }
        else
        {
                printf("not moved");
        }

}
