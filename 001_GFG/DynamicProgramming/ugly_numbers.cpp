

// Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. Write a program to find Nth Ugly Number.

// Example 1:

// Input:
// N = 10
// Output: 12
// Explanation: 10th ugly number is 12.


#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    
	    long long int a=0, b=0,c=0;
	    
	    long long int mul2=2,mul3=3, mul5=5;
	    
	    long long int dp[n+1];
	    memset(dp,0,sizeof(dp));
	    
	    dp[0]=1;
	    
	    long long int next_ugly_number;
	    
	    for(int i=1;i<=n;i++)
	    {
	        next_ugly_number=min(mul2, min(mul3,mul5));
	        
	        dp[i]=next_ugly_number;
	        
	        if(next_ugly_number==mul2)
	        {
	            a++;
	            mul2=dp[a]*2;
	        }
	        if(next_ugly_number==mul3)
	        {
	            b++;
	            mul3=dp[b]*3;
	        }
	       if(next_ugly_number==mul5)
	        {
	            c++;
	            mul5=dp[c]*5;
	        }
	  
	    }
	      return dp[n-1];
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends


// Execution Time:0.02
