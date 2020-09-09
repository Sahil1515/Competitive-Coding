#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    int sum;
	    scanf("%d",&n);
	    int coin_arr[n];
	    
	    for(int i=0;i<n;i++)
	    scanf("%d",&coin_arr[i]);
	    
	    scanf("%d",&sum);
	    
	    int dp[n+1][sum+1];
	    
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=sum;j++)
	        {
	            if(i==0)
	            dp[i][j]=0;
	            else if(j==0)
	            dp[i][j]=1;
	            else if(coin_arr[i-1]<=j)
	            dp[i][j]=dp[i][j-coin_arr[i-1]]+dp[i-1][j];
	            else dp[i][j]=dp[i-1][j];
	        }
	    }
	    
	    printf("%d\n",dp[n][sum]);
	    
	}
	return 0;
}

// Execution Time:0.01
// ACIOG