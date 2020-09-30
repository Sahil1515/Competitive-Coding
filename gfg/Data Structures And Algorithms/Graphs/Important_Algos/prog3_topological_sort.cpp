
// The Graph structure is as folows

/*  Function which sorts the graph vertices in topological form
*   N: number of vertices
*   adj[]: input graph
*/

#include<bits/stdc++.h>
using namespace std;

void DFS(int V,vector<int> adj[],bool visited[],int s,stack<int> &stk)
{
    visited[s]=true;
    for(auto i=adj[s].begin();i!=adj[s].end();i++)
    {
        if(!visited[*i])
        {
            DFS(V,adj,visited,*i,stk);
        }
    }
    
    stk.push(s);
    
}
vector<int> topoSort(int V, vector<int> adj[]) {
    // Your code here
    
    bool visited[V];
    for(int i=0;i<V;i++)
    visited[i]=false;
    
    stack<int> stk;
    vector<int>v1;
    for(int i=0;i<V;i++)
    if(!visited[i])
    DFS(V,adj,visited,i,stk);
    
    while(!stk.empty())
    {
        v1.push_back(stk.top());
        stk.pop();
    }
    
    return v1;
    
}

// Execution Time:0.51
// Marks 4