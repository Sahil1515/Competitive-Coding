/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   // Your code here
   Node * fast=head;
   Node * slow=head;
   
   
   while(slow && fast && fast->next)
   {
       slow=slow->next;
       fast=fast->next->next;
   }
   return slow->data;
}
