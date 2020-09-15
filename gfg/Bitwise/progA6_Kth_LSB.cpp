// A number N is given. Find its ‘K’th Least Significant Bit.

// Example 1:

// Input: N = 10, K = 4
// Output: 1
// Explanation: Binary Representation 
// of 10 is 1010. 4th LSB is 1.

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	
	int KthLSB(long long int n, int k){
	    //complete the function here
	    return ((n>>k-1)&1);
	    
	}
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        int k;
        cin >> n >> k;
        Solution ob;
        
        cout << ob.KthLSB(n, k) << endl;
    }
return 0;
}

  // } Driver Code Ends


// Execution Time:0.17