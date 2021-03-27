#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,sum; 
        scanf("%d",&n);
        int arr[n];

        for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

        scanf("%d",&sum);

        bool dp[n+1][sum+1];

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(i==0)
                    dp[i][j]=false;

                else if(j==0)
                    dp[i][j]=true;

                else if(arr[i-1]<=j)
                    dp[i][j]= dp[i-1][j] || dp[i-1][j-arr[i-1]];
                    
                else 
                    dp[i][j]=dp[i-1][j];
            }
        }
        
        cout<<dp[n][sum]<<"\n";
    }
}