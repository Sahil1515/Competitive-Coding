#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t, n, W;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d%d",&n,&W);
	    int * val=(int *)malloc(n*sizeof(int));
	    int * wt=(int *)malloc(n*sizeof(int));
	   
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&val[i]);
	    }
	    
	     for(int i=0;i<n;i++)
	    {
	        scanf("%d",&wt[i]);
	    }
	    
	    int arr2[n+1][W+1];
	    
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=W;j++)
	        {
	            if(i==0 || j==0)
	            {
	                arr2[i][j]=0;
	            }
	            
	            else if(wt[i-1]<=j)
	            {
	                arr2[i][j]=max(val[i-1]+arr2[i-1][j-wt[i-1]],arr2[i-1][j]);
	            }
	            else arr2[i][j]=arr2[i-1][j];
	        }
	    }
	    
	    printf("%d\n",arr2[n][W]);
	    t--;
	}
	return 0;
}

// Execution Time:0.15
// Marks: 2