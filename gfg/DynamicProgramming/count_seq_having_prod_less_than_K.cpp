


#include<bits/stdc++.h>
using namespace std;


int main()
{
   int n; cin>>n; int arr[n];

   for(int i=0;i<n;i++) cin>>arr[i];

   int k; cin>>k;

   k--;

   int dp[n+1][k+1];
   memset(dp,0,sizeof(dp));

   dp[1][arr[1]]=1;

    for(int i=0;i<=n;i++)
   {
       for(int j=0;j<=k;j++)
       {
           if(j==0) dp[i][j]=1;
           else if(i==0) dp[i][j]=0;
       }
   }

int count=0;for(int i=0;i<=n;i++)
   {
       for(int j=0;j<=k;j++)
       {
           cout<<dp[i][j]<<" ";
       }
       cout<<"\n";
   }
   for(int i=2;i<=n;i++)
   {
       for(int j=1;j<=k;j++)
       {
           if(j%arr[i-1]==0) 
           dp[i][j]= dp[i-1][j/arr[i-1]-1] + dp[i-1][j];
           else dp[i][j]=dp[i-1][j];

           if(dp[i][j]==1)
           count++;
       }
   }
for(int i=0;i<=n;i++)
   {
       for(int j=0;j<=k;j++)
       {
           cout<<dp[i][j]<<" ";
       }
       cout<<"\n";
   }
   cout<<count;

   return 0;

}