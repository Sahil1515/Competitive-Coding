



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
    
        bool dp[sum+1];
        memset(dp,false,sizeof(dp));

        dp[0]=true;

        for(int i=0;i<n;i++)
        {
            int cur_sum=arr[i];
            for(int j=sum;j>=cur_sum;j--)
            if(dp[j])
            continue;
            else if(dp[j-arr[i]]==1)
            dp[j]=true;
        }
        
        for(int i=0;i<=sum;i++)
        cout<<dp[i]<<" ";

        cout<<"\n";

        cout<<dp[sum];
        
    }

    return 0;
}

// 1

// 6
// 3 34 4 12 5 2 
// 9

