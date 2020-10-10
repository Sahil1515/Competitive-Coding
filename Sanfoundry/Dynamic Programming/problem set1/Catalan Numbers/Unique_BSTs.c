#include <stdio.h>
long long int dp[13];
void catalan()
{
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;

    for(int i=3;i<=12;i++)
    {
        dp[i]=0;
        for(int j=0;j<i;j++)
        {
            dp[i]=dp[i]+dp[j]*dp[i-1-j];
        }
    }
}
int main() {
	//code
	int t;
	scanf("%d",&t);
	catalan();
// 	for(int i=0;i<13;i++)
// 	printf("%lld  ",dp[i]);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    printf("%lld\n",dp[n]);
	}
	return 0;
}


// Execution Time:0.01

// 4 Marks


// Number of Binary trees= BST*n!