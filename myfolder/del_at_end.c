
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
    int data;
    struct Node *link;
};

void list_creation(struct Node **head);
void del_at_end(struct Node **head);

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
void del_at_end(struct Node **head)
{
      struct Node *temp = *head;
      struct Node *prev=NULL;
      while(temp->link)
      {
          prev=temp;
          temp=temp->link;
      }
      prev->link=NULL;
}


int main()
{
    struct Node *head=NULL;
    list_creation(&head);
    
   printf("deleted node at end\n");
   del_at_end(&head);
  struct Node *temp=head;
   while(temp)
   {
       printf("%d",temp->data);
       temp=temp->link;
   }
   
}
