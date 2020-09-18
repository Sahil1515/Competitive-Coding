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
        int len[n];
        int val[n];

        for(int i=0;i<n;i++)
        {
            scanf("%d",&val[i]);
            len[i]=i+1;
        }

 

        int dp[n+1][n+1];

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                dp[i][j]=0;
                else if(len[i-1]<=j)
                {
                    dp[i][j]=max(val[i-1]+dp[i][j-len[i-1]],dp[i-1][j]);
                }
                else dp[i][j]=dp[i-1][j];
                
            }
        }
        printf("%d\n",dp[n][n]);

    }

    return 0;
}

// Execution Time:0.01