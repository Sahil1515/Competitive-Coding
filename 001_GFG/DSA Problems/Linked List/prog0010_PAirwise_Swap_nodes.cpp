


// Input:
// LinkedList: 1->2->2->4->5->6->7->8
// Output: 2 1 4 2 6 5 8 7


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

Node* pairWiseSwap(Node* head);

void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i<n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		
		head = pairWiseSwap(head);
		printList(head);
	}
	return 0; 
}
// } Driver Code Ends


/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/

Node* pairWiseSwap(struct Node* head) {
    // The task is to complete this method
    if(head==NULL)
    return NULL;
    
    if(head->next==NULL)
    return head;
    
    if(head->next->next==NULL)
    {
        Node * temp=head->next;
        head->next=NULL;
        temp->next=head;
        return temp;
    }
    
    Node * cur= head;
    
    Node * next1=cur->next;
    cur->next=next1->next;
    next1->next=cur;
    head=next1;
    
    
    while(cur && cur->next && cur->next->next)
    {
    next1=cur->next;
    cur->next=next1->next;
    cur=cur->next;
    Node *next2=cur->next;
    cur->next=next1;
    next1->next=next2;
    cur=cur->next;

    }
    
    return head;
    
    
}

// Execution Time:0.05