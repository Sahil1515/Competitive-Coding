

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node *fast=head;
        Node* slow=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            return 1;
        }
        
        return 0;
    }
};



Correct Answer.Correct Answer
Execution Time:0.12