

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        
        Node * last=head;
        
        while(last->next!=NULL)
        {
            last=last->next;
        }
        
        while(k-- && head!=NULL)
        {
            Node * newNode= new Node(head->data);
            Node * tempDelete= head;
            head=head->next;
            last->next=newNode;
            last=last->next;
            delete tempDelete;
        }
        
        return head;
        
    }
};
    


Correct Answer.Correct Answer
Execution Time:0.26