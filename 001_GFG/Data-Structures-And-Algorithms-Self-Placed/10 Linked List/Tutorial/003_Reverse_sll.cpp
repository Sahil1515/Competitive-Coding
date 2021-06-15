// struct Node
// {
//     int data;
//     struct Node *next;
// }

// 

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        
        if(!head || !head->next)
        return head;
        
        struct Node * prev=NULL;
        struct Node * cur=head;
        struct Node * next=head;
        
        while(cur)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            
        }
        
        return prev;
    }
    
};
    