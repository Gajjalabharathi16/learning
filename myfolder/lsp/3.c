//3Implement a C program to create a new directory named "Test" in the current
//directory?
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
        int status;
        status = system("mkdir Test");
        //status=mkdir("Test",0777);
        if(status==0)
        {
                printf("Directory test created successfully\n");
        }
        else
        {
                printf("not created");
        }
}
~                                                                                                                           ~ 
