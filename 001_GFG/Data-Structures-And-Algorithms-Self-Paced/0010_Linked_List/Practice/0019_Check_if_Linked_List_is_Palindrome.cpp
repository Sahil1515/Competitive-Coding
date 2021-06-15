
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        
        // if length is 1
        if(head->next==NULL)
        return 1;
        
        //If length is 2
        if(head->next->next==NULL)
        {
            if(head->data==head->next->data)
            return 1;
             return 0; 
        }
        
        //Finding the length
        Node * curLen=head;
        int count=0;
        while(curLen!=NULL)
        {
            curLen=curLen->next;
            count++;
        }

        //Finding the mid of the list 
        Node * slow=head;
        Node * fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        //Reversing the second half        
        Node * cur=slow;
        Node * prev=NULL;
        Node * temp=NULL;
        
        while(cur!=NULL)
        {
            temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
    
    // Checkig if the length is even or odd
        if(count%2==1)
        {
            while(prev!=NULL && head!=slow)
            {
                if(prev->data!=head->data)
                return 0;
                
                prev=prev->next;
                head=head->next;
            }
        }
        else 
        {
             while(prev!=NULL && head!=slow)
            {
                if(prev->data!=head->data)
                return 0;
                
                prev=prev->next;
                head=head->next;
            }
        }
        return 1;
    }
};


Correct Answer.Correct Answer
Execution Time:0.04
