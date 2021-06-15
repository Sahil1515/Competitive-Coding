

class Solution
{
    public:
    //Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root)
    {
        
       queue<Node*> q;
       
       q.push(root);
       q.push(NULL);
    
       int ans=1;

      while(!q.empty())
      {
          while(q.front()!=NULL && !q.empty())
          {
              Node *temp=q.front();
              q.pop();
               
              if(temp->left)
              q.push(temp->left);
               
              if(temp->right)
              q.push(temp->right);
          }
           
          if(q.front()==NULL)
          q.pop();
           
          if(!q.empty())
          {
              ans=max(ans,(int)q.size());// This happens only when level is shifted
              q.push(NULL);
          }
      }
       
       return ans;
       
    }
};




