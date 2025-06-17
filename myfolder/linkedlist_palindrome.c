#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
    int data;
    struct Node *link;
};

void list_creation(struct Node **head);

bool isPalindrome(struct Node *head)
{
    struct Node *slow=head;
    struct Node *fast=head;
    while(fast->link && fast->link->link)
    {
        slow=slow->link;
        fast=fast->link->link;
    }
    struct Node *prev=NULL,*curr=slow->link,*next=NULL;
    while(curr!=NULL)
    {
        next=curr->link;
        curr->link=prev;
        prev=curr;
        curr=next;
    }
    struct Node *first=head;
    struct Node *second=prev;
    bool isPalin =true;
    while(second!=NULL)
    {
    if(first->data!=second->data)
    {
        isPalin=false;
        break;
    }
    first=first->link;
    second=second->link;
    
    }
    return isPalin;
}
void list_creation(struct Node **head)
{
    struct Node *newnode=NULL;
     struct Node *temp=NULL;
     int choice;
     printf("enter no of nodes\n");
     scanf("%d",&choice);
     for(int i=0;i<choice;i++)
     {
         newnode=(struct Node *)malloc(sizeof(struct Node));
         int value;
         scanf("%d",&value);
         newnode->data=value;
         newnode->link=NULL;
         if(*head==NULL)
         {
             *head=temp=newnode;
         }
         else
         {
             temp->link=newnode;
             temp=newnode;
         }
     }
}

int main()
{
    struct Node *head=NULL;
    list_creation(&head);
    
    if(isPalindrome(head))
    {
        printf("palindrome");
    }
    else
    {
        printf("not");
    }
}

