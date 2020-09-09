#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string a,b;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        cin>>a>>b;

        int len1=a.length();
        int len2=b.length();

        int dp[len1+1][len2+2];

        int count=0;

        for(int i=0;i<=len1;i++)
        {
            for(int j=0;j<=len2;j++)
            {
                if(i==0 || j==0)
                dp[i][j]=0;
                else if(a[i-1]==b[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                    count=max(count,dp[i][j]);
                }
                else dp[i][j]=0;
            }
        }

        printf("%d\n",count);
    }
}

// Execution Time:0.01