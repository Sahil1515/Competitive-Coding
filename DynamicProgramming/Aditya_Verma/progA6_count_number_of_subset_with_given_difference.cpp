#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n,diff;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d",&n);
	    int * arr=(int *)malloc(n*sizeof(int));
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    scanf("%d",&diff);
	    int sum_tot=accumulate(arr,arr+n,0);
	    
        int sum=(sum_tot+diff)/2;
	    int dp[n+1][sum+1];
	    
	    for (int i = 0; i <= n; i++) 
        dp[i][0] = 1; 
  
        for (int i = 1; i <= sum; i++) 
        dp[0][i] = 0; 
  
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=sum;j++)
	        {
	            
	            if(arr[i-1]<=j)
	            dp[i][j]=dp[i-1][j] + dp[i-1][j-arr[i-1]];
	            
	            else dp[i][j]=dp[i-1][j];
	            
	        }
	    }
      printf("%d\n",dp[n][sum]);   
	    t--;
	}
	return 0;
}
