class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
    Node * temp=NULL;
    Node * prev=NULL;
    
    while(head!=NULL)
    {
        temp=head->next;
        head->next=prev;
        prev=head;
        head=temp;
    }
    return prev;
    } 
};

Correct Answer.Correct Answer
Execution Time:0.33
   
