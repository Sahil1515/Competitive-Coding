// void search_root(Node * T, Node * S,Node * temp)
// {
//     if(T)
//     {   
//         if(T->data==S->data)
//        {
//             temp= T;
//             return ;
//        }
//         search_root(T->left,S,temp);
//         search_root(T->right,S,temp);
//     }
// }

// bool check(Node * root1, Node * root2)
// {
//     if(root1 && root2)
//     {
//         if(root1->data!=root2->data)
//         return false;
        
//         return check(root1->left,root2->left) && check(root1->right,root2->right);
//     }
//     if(root1==NULL && root2==NULL)
//     return true;
//     else
//     return false;
// }

// bool isSubTree(Node* T, Node* S) {
//     // Your code here
//     // return 1 if S is subtree of T else 0
//     if(S==NULL)
//     return 1;
    
//     if(T==NULL)
//     return 0;
    
//     Node * temp=NULL;
    
//     search_root(T,S,temp);
    
//     return check(temp,S);
    
// }