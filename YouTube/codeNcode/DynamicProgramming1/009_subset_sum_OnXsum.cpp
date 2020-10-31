


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;

    while(t--)
    {
        int n;  cin>>n;
        int arr[n]; for(int i=0;i<n;i++)    cin>>arr[i];

        int sum;    cin>>sum;

        bool dp[n+1][sum+1];
        memset(dp,false,sizeof(dp));

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(j==0)
                dp[i][j]=true;
                else if(i==0)
                dp[i][j]=false;
                else if(arr[i-1]<=j)
                dp[i][j]= dp[i-1][j-arr[i-1]] || dp[i-1][j];
                else dp[i][j]=dp[i-1][j];
            }
        }
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
               cout<<dp[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<dp[n][sum];
    }

    return 0;
}