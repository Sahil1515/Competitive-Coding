
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int val[n];

        for(int i=0;i<n;i++)
        {
            scanf("%d",&val[i]);
        }

 

        int dp[n+1];
        
        dp[0]=0;

        for(int i=1;i<=n;i++)
        {
            dp[i]=INT_MIN;
            for(int j=0;j<i;j++)
            {
               dp[i]=max(dp[i], val[j]+dp[i-1-j]);
            }
        }
        printf("%d\n",dp[n]);

    }

    return 0;
}