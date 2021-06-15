


// Given an connected undirected graph of N edges and a node X is given. The task is to find the level of X. if X does not exist in the graph then print -1.
 
 #include <bits/stdc++.h>
using namespace std;

class Graph 
{ 
	int V; 
	vector<int> *adj; 
    
public: 
    Graph(int V); 
	void addEdge(int u, int v); 
	int levels(int x, int in); 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new vector<int>[V+1]; 
} 

void Graph::addEdge(int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 


 // } Driver Code Ends


// The Graph structure is as folows
/*
class Graph 
{ 
	int V; 
	vector<int> *adj; 
    
public: 
    Graph(int V); 
	void addEdge(int u, int v); 
	int countPaths(int s, int d); 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new vector<int>[V+1]; 
} 

void Graph::addEdge(int u, int v) 
{ 
    adj[u].push_back(v); 
} 
*/

// Complete the Function

int vis[10001];
int level_final=0;
int level_cur=0;


int Graph::levels( int x, int in){

    int flag=0;
    
    for(int i=0;i<10001;i++)
    vis[i]=0;
    
    level_cur=1,level_final=0;
    
    queue<int> q;
    q.push(x);
    vis[x]=1;
    
    while(!q.empty())
    {
       
       int size=q.size();
       while(size--)
       {
        int cur=q.front();
        q.pop();
        
        for(auto ele: adj[cur])
        {
            if(!vis[ele])
            {
                q.push(ele);
                vis[ele]=1;
                if(ele==in)
                {
                    level_final=level_cur;
                    flag=1;
                    break;
                }
                
            }
        }
        if(flag==1)
        break;
        
       }
       
        level_cur++;
    }
    
    if(level_final==-1)
    return -1;
    
    return level_final;
    
    
}



// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, e;
	    cin >> n >> e;
	    Graph g(n);
	    int u, v;
	    for(int i = 0;i<e;i++){
	        cin >> u >> v;
	        g.addEdge(u, v);
		}
	    
	    int x;
	    cin >> x;
	    
	    if(x >= n) cout << "-1" << endl;
	    else
	        cout << g.levels( 0, x) << endl;
	    
	}
	
	return 0;
}
  // } Driver Code Ends

//  Execution Time:0.38