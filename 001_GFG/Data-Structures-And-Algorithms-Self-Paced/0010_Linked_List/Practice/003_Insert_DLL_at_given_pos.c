void addNode(struct Node *head, int pos, int data)
{
    struct Node * temp =(struct Node *)malloc(sizeof(struct Node));
    temp->data=data;
    temp->prev=NULL;
    temp->next=NULL;
    
    if(!head)
    return temp;
    
    while(pos && head->next)
    {
        pos--;
        head=head->next;
    }
    
    if(head->next==NULL)
    {
        head->next=temp;
        temp->prev=head;
    }
    
    else {
        temp->next=head->next;
        head->next->prev=temp;
        head->next=temp;
        temp->prev=head;
    }
    
}