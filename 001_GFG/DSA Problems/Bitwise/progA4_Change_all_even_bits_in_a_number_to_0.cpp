

// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++
class Solution {
  public:
    long long int convertEvenBitToZero(long long int n) {
        // code here
        bitset<32> arr(n);
    
        for(int i=0;i<32;i++)
        {
            if(i%2==0)
            arr.reset(i);
        }
        
        return arr.to_ullong();
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.convertEvenBitToZero(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends




// Execution Time:0.01