
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


// Rearranges given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *rearrangeEvenOdd(Node *head);

/* Driver program to test above function*/
int main()
{
    int T,i,n,l;

    cin>>T;

    while(T--)
    {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>l;

            if (head == NULL)
            {   
                head = temp = new Node(l); 
                
            }
            else
            {  temp->next = new Node(l);
               temp = temp->next;
            }
        }

        head = rearrangeEvenOdd(head);
        while(head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
    return 0;
}
// } Driver Code Ends


/* Node structure

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

// Should rearrange given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *rearrangeEvenOdd(Node *head)
{
   // Your Code here
   if(head==NULL)
   return NULL;
   
   Node* o=head;
   Node* o1=head;
   Node* e=o->next;
   Node* e1=o->next;
   
   while(o&&e)
   {
       o->next=e->next;
       o=o->next;
       
       if(o)
       {
           e->next=o->next;
           e=e->next;
       }
   }
   o=o1;
   while(o->next)
   {
      o = o->next;
   }
   o->next=e1;
   return o1;
}


// Execution Time:0.24

// 2 Marks

// Input:
// LinkedList: 1->2->3->4
// Output: 1 3 2 4