

// Problem Description

// It is always possible to represent a number in the form of sum of squares of numbers.

// For example – 15= 3^2 + 2^2 + 1^2 + 1^2
// Given a number x, find the minimum number of squares whose sum equals to x.

// Expected Input and Output

// Case-1:

// n=19
// result=3 (3^2 + 3^2 + 1)



//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

class Solution{
	public:
	int MinSquares(int n)
	{
	    // Code here
	    int dp[n+1];
	    
	    for(int i=0;i<=n;i++)
	    {
	        dp[i]=i;
	        for(int j=0;j*j<=i;j++)
	        {
	            dp[i]=min(dp[i],dp[i-j*j]+1);
	        }
	    }
	    return dp[n];
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.MinSquares(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends



// Execution Time:0.37
 
// 2 Marks