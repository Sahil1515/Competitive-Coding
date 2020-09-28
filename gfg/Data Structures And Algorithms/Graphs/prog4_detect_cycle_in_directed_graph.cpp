/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/

void dfs(int s, int visited[], vector<int> adj[],int *flag)
{
    visited[s]=1;
    
    for(auto i: adj[s])
    {
        if(visited[i]==0)
        dfs(i,visited,adj,flag);
        else if (visited[i]==1)
        {
            *flag=1;
            return;
        }
    }
    visited[s]=2;
    
}
bool isCyclic(int V, vector<int> adj[])
{
    
    int visited[V];
    
    for(int i=0;i<V;i++)
    visited[i]=0;
    
    int flag=0;
    
    for(int i=0;i<V;i++)
    if(visited[i]==0)
    dfs(i,visited,adj,&flag);
    
    if(flag==1)
    return true;
    else return false;
    
}

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends























// #include<bits/stdc++.h>
// using namespace std;

// stack<int> s1;
// void DFS(vector<int> adj[],int V, int visited[], int s,int *flag)
// {
//     s1.push(s);
//     visited[s]=0;
    
//     for(auto i=adj[s].begin();i!=adj[s].end();i++)
//     {
//         if(visited[*i]==-1)
//         {
//             DFS(adj,V,visited,*i,flag);
//         }
//         else if(visited[*i]==0)
//         {
//             *flag=1;
//             break;
//         }
//     }
//     s1.pop();
//     visited[s]=1;
    
// }
// bool isCyclic(int V, vector<int> adj[])
// {
//     // Your code here
//     int visited[V];
//     for(int i=0;i<V;i++)
//     visited[i]=-1;
//     int flag=0;
    
//     for(int i=0;i<V;i++)
//     {
//         if(visited[i]==-1)
//         DFS(adj,V,visited,i,&flag);
//     }
//     if(flag==0)
//     {
//        return false;
//     }
//     else return true;
// }

// Execution Time:0.26
// Marks 4



// void dfs(int s, int visited[], vector<int> adj[],int *flag)
// {
//     visited[s]=1;
    
//     for(auto i: adj[s])
//     {
//         if(visited[i]==0)
//         dfs(i,visited,adj,flag);
//         else if (visited[i]==1)
//         {
//             *flag=1;
//             break;
//         }
//     }
//     visited[s]=2;
    
// }
// bool isCyclic(int V, vector<int> adj[])
// {
    
//     int visited[V];
    
//     for(int i=0;i<V;i++)
//     visited[i]=0;
    
//     int flag=0;
    
//     for(int i=0;i<V;i++)
//     if(visited[i]==0)
//     dfs(i,visited,adj,&flag);
    
//     if(flag==1)
//     return true;
//     else return false;
    
// }