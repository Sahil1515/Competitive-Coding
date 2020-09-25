




#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int> adj[], int V,int visited[],int s,int * flag,int parent)
{
    visited[s]=1;

    for(auto i=adj[s].begin();i!=adj[s].end();i++)
    {
        if(visited[*i]==0)
        {   
            DFS(adj,V,visited,*i,flag,s);
        }
        else if(*i!=parent)
        {
            *flag=1;  
            break;
        }
    }
}
bool isCyclic(vector<int> g[], int V)

{
   // Your code here
   int visited[V];
   
   for(int i=0;i<V;i++)
       visited[i]=0;
   
   int flag=0;
   for(int i=0;i<V;i++)
   {
       if(!visited[i])
       DFS(g,V,visited,i,&flag,-1);
   }
   
   if(flag==0)
   return false;
   else return true;
   
}
// Execution Time:0.4
// Marks 4