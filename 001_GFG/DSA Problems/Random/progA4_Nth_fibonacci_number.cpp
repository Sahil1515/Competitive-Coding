
using namespace std;
#include<bits/stdc++.h>

long long int func(int n)
{
    long long int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]%1000000007+dp[i-2]%1000000007;
    }
    return dp[n]%1000000007;
    
}
int main() {
	//code
	int t, n;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d",&n);
	    printf("%lld\n",func(n));
	    
	    t--;
	}
	return 0;
}
// Given a positive integer N, find the Nth fibonacci number. Since the answer can be very large, print the answer modulo 1000000007.
// Input:
// 3
// 1
// 2
// 5
// Output:
// 1
// 1
// 5