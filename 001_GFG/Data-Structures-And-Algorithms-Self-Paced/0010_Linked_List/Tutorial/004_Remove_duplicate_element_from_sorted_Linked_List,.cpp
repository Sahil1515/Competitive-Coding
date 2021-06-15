
Node *removeDuplicates(Node *head)
{
 // your code goes here
 
    Node * cur=head;
    
    while(cur && cur->next) // means atleast two nodes
    {
        if(cur->data==cur->next->data)
        {
            cur->next=cur->next->next;
        }
        else cur=cur->next;
    }
    
    return head;
}