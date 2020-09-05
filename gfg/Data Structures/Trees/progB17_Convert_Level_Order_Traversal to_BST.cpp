//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};

void preorderTraversal(Node* root)
{
	if (!root)return;
	cout << root->data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right); 
}

Node* constructBst(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        Node *root = constructBst(arr, n);
        preorderTraversal(root);
        cout<<endl;
    }
	return 0; 
}// } Driver Code Ends
//User function Template for C++
/*
Structure of the Node of the node of the bst 
should be as
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/
// You are required to complete this function
Node* constructBst(int arr[], int n)
{
    
   struct Node * head=NULL;
   for(int i=0;i<n;i++)
   {
     Node * n2=new Node(arr[i]);
       Node *cur=head;
       Node *pre=cur;
       if(cur==NULL)
     {  head=n2 ;
         continue;
     }
       
     
          while(cur!=NULL)
      {
      if(arr[i]<cur->data)
      {
          pre=cur;
           cur=cur->left;
      }
       else if(arr[i]>cur->data)
       {   
           pre=cur;
         cur=cur->right;
       }
      }
       if(arr[i]<pre->data)
       pre->left=n2;
       else if(arr[i]>pre->data)
       pre->right=n2;
       }
       return head;
}
