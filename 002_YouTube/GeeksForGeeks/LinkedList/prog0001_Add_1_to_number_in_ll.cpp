//Initial template for C++

#include <bits/stdc++.h> 
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

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 

Node* addOne(Node *head);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        
        head = addOne(head);
        printList(head); 
    }
    return 0; 
} 
// } Driver Code Ends

//User function template for C++

/* 

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
int add(Node * head)
{
    if(head==NULL)
    return 1;
    
    int sum=0;
    int carry=0;
    
    sum=head->data+add(head->next);
    if(sum>9)
    {
        sum=sum%10;
        carry=1;
    }
    head->data=sum;
    return carry;
}

Node* addOne(Node *head) 
{
    // Your Code here
    // return head of list after adding one
    int carry=add(head);
    if(carry==1)
    {
        Node *temp= new Node(carry);
        temp->next=head;
        head=temp;
        return head;
    }
    return head;
}


// Execution Time:0.02


// Input:
// LinkedList: 4->5->6
// Output: 457 