

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     
     if(head==NULL || head->next==NULL)
        return head; 
     
     int arr[10001]={0};
     
     
     Node * cur=head;
     arr[cur->data]=1;
     while(cur->next!=NULL)
     {
        if(arr[cur->next->data]==0)
        {
            arr[cur->next->data]=1;
            cur=cur->next;
        }
        else
        {
            Node *temp=cur->next;
            delete temp;
            cur->next=cur->next->next;
        }
        
     }
     
     return head;

    }
};

Correct Answer.Correct Answer
Execution Time:0.28