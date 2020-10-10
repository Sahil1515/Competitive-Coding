#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/

void dfs_util(int s,vector<int> g[],vector<int> &a,int visited[])
{
    a.push_back(s);
    visited[s]=1;
    
    for(auto ele : g[s])
    {
        if(!visited[ele])
        dfs_util(ele,g,a,visited);
    }
    
}
vector <int> dfs(vector<int> g[], int N)
{
    
    // Your code here
    vector<int> a;
    
    int visited[N];
    for(int i=0;i<N;i++)
    visited[i]=0;
    
    for(int i=0;i<N;i++)
    if(!visited[i])
    dfs_util(i,g,a,visited);
    
    return a;
    

}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector <int> res = dfs(g, N);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout<<endl;

    }
}  // } Driver Code Ends