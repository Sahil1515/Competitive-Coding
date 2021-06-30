#include<bits/stdc++.h>
using namespace std;

int main()
{
    int V;
    int E;
    scanf("%d%d",&V,&E);

    int arr[V][V]={
                    { 0, -1, 4, 0 ,0 },
                    { 0, 0, 3, 2 ,2 },
                    { 0, 0, 0, 0 ,0 },
                    { 0, 1, 5, 0 ,0 },
                    { 0, 0, 0, -3 ,0 }
                  };

    int dist[V];

    for(int i=0;i<V;i++)
    dist[i]=INT_MAX;

    dist[0]=0;

    for(int i=0;i<=V-1;i++)
    {
        for(int j=0;j<E;j++)
        {
            if( arr[i][j] && dist[i]!=INT_MAX && dist[j]> arr[i][j]+dist[i])
            dist[j]=arr[i][j]+dist[i];
        }
    }

    for(int i=0;i<V;i++)
    printf("%d-> %d\n",i,dist[i]);

    
    return 0;
}