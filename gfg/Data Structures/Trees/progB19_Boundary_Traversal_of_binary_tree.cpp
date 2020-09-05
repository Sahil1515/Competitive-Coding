#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

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


vector <int> printBoundary(Node *root);

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
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);

        vector <int> res = printBoundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends


/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
 vector<int > v;
void printLeft(Node * root)
{
    if(root)
    {
        if(root->left ==NULL && root->right ==NULL) 
        return ;
        else 
        v.push_back(root->data);
        if(root->left)
        printLeft(root->left);
        else if(root->right)
        printLeft(root->right);
    }
    
}
void printRight(Node *root)
{
    
     if(root)
    {
        if(root->right)
        printRight(root->right);
        else if(root->left)
        printRight(root->left);
        if( !root->left ==NULL || !root->right ==NULL)
        v.push_back(root->data);
    }

}

void  printLeaves(Node* root)
{
     if(root)
    {
        printLeaves(root->left);
        printLeaves(root->right);
        if(root->left==NULL && root->right ==NULL )
        v.push_back(root->data);
    }
    
}


vector <int> printBoundary(Node *root)
{
    v.clear();
    if(root==NULL)
    return v;
    
    printf("%d ",root->data);
    printLeft(root->left);
    printLeaves(root);
    printRight(root->right);
    
    return v;
    
    
}