//Implement a C program to delete a file named "delete_me.txt"?
#include<stdio.h>
int main()
{
        if(remove("new1.txt")==0)
        {
                printf("deleted\n");
        }
        else
        {
                printf("not deleted");
        }
}
