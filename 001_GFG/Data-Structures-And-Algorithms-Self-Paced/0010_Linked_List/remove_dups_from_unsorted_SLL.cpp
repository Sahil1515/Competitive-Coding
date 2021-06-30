/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to remove duplicates from the linked list
// root: root of the linked list
Node * removeDuplicates( Node *head) 
{
 // your code goes here
 Node * cur=head;
 
 if(!head || !head->next)
 return head;
 
 int arr[1000007]={0};
 
 arr[head->data]=1;
 
 while(head->next)
 {
   
    if(!arr[head->next->data])
        arr[head->next->data]=1,head=head->next;
    else
    {
         Node * temp=head;
         temp->next=head->next->next;      
    }
    }
  return cur;
 
}


// 2 marks