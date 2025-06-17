#include<stdio.h>
#include<stdlib.h>
struct linked_list 
{
    int data;
    struct linked_list *link;
};
void list_creation(struct linked_list **head);
void list_reverse(struct linked_list **head);
void display(struct linked_list *head);



int main()
{
    struct linked_list *head=NULL;
    list_creation(&head);
    //display();
    list_reverse(&head);
    display(head);
}
void list_creation(struct linked_list **head)
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

void list_reverse(struct linked_list **head)
{
    struct linked_list *temp,*prev=NULL;
    struct linked_list *curr=*head;
    
    while(curr)
    {
        temp=curr->link;
        curr->link=prev;
        prev=curr;
        curr=temp;
    }
    *head=prev;
}

void display(struct linked_list *head)
{
    struct linked_list *temp=head;
    while(temp)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }
}
