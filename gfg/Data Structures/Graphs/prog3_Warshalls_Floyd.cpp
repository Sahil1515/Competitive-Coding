#include <iostream>
using namespace std;

int main() {
	//code
	int t, V;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d",&V);
	    int graph[V][V];
	    
	    for(int i=0;i<V;i++)
	    {
	        for(int j=0;j<V;j++)
	        {
	            scanf("%d",&graph[i][j]);
	        }
	    }
	    
	    for(int k=0;k<V;k++) 
	    {
	        for(int i=0;i<V;i++)
	        {
	            for(int j=0;j<V;j++)
	            {
	                if(graph[i][j]>graph[k][j]+graph[i][k])
	                {
	                    graph[i][j]=graph[k][j]+graph[i][k];
	                }
	            }
	        }
	    }
	     for(int i=0;i<V;i++)
	    {
	        for(int j=0;j<V;j++)
	        {
	            if(graph[i][j]==10000000)
	            printf("INF ");
	            else 
	            printf("%d ",graph[i][j]);
	        }
	        printf("\n");
	    }
	    t--;
	}
	return 0;
}

// Execution Time:0.26
// 4 Marks