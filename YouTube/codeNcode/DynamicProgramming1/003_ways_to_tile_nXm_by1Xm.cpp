



// Given a floor of size n x m and tiles of size 1 x m. The problem is to count the number of ways to tile the given floor using 1 x m tiles. A tile can either be placed horizontally or vertically.
// Both n and m are positive integers and 2 < = m.

#include <bits/stdc++.h>
using namespace std;

#include <stdio.h>

int main() {
	//code
	int MOD=1000000007;

        
    int t;      cin>>t;
	while(t--)
	{
	int n,m;    cin>>n>>m;
	
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	
    dp[0]=0;
    
    for(int i=1;i<=n;i++)
    {
        if(i<m)
        dp[i]=1;
        else if(i>m)
        dp[i]=(dp[i-1]%MOD + dp[i-m]%MOD)%MOD;
        else dp[i]=2;
    }
	
    cout<<dp[n]<<"\n";
	}
	
	return 0;
}

// Execution Time:0.01
// 2 Marks