//17. Implement a C program to change the permissions of a file named "file.txt" to read only?
#include<stdio.h>
#include<sys/stat.h>

int main()
{
        char *filename="file.txt";
        if(chmod(filename,0444)==0)
        {
                printf("permissions of %s changed to read_only mode\n",filename);
        }
        else
        {
                printf("chmod failed");
        }
}
~       
