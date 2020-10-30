


// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++


int MOD=1000000007;
class Solution{
public:


    
    int nCr(int n, int r){
        // code here
        
        if(r>n)
        return 0;
        
        int dp[n+1][r+1];
        
        memset(dp,0,sizeof(dp));
        
        
        for(int i=0;i<=min(n,r);i++)
        {
            dp[i][i]=1;
        }
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=min(i,r);j++)
            {
                 if(j==0)
                dp[i][j]=1;
                else
                if(i==0)
                dp[i][j]=0;
               
                else dp[i][j]=(dp[i-1][j-1]%MOD+dp[i-1][j]%MOD)%MOD;
                
                
            }
        }
        
        // for(int i=0;i<=n;i++)
        // {
        //     for(int j=0;j<=min(i,r);j++)
        //     {
        //          cout<<dp[i][j]<<" ";
                
                
        //     }
        //     cout<<"\n";
        // }
        return dp[n][r];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}  // } Driver Code Ends

// Execution Time:0.13

// 4 marks