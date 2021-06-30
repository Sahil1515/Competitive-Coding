int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int length1=0,length2=0;
    Node* head12=head1;
    while(head12!=NULL)
    {
        length1++;
        head12=head12->next;
    }
    Node* head22=head2;
    while(head22!=NULL)
    {
        length2++;
        head22=head22->next;
    }
   
   if(length1>length2)
   {
        int temp=length1-length2;
       while(temp!=0)
       {
           head1=head1->next;
           temp--;
       }
   }
   else
   {
        int temp=length2-length1;
       while(temp!=0)
       {
           head2=head2->next;
           temp--;
       }
   }
   int res=0;
   while(head1!=NULL)
   {
       if(head1==head2)
       {
           res=head1->data;
           break;
       }
       head1=head1->next;
       head2=head2->next;
   }
   
   return res;
    
    
}

