
/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

/* Function to insert into a Doubly Linked List */
void addNode(Node *head, int pos, int data)
{
  
   Node * n=new Node(data);
   
   if(head==NULL)
    {
        head=n;
        return;
    }
   
   Node * cur=head;
   while(pos&& cur->next!=NULL)
   {
       cur=cur->next;
       pos--;
   }
   if(cur->next==NULL)// Case when it is at last of LL
   {
       cur->next=n;
       n->prev=cur;
   }
   else{// Middle and first element case
       n->next=cur->next;
       cur->next->prev=n;
       cur->next=n;
       n->prev=cur;
   }
}