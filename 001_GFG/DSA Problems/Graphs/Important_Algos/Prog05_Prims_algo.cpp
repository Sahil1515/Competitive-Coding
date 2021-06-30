
#include<bits/stdc++.h>
using namespace std;


int spanningTree(int V, int E, vector<vector<int>> &graph);
// Driver code

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int> > graph(V, vector<int>(V, INT_MAX));
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            u--, v--;
            graph[u][v] = w;
            graph[v][u] = w;
        }

        cout << spanningTree(V, E, graph) << endl;
    }
    return 0;
}
// } Driver Code Ends


// Function to construct and print MST for
// a graph represented using adjacency
// matrix representation, with V vertices.
// graph[i][j] = weight if edge exits else INT_MAX



int find_min(bool mySet[],int key[],int V)
{
    int min=INT_MAX;
    int index=0;
    
    for(int i=0;i<V;i++)
    {
        if(mySet[i]==false && key[i]<min)
        {
            min=key[i],index=i;
        }
    }
    return index;
}
int spanningTree(int V, int E, vector<vector<int>> &graph) {
    // code here
    
    int parent[V];
    int key[V];
    bool mySet[V];
    
    int sum=0;
    
    for(int i=0;i<V;i++)
    {
        key[i]=INT_MAX,mySet[i]=false;
    }
    
    key[0]=0;
    parent[0]=-1;
    
    
    for(int i=0;i<V;i++)
    {
        int u=find_min(mySet,key,V);
        mySet[u]=true;
        // sum=sum+key[u];
        
        for(int v=0;v<V;v++)
        {
            if(graph[u][v] && mySet[v]==false && graph[u][v]<key[v])
            key[v]=graph[u][v],parent[v]=u;
            
        }
    }
    
    for(int i=1;i<V;i++)
    {
        sum=sum+graph[i][parent[i]];
    }
    return sum;
}


// Execution Time:0.35