/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// function inserts the data in front of the list
Node *insertAtBegining(Node *head, int newData) {
   // Your code here
   
   Node * n=new Node(newData);
   
   if(head==NULL)
   return n;
 
   n->next=head;
   return n;
}


// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
   // Your code here
   Node * n=new Node(newData);
   
   if(head==NULL)
   return n;
   
   Node * cur=head;
   
   while(head->next!=NULL)
   {
       head=head->next;
   }
   head->next=n;
   return cur;
}
