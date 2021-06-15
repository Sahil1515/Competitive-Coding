class Solution
{
  
    public:
    struct node *reverse (struct node *head, int k)
    { 
        
       struct node *head1=head;
        
       struct node *cur=head;
       struct node *next=head;
       struct node *prev=NULL;
       
       int eleK=k;
        while(cur && eleK--)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        
        if(cur==NULL)
            return prev;
        
        head1->next=reverse (cur, k);
        
        return prev;
    }
};
