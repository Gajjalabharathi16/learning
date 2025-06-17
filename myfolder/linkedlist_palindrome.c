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
                                                                                                          70,1          Bot
                                                                                                            
