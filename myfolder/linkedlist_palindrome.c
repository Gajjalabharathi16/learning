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
