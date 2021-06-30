
vector<vector<int>> levelOrder(Node *node)
{
    queue<Node *> q;
    vector<vector<int>> vec;

    q.push(node);
    q.push(NULL);

    while (!q.empty())
    {
        vector<int> vecTemp;
        while (q.front() != NULL && !q.empty())
        {
            Node *temp = q.front();
            q.pop();
            vecTemp.push_back(temp->data);

            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }
        
        
        if(q.front()==NULL)
        q.pop();

        if (!q.empty())
            {
                q.push(NULL);
            }
        
        vec.push_back(vecTemp);
    }
    return vec;
}
