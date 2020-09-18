#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t, W;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d",&W);
	    long int dp[W+1];
	    dp[0]=0;
	    for(int i=1;i<W+1;i++)
	    {
	        if(i==1 || i==2)
	        {
	            dp[i]=i;
	        }
	        else dp[i]=dp[i-1]+dp[i-2];
	    }
	    
	    printf("%ld\n",dp[W]);
	    t--;
	}
	return 0;
}

// Execution Time:0.01
// 1 mark

// The first line of input contains an integer T denoting the number of test cases. 
// The first line of each test case is W.

// Example:
// Input
// 2
// 5
// 3

// Output
// 8
// 3