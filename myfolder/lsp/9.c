//Implement a C program to list all files in the current directory?
#include<stdio.h>
int main()
{
        execl("/bin/ls","ls",NULL);
}
