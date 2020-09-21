
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */

void linkdelete(struct Node  *head, int M, int N);

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert(int n1)
{
    int n,value;
    n=n1;
    struct Node *temp;
    
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp=start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp=temp->next;
        }
    }
}

int main()
{
    int t,n1;
    cin>>t;
    while (t--) {
        cin>>n1;
        int m,n;
        cin>>m;
        cin>>n;
        insert(n1);
        linkdelete(start,m,n);
        printList(start);
    }
    
    return 0;
}
// } Driver Code Ends


/*
delete n nodes after m nodes
  The input list will have at least one element  
  Node is defined as 

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

*/

void linkdelete(struct Node  *head, int m, int n)
{
    //Add code here 
    if(head==NULL)
    return;
    
     Node * cur=head;
    Node * temp=head;
    
    while(cur && temp)
    {
        
    int i=0,j=0;
    while(cur!=NULL && i<m-1)
    {
        cur=cur->next;
        i++;
    }
    
    if(cur!=NULL)
    {
         temp=cur->next;
         while(temp!=NULL && j<n)
        {
            temp=temp->next;
            j++;
        }
        cur->next=temp;
        cur=cur->next;
    }
    
    }
    
    
}




// Execution Time:0.02

// 2 Marks

// Example:
// Input:
// 2
// 8
// 2 1
// 9 1 3 5 9 4 10 1
// 6
// 6 1
// 1 2 3 4 5 6

// Output: 
// 9 1 5 9 10 1
// 1 2 3 4 5 6