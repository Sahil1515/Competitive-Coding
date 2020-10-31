
// There are N stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does matter).

// Input:
// The first line contains an integer 'T' denoting the total number of test cases. In each test cases, an integer N will be given.

// Output:
// For each testcase, in a new line, print number of possible ways to reach Nth stair. Answer your output % 10^9+7.






#include <iostream>
using namespace std;

int MOD=1000000000+7;
int dp[100000+1];


void stair_ways(int n)
{
    dp[1]=1;  dp[2]=2;
    
    for(int i=3;i<=n;i++)
    dp[i]=(dp[i-1]%MOD+dp[i-2]%MOD)%MOD;
    
}


int main() {
	//cod
	
	int t;    cin>>t;
	
	stair_ways(100001);
	
	while(t--)
	{
	    int n;      cin>>n;
	    
	    cout<<dp[n]<<"\n";
	}
	return 0;
}


// Execution Time:0.21


// 4 marks