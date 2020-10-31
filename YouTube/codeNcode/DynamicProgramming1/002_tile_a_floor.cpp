

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    long long numberOfWays(long long N) {
        //code here
        
        long long int dp[N+1];
        
        dp[1]=1;
        dp[2]=2;
        
        for(int i=3;i<=N;i++)
        {
            dp[i]=(dp[i-1]%1000000007+dp[i-2]%1000000007)%1000000007;
        }
        
        return dp[N];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.numberOfWays(N) << endl;
    }
    return 0;
}  // } Driver Code Ends