// Returns maximum value in a given Binary Tree
int findMax(struct node* root)
{
// Your code goes here

    if(!root)
    return INT_MIN;
    
    return ( max(max(findMax(root->left),findMax(root->right))  ,root->data) );
}

// Returns minimum value in a given Binary Tree
int findMin(struct node* root)
{
// Your code goes here

     if(!root)
    return INT_MAX;
    
    return ( min(min(findMin(root->left),findMin(root->right))  ,root->data) );
}