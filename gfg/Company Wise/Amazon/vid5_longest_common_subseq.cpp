#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    
	    int dp[n];
	    
	    for(int i=0;i<n;i++)
	    dp[i]=1;
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(arr[i]>arr[j])
	            dp[i]=max(dp[i],dp[j]+1);
	        }
	    }
	    int maxi=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(maxi<dp[i])
	        maxi=dp[i];
	        
	    }
	    printf("%d\n",maxi);
	    
	}
	return 0;
}

// Execution Time:0.01