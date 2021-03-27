#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void printSpiral(Node *root);

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    string  tc;
    getline(cin,tc);
    t=stoi(tc);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);

        printSpiral(root);
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends


/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

void printSpiral(Node *root)
{
    //Your code here
    
    if(root==NULL)
    return;
    
    deque<Node *> q;
    
    printf("%d ",root->data);
    int iter=1;
    if(root->left)
    q.push_back(root->left);
    if(root->right)
    q.push_back(root->right);
  while(1)
  {
      int t=q.size();
    while(t!=0)
    {
        t--;
        
       if(iter%2==1)
       {
        Node* temp=q.front();
        q.pop_front();
        if(temp->left)
        q.push_back(temp->left);
        if(temp->right)
        q.push_back(temp->right);
        printf("%d ",temp->data);
       }
       else 
        {
        Node* temp=q.back();
        q.pop_back();
        if(temp->right)
        q.push_front(temp->right);
        if(temp->left)
        q.push_front(temp->left);
        printf("%d ",temp->data);
        }
    }
      iter++;
      
      if(q.empty()==true)
        break;
  }

}

// https://www.geeksforgeeks.org/level-order-traversal-in-spiral-form/

// using stacks is easier