
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
    int data;
    struct Node *link;
};

void list_creation(struct Node **head);
void add_node_at_end(struct Node **head, int data);

void list_creation(struct Node **head)
{
    struct Node *newnode=NULL;
     struct Node *temp=NULL;
     int choice;
     printf("enter no of nodes\n");
     scanf("%d",&choice);
     printf("enter elements\n");
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
void add_node_at_end(struct Node **head,int data)
{
      struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
      struct Node *temp=*head;
      newnode->data=data;
      while(temp->link!=NULL)
      {
          temp=temp->link;
      }
      temp->link=newnode;
      
}


int main()
{
    struct Node *head=NULL;
    list_creation(&head);
    
   printf("enter data to add at end\n");
    int data;
    scanf("%d",&data);
    add_node_at_end(&head,data);
     struct Node *temp=head;
    while(temp)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }
   
}

