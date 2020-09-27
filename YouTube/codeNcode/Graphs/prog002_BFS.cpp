
/* You have to complete this function*/

/* Function to do BFS of graph
*  g[]: adj list of the graph
*  N : number of vertices
*/

#include<bits/stdc++.h>
using namespace std;
vector <int> BFS(vector<int> g[], int N, int s)
{
     bool visited[N];
    for(int i=0;i<N;i++)
    {
        visited[i]=false;        
    }
    
    queue<int> q;
    vector <int> v;
    
    q.push(s);
    
    while(!q.empty())
    {
        int s=q.front();
        v.push_back(s);
        q.pop();
        
        for(auto i=g[s].begin();i !=g[s].end();i++)
        {
            if(!visited[*i])
            {
                visited[*i]=true;
                q.push(*i);
            }
        }
        
    }
    return v;
}

vector <int> bfs(vector<int> g[], int N) {

    // Your code here
   return BFS(g,N,0);
}


// Execution Time:0.43
// 2 Marks