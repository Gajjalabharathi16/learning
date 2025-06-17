#include <stdio.h>

int main() {
    int arr[] = {2, 2, 1, 2, 2, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count, i, j;

    for (i = 0; i < n; i++) {
        count = 0;

        // Count how many times arr[i] appears
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        // Check if it is the majority element
        if (count > n / 2)   {
            printf("The majority element is: %d\n", arr[i]);
            return 0;
        }
    }

    printf("No majority element found.\n");
    return 0;
}


2)write a program to insert and delete elements from an arry?

#include<stdio.h>
int main()
{
    
    int n,pos,i,value;
   
    printf("the elements count to store\n");
    scanf("%d",&n);
     int arr[n];
    printf("enter the elements into array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter pos to insert\n");
    scanf("%d",&pos);
    printf("enter value\n");
    scanf("%d",&value);
    for(int i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    n++;
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
    //delete
    printf("enter the position to delete the element\n");
    scanf("%d",&pos);
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
    
}

//Reverse linked list

#include<stdio.h>
#include<stdlib.h>
void list_creation();
void list_reverse();
void display();
struct linked_list 
{
    int data;
    struct linked_list *link;
};
struct linked_list *head;

int main()
{
    list_creation();
    //display();
    list_reverse();
    display();
}
void list_creation()
{
    struct linked_list *newnode=NULL;
    struct linked_list *temp=NULL;
    printf("enter no of node\n");
    int choice;
    scanf("%d",&choice);
    for(int i=0;i<choice;i++)
    {
        newnode=(struct linked_list *)malloc(sizeof(struct linked_list));
        int value;
        scanf("%d",&value);
        newnode->data=value;
        newnode->link=NULL;
    
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->link=newnode;
        temp=newnode;
    }
    }
}

void list_reverse()
{
    struct linked_list *temp,*prev=NULL;
    
    while(head)
    {
        temp=head->link;
        head->link=prev;
        prev=head;
        head=temp;
    }
    head=prev;
}

void display()
{
    struct linked_list *temp=head;
    while(temp)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }
}

