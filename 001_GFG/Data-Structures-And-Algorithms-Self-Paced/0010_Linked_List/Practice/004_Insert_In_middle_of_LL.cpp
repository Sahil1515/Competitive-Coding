Node* insertInMiddle(Node* head, int x)
{
    Node *slow=head;
    Node *fast=head;    
    Node *n=(Node*)malloc(sizeof(struct Node));
    n->data=x;
    n->next=NULL;

    if(head==NULL)
    {
        return n;
    }
    if(head->next==NULL)
    {
        head->next=n;
        return head;
    }
    
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    n->next=slow->next;
    slow->next=n;
    
    return head;
}

Correct Answer.Correct Answer
Execution Time:0.14