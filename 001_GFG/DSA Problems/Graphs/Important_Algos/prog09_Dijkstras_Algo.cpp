#include<bits/stdc++.h>
using namespace std;

int find_min(int dist[], bool visited[], int V)
{
    int mini =INT_MAX;
    int index;
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false && dist[i]<=mini)
        mini=dist[i], index=i;
    }
    return index;
}
int main()
{
    int V;

    scanf("%d",&V);

      int arr[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
    

    int dist[V];
    bool visited[V];
    for(int i=0;i<V;i++)
    dist[i]=INT_MAX, visited[i]=false;

    int start_Ver;
    scanf("%d",&start_Ver);
    dist[start_Ver]=0;

    for(int count=0;count<V-1;count++)
    {
        int u=find_min(dist,visited,V);
        
        visited[u]=true;
        for(int i=0;i<V;i++)
        {
            if(visited[i]==false && arr[u][i] && dist[u]!=INT_MAX && dist[u]+arr[u][i]< dist[i])
            dist[i]=dist[u]+arr[u][i];
        }
    }
    for(int i=0;i<V;i++)
    {
        printf("%d->%d\n",i,dist[i]);
    }

    return 0;
}

// Input:

// 9
// 0