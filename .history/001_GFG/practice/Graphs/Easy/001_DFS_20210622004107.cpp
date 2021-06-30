


class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int v, vector<int> adj[], vector<bool> &vis, vector<int> & result)
    {
        
        vis[v]=true;
        result.push_back(v);
        
        for(auto ele: adj[v])
        {
            if(!vis[ele])
            {
                dfs(ele,adj,vis, result);
            }
        }
        
    }

	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    
	    vector<bool> vis(V,false);
	    vector<int> result;
	    
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        dfs(i,adj,vis, result);
	    }
	    return result;
	    
	}
};


Correct Answer.Correct Answer
Execution Time:0.01