#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int N,W;
	    scanf("%d%d",&N,&W);
	    int wt[N];
	    int val[N];
	    
	    for(int i=0;i<N;i++)
	    {
	        scanf("%d",&val[i]);
	    }
	                                  
	    for(int i=0;i<N;i++)
	    {
	        scanf("%d",&wt[i]);
	    }
	    
	    int dp[N+1][W+1];
	    
	    for(int i=0;i<=N;i++)
	    {
	        for(int j=0;j<=W;j++)
	        {
	            if(i==0||j==0)
	            dp[i][j]=0;
	            else if(wt[i-1]<=j)
	            dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
	            else dp[i][j]=dp[i-1][j];
	        }
	    }
	    printf("%d\n",dp[N][W]);
	    
	}
	return 0;
}

// Execution Time:0.18