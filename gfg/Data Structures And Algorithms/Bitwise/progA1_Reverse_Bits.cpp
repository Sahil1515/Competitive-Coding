#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
          string str =bitset<32> (X).to_string();
     reverse(str.begin(),str.end());
      bitset<32> bin(str);
      return bin.to_ullong();
     
        
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}  // } Driver Code Ends


// Execution Time:0.01
