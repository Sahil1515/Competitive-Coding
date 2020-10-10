
//  You are given a set of integers.
//  Determine whether or not this set can be divided into 
//  two subsets such that the sum of elements in each subset is equal.


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];

    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int sum=accumulate(arr,arr+n,0);

    if(sum%2==1)
    {
        printf("0");
        return 0;
    }
    else sum=sum/2;

    bool dp[n+1][sum+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(j==0)
            dp[i][j]=true;
            else if(i==0)
            dp[i][j]=false;
            else if(arr[i-1]<=j)
            dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout<< dp[n][sum];
}