int height(Node *root)
{
    if(!root)
    return 0;
    
    return (max(height(root->left),height(root->right))+1);
}

//Function to check whether a binary tree is balanced or not.
bool isBalanced(Node *root)
{

    if(!root)
    return 1;
    
    return (isBalanced(root->left) &&
            isBalanced(root->right) &&
            abs(height(root->left)-height(root->right))<=1
            );
}
