
// APPROCH 1
// First approach is to calculate the length of the linked list (L)and subtract n(position from the back) 
// from it to get the position of the desired node from the front.

int getNthFromLast(Node *head, int n)
{
       // Your code here
        
    Node * temp=head;
    int count=0;
    
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    if(n>count)
    return -1;
    
    for(int i=0;i<count-n;i++)
    {
        head=head->next;
    }
    return head->data;

}
// APPROCH 2 
// Another approach is to use two pointers. Both pointers are initialized to head. Traverse n nodes from head with first pointer. 
// Then the second pointer and the first pointer start moving simultaneously. This keeps on going till the first pointer becomes null. 
// At this point the second pointer will be at the desired node i.e. at nth node from end since the first pointer 
// had traversed n elements previously and thus had difference of n nodes with second pointer.

int getNthFromLast(Node *head, int n)
{
       // Your code here
       
       
       Node * tempFast=head;
       Node * tempSlow=NULL;
       
        for(int i=0;i<n;i++)
        {
            if(tempFast==NULL)
            return -1;
            tempFast=tempFast->next;
        }
        
        for(tempSlow=head;tempFast!=NULL;tempSlow=tempSlow->next,tempFast=tempFast->next)
        {
            // continue;
        }
        return tempSlow->data;

}

// APPROCH 3

// Reverse the LL

int getNthFromLast(Node *head, int n)
{
    Node * temp=NULL;
    Node * prev=NULL;
    
    while(head!=NULL)
    {
        temp=head->next;
        head->next=prev;
        prev=head;
        head=temp;
    }

    n--;
     while(prev!=NULL && n--)
    {
      prev=prev->next;
    }
    if (prev==NULL)
    return -1;
    
    return prev->data;

}
