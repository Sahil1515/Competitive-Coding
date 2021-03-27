
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// root: head node
Node *removeDuplicates(Node *root)
{
 // your code goes here
 
 Node * root1=root;
 if(root1==NULL || root1->next==NULL)
 return root1;
 
 while(root1->next)
 {
     if(root1->data==root1->next->data)
     {
         Node * cur=root1->next;
         root1->next=root1->next->next;
         delete cur;
         continue;
     }
     root1=root1->next;
 }
 return root;
}

// 2 marks