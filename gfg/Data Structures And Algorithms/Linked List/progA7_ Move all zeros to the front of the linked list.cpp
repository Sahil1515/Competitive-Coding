
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void push(struct Node **head_ref, int new_data) {
    struct Node *new_node = new Node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void moveZeroes(struct Node **head);

// function to displaying nodes
void display(struct Node *head) {
    while (head != NULL) {
	    cout << head->data << " ";
	    head = head->next;
    }
    cout <<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int q;
        struct Node *Head=NULL;
        for(int i=0;i<n;i++)
        {
            cin>>q;
            push(&Head,q);
        }
        moveZeroes(&Head);
        display(Head);

    }
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/* Linked List Node structure
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
// Move Zeros to the front of the list
void moveZeroes(struct Node **head)
{
   struct Node *temp=*head;
   struct Node *zero=NULL;

    if(*head==NULL)
    return;

    while(temp->next!=NULL)
    {
        if(temp->next->data==0)
        {
        zero=temp->next;
        temp->next=temp->next->next;
        zero->next= *head;
       *head=zero;
        }
        else temp=temp->next;

    }
}


// Input:
// 2
// 10
// 0 1 0 1 2 0 5 0 4 0
// 7
// 0 0 0 3 2 1 1

// Output:
// 0 0 0 0 0 4 5 2 1 1
// 0 0 0 1 1 2 3