#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

void preOrder( struct node *root) {
  
	if( root == NULL ) 
      return;
	printf("%d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
  
}

/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/
struct node * new_node(int data)
{
    struct node * n=(struct node * )malloc(sizeof(struct node)); 
    n->left=n->right=NULL;
    n->data=data;
    return n;
}
struct node* insert( struct node* root, int data ) {
        
   if(root==NULL)
   return new_node(data);
   if(data<root->data)
   root->left=insert(root->left,  data);
   else if(data>root->data)
  root->right=insert(root->right,data);
  return root;

}

int main() {
  
    struct node* root = NULL;
    
    int t;
    int data;

    scanf("%d", &t);

    while(t-- > 0) {
        scanf("%d", &data);
        root = insert(root, data);
    }
  
	preOrder(root);
    return 0;
}
