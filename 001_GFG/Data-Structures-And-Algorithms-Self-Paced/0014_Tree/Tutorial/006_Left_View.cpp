
int maxi=0;

void preorder(Node *root, vector<int>&vec,int k)
{
    
    if(root)
    {
        if(maxi<k)
        {
            maxi=k;
            vec.push_back(root->data);
        }
        preorder(root->left,vec,k+1);
        preorder(root->right,vec,k+1);
        
    }
}
vector<int> leftView(Node *root)
{
   // Your code here
   maxi=0;
   vector<int> vec;
   int k=1;
   
   preorder(root,vec,k);
   
   return vec;
}