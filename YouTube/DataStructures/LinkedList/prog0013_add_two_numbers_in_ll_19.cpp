

// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* addTwoLists(struct Node* first, struct Node* second);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
struct Node*reverse(Node * head)
{
    Node * cur=head, *next=NULL, *prev=NULL;
    
    while(cur)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    return prev;
}
struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    // code here
    Node *res=NULL,*cur=NULL,*prev=NULL;
    int carry=0;
    
    first=reverse(first);
    second=reverse(second);
    
    while(first || second)
    {
        int ele=0;
        if(first)
        ele=ele+first->data;
        if(second)
        ele=ele+second->data;
        
        ele=ele+carry;
        carry=0;
        
        if(ele>9)
        ele=ele%10,carry=1;
        
        Node * temp=new Node(ele); 
        
        if(res==NULL)
        {
            res=temp;
        }
        else
        {
            cur->next=temp;
        }
        cur=temp;
        
        if(first)
        first=first->next;
        if(second)
        second=second->next;
    }
    if(carry>0)
    cur->next=new Node(carry),cur=cur->next;
   
    cur->next=NULL;
    res=reverse(res);
    return res;
}

// Execution Time:0.11

// 2 Marks