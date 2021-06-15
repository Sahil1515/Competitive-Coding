
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
       Node * fast=head;
       Node * slow=head;
       Node * start=head;
       
       
       while(slow && fast && fast->next)
       {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            {
                if(slow!=start)
                {
                    slow=head;
                    while(fast->next!=slow->next)
                    {
                        slow=slow->next;
                        fast=fast->next;
                    }
                    fast->next=NULL;
                }
                else {
                     while(fast->next!=start)
                    {
                        fast=fast->next;
                    }
                    fast->next=NULL;
                    
                }
            }
       }
    }
};