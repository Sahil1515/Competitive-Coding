#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d",&n);
	    int * arr=(int *)malloc(n*sizeof(int));
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    
	    int sum=accumulate(arr,arr+n,0);
	    
	    bool dp[n+1][sum+1];
	    
	    for (int i = 0; i <= n; i++) 
        dp[i][0] = true; 
  
        for (int i = 1; i <= sum; i++) 
        dp[0][i] = false; 
  
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=sum;j++)
	        {
	            
	            if(arr[i-1]<=j)
	            dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
	            
	            else dp[i][j]=dp[i-1][j];
	            
	        }
	    }
        int diff=INT_MAX;
	    for(int i=sum/2;i>=0;i--)
	        if(dp[n][i]==true)
	        {
	            diff=2*i;
	            break;
	        }

	   printf("%d\n",sum-diff); 
	    t--;
	}
	return 0;
}

// Execution Time:0.09
// marks :8
