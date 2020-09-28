
	  

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
	    
	    int dp[n+1]={0};
	    
	    dp[0]=1;
	    
	    for(int i=3;i<=n;i++)
	    dp[i]=dp[i]+dp[i-3];
	    
	    for(int i=5;i<=n;i++)
	    dp[i]=dp[i]+dp[i-5];
	    
        for(int i=10;i<=n;i++)
	    dp[i]=dp[i]+dp[i-10];
	    
 
	    printf("%d\n",dp[n]);
	    
	}
	return 0;
}

// Marks 2

// Execution Time:0.01

// Consider a game where a player can score 3 or 5 or 10 points in a move.
//  Given a total score n, find the number of distinct combinations to reach the given score.