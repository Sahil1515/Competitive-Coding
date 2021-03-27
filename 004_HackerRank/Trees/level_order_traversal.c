#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

struct node* insert( struct node* root, int data ) {
		
	if(root == NULL) {
	
        struct node* node = (struct node*)malloc(sizeof(struct node));

        node->data = data;

        node->left = NULL;
        node->right = NULL;
        return node;
	  
	} else {
      
		struct node* cur;
		
		if(data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;
		} else {
            cur = insert(root->right, data);
            root->right = cur;
		}
	
		return root;
	}
}

/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/


int * arr;
int h;
int max(int a,int b)
{
    return a>b?a:b; 
}
int getHeight(struct node* root) {
    if(root==NULL)
    return 0;
    return max(getHeight(root->left),getHeight(root->right))+1;
}
void preOrder( struct node *root,int t) {
if(root!=NULL)
{
    preOrder(root->left,t*2);
    arr[t]=root->data; 
    preOrder(root->right,2*t+1); 
    
}
}


void levelOrder( struct node *root) {
  h=getHeight(root);
 arr=(int*)malloc((pow(2,h))*sizeof(int)); 
   for (int i = 0; i < pow(2,h); i++)
    {
       arr[i]=0;
    }
    
 int t=1;
 preOrder(root,t); 
 for(int i=1;i<pow(2,h);i++)
    {
        if(arr[i]!=0)
        printf("%d ",arr[i]);
    }
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
  
	levelOrder(root);
    return 0;
}
