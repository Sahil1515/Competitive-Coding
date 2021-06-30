

int countNodesinLoop(struct Node *head)
{
    // Code here
    Node * fast=head;
    Node * slow=head;
    
    int count=1;
    bool flag=false;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast)
        {
            flag=true;
            Node * temp=head;
            
            while(temp!=slow)
            {
                temp=temp->next;
                slow=slow->next;
            }
            
            while(slow->next!=temp)
            {
                count++;
                slow=slow->next;
                
            }    
            break;
        
        }
        
    }
    if(flag==false)
    return 0;
    return count;
}

Correct Answer.Correct Answer
Execution Time:0.24