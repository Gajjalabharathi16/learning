//Develop a C program to rename a file from "oldname.txt" to "newname.txt"
#include<stdio.h>
int main()
{
        if(rename("new.txt","new1.txt")==0)
        {
                printf("renamed successfully\n");
        }
        else
        {
                printf("not renamed\n");
        }
}
~
