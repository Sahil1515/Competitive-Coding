struct Node* reverseDLL(struct Node * head)
{
    struct Node * head2=head;
    struct Node * temp=NULL;
   
    if(head==NULL || head->next==NULL)
    return head;
    
    
    while(head)
    {
        temp=head->prev;
        head->prev=head->next;
        head->next=temp;
        
        head=head->prev; 
    }

    return temp->prev;
}