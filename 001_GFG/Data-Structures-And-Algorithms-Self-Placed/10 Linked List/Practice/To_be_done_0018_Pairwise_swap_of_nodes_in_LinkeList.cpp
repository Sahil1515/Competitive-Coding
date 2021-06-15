
// Approch 1
// Simply swapping the data of the nodes

struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    Node * returnHead=head;
    
    if(head==NULL || head->next==NULL)
    return head;
    
    while(head!=NULL && head->next!=NULL)
    {
        int temp=head->data;
        head->data=head->next->data;
        head->next->data=temp;
        head=head->next->next;
    }
    return returnHead;
}


Correct Answer.Correct Answer
Execution Time:0.09



// Approch 2
// Actually swapping the nodes

