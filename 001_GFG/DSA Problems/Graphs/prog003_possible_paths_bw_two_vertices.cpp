
// Given a Directed Graph. Count the total number of ways or paths that exist between two vertices in the directed graph.
// These paths doesn’t contain any cycle.

// 1
// 5 7
// 1 2 1 3 1 5 2 4 2 5 3 5 4 3
// 1 5
// 
// Output:
// 4

#include <bits/stdc++.h>
using namespace std;

// Position this line where user code will be pasted.
int countPaths(list<int> g[], int V, int s, int d);
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        int u, v;
        list <int> *adj = new list <int>[N + 1];
        while (M--) {
            cin >> u >> v;
            adj[u].push_back (v);
        }
        int s, e;
        cin >> s >> e;
        cout << countPaths(adj, N, s, e) << endl;
    }
    return 0;
}// } Driver Code Ends


// The Graph structure is as folows
/*
g : Adjacency list of the graph
s : source node
d : destination node
V : number of vertices
*/

// Function to find paths between 2 nodes


void DFS(int x,list<int> g[], int V, int d, int &count,bool visited[])
{
     if(x==d)
     count++;
     
    else {
        for(auto i=g[x].begin();i!=g[x].end();i++)
        if(!visited[*i])
            DFS(*i,g,V,d,count,visited);
    }
}
int countPaths(list<int> g[], int V, int s, int d) {

    int count=0;
    bool visited[V];
    memset(visited,false,sizeof(visited));

        DFS(s,g,V,d,count,visited);
    
    return count;   
}

// 4 Marks

// Execution Time:0.27