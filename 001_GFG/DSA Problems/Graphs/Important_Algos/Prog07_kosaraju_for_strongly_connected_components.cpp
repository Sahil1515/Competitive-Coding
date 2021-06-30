#include<bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


/*  Function to find the number of strongly connected components
*   using Kosaraju's algorithm
*   V: number of vertices
*   adj[]: array of vectors to represent graph
*/
void fill_order(vector<int> adj[],stack<int> &stk,bool visited[],int V,int s)
{
    visited[s]=true;
    
    for(auto ele :adj[s])
    {
        if(!visited[ele])
        fill_order(adj,stk,visited,V,ele);
    }
    stk.push(s);
}

void  transpose(vector<int> adj[], int V,  vector<int> g[])
{
    for(int i=0;i<V;i++)
    {
        for(auto ele: adj[i])
        {
            g[ele].push_back(i);
        }
    }

}
void DFS(vector<int> adj[],bool visited[],int V,int s)
{
     visited[s]=true;
    for(auto ele :adj[s])
    {
        if(!visited[ele])
        DFS(adj,visited,V,ele);
    }
}
int kosaraju(int V, vector<int> adj[])
{
    // Your code here
    stack<int> stk;
    
    bool visited[V];
    for(int i=0;i<V;i++)
    visited[i]=false;
    
    for(int i=0;i<V;i++)
    if(!visited[i])
    fill_order(adj,stk,visited,V,i);
    
    vector<int> g[V];
    transpose(adj,V,g);
    
    for(int i=0;i<V;i++)
    visited[i]=false;
    
    int count=0;
    
    while(stk.empty()==false)
    {
        int v=stk.top();
        stk.pop();
    
     
     if(!visited[v])
     {
        DFS(g,visited,V,v);
        count++;
     }
    }
    return count;
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int m, n;
        vector<int> adj[a];
        for (int i = 0; i < b; i++) {
            cin >> m >> n;
            adj[m].push_back(n);
        }
        cout << kosaraju(a, adj) << endl;
    }
    return 0;
}
  // } Driver Code Ends 



// Execution Time:0.35