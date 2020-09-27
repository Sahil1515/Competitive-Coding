
/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/
    vector<int> v;
void DFS(vector<int> g[], int N, int s,bool visited[])
{
    v.push_back(s);
    visited[s]=true;
    
    for( auto i=g[s].begin();i!=g[s].end();i++)
    {
        if(!visited[*i])
        {
            DFS(g,N,*i,visited);
        }
    }
}
vector <int> dfs(vector<int> g[], int N)
{
    
    // Your code here
    v.clear();
     bool visited[N];
    for(int i=0;i<N;i++)
        visited[i]=false;
        
    DFS(g,N,0,visited);
    return v;

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
// Execution Time:0.49
// 2 Marks