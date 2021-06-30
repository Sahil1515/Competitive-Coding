







 public:
    //Function to find the vertical order traversal of Binary Tree.
    
    void postorder(Node * root, map<int,vector<int>> &map , int level)
    {
        if(root)
        {
            map[level].push_back(root->data);
            postorder(root->left,map,level-1);
            postorder(root->right,map,level+1);
          
        }
    }
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int,vector<int>> map;
        
        postorder(root,map,0);
        
        vector<int> vec;
        
        for(auto ele: map )
        {
            for(auto i: ele.second)
            {
                vec.push_back(i);
            }
        }
        
        return vec;
        
    } public:
    //Function to find the vertical order traversal of Binary Tree.
    
    void postorder(Node * root, map<int,vector<int>> &map , int level)
    {
        if(root)
        {
            map[level].push_back(root->data);
            postorder(root->left,map,level-1);
            postorder(root->right,map,level+1);
          
        }
    }
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int,vector<int>> map;
        
        postorder(root,map,0);
        
        vector<int> vec;
        
        for(auto ele: map )
        {
            for(auto i: ele.second)
            {
                vec.push_back(i);
            }
        }
        
        return vec;
        
    }

    // Not working for some cases, explained by TECH Dose