


// C(n, k) = C(n-1, k-1) + C(n-1, k)
// C(n, 0) = C(n, n) = 1    



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        // code here
        
        if(n<r)
        return 0;
        int dp[n+1]={0};
        
        dp[0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=min(i,r);j>0;j--)
            {
                dp[j]=(dp[j]%1000000007+dp[j-1]%1000000007) %1000000007;
            }
        }
        return dp[r];
    }
    // 284501033
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