
// Given an array arr[] of size N, check if it can be partitioned into two parts such that the sum of elements in both parts is the same.






// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
    

 int equalPartition(int N, int arr[])
    {
        // code here

        int sum=0;
        
        for(int i=0;i<N;i++)
        sum=sum+arr[i];

        if(sum%2==1)
        return 0;

        else sum=sum/2;

        bool dp[N+1][sum+1];

        for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                
                if(j==0 )
                dp[i][j]=true;
                else if(i==0)
                dp[i][j]=false;
                else if(arr[i-1]<=j)
                dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
                else dp[i][j]=dp[i-1][j];
            }
        }

        return dp[N][sum];


    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends



// Execution Time:0.29

// 4 marks