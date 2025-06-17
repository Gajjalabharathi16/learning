#include<stdio.h>
#include<stdlib.h>
void list_creation();
void add_node_at_middle();
void display();
struct linked_list
{
    int data;
    struct linked_list *link;
};
struct linked_list *head=NULL;
int main()
{
    list_creation();
    add_node_at_middle();
    display();
}
void list_creation()
{
    struct linked_list *newnode=NULL;
     struct linked_list *temp=NULL;
     int choice;
     printf("enter no of nodes\n");
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

void add_node_at_middle()
{
    struct linked_list *newnode=(struct linked_list*)malloc(sizeof(struct linked_list));
    int value;
    printf("enter node to insert at middle");
    scanf("%d",&value);
    newnode->data=value;
    newnode->link=NULL;
    struct linked_list *fast=head;
    struct linked_list *slow=head;
    while(fast->link!=NULL && fast->link->link!=NULL)
    {
        slow=slow->link;
        fast=fast->link->link;
    }
    newnode->link=slow->link;
    slow->link=newnode;
}
void display()
{
    struct linked_list *temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }
}
