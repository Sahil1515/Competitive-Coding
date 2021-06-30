

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


/* This function is used to detect a cycle in undirected graph

*  g[]: array of vectors to represent graph
*  V: number of vertices
*/


void dfs(int s, int visited[], vector<int> adj[],int *flag)
{
    visited[s]=1;
    
    for(auto i: adj[s])
    {
        if(visited[i]==0)
        dfs(i,visited,adj,flag);
        else if (visited[i]==2)
        {
            *flag=1;
            break;
        }
    }
    visited[s]=2;
    
}

bool isCyclic(vector<int> g[], int V)
{
    
    int visited[V];
    
    for(int i=0;i<V;i++)
    visited[i]=0;
    
    int flag=0;
    
    for(int i=0;i<V;i++)
    if(visited[i]==0)
    dfs(i,visited,g,&flag);
    
    if(flag==1)
    return true;
    else return false;
    
}

// { Driver Code Starts.


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
  // } Driver Code Ends




// #include<bits/stdc++.h>
// using namespace std;

// void DFS(vector<int> adj[], int V,int visited[],int s,int * flag,int parent)
// {
//     visited[s]=1;

//     for(auto i=adj[s].begin();i!=adj[s].end();i++)
//     {
//         if(visited[*i]==0)
//         {   
//             DFS(adj,V,visited,*i,flag,s);
//         }
//         else if(*i!=parent)
//         {
//             *flag=1;  
//             break;
//         }
//     }
// }
// bool isCyclic(vector<int> g[], int V)

// {
//    // Your code here
//    int visited[V];
   
//    for(int i=0;i<V;i++)
//        visited[i]=0;
   
//    int flag=0;
//    for(int i=0;i<V;i++)
//    {
//        if(!visited[i])
//        DFS(g,V,visited,i,&flag,-1);
//    }
   
//    if(flag==0)
//    return false;
//    else return true;
   
// }
// Execution Time:0.4
// Marks 4