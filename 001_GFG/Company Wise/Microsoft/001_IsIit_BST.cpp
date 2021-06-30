

class Solution
{
    public:
    bool isBSTUtil(Node * root, int maxi, int mini)
    {
        if(root==NULL)
            return true;
        
        if ( root->data <mini || root->data > maxi) 
        return false;
        
        return (isBSTUtil(root->left,root->data-1,mini) && isBSTUtil(root->right,maxi,root->data+1));
        
    }
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
       return isBSTUtil(root, INT_MAX, INT_MIN);
    }
};


Correct Answer.Correct Answer
Execution Time:0.03