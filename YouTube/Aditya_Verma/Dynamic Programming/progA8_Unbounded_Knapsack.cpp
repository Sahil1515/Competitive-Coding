#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,W;
        scanf("%d",&n);
        int wt[n];
        int val[n];

        for(int i=0;i<n;i++)
        scanf("%d",&wt[i]);

        for(int i=0;i<n;i++)
        scanf("%d",&val[i]);

        scanf("%d",&W);

        int dp[n][W];

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=W;j++)
            {
                if(i==0 || j==0)
                dp[i][j]=0;
                else if(wt[i-1]<=j)
                {
                    dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
                }
                else dp[i][j]=dp[i-1][j];
                
            }
        }
        printf("%d\n",dp[n][W]);

    }

    return 0;
}