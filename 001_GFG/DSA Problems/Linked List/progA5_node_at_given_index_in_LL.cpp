
// C program to find n'th node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
 
/* Link list node */
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
};
 
void push(struct node** head_ref, int new_data)
{
   
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
 
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

int GetNth(struct node* head, int index);


/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;
    
    cin>>T;
    
    while(T--){
    struct node *head = NULL;
        
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            push(&head,l);
        }
   
    printf("%d\n", GetNth(head, n-k));  
    getchar();
    }
    return 0;
}
 // } Driver Code Ends
/* Print he nth node in the linked list Node is defined as 
/* Link list node
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}; 
*/

// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* node, int index){
  // Code here
  int c=-1;
    while(node!=NULL)
    {
        c++;
        if(index==c)
        {
            return node->data;
        }
        node=node->next;
    }
  return -1;
}

// Input:
// 2
// 6 5
// 1 2 3 4 657 76
// 10 2
// 8 7 10 8 6 1 20 91 21 2

// Output:
// 657
// 7