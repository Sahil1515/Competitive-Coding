// Given a number N, complete the following tasks,
// Task 1. Generate a new number from N by changing the zeroes in the binary representation of N to 1.
// Task  2. Find the difference between N and the newly generated number.

//  Input: N = 8 
// Output: 7 15


//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int N) {
        // code here
        bitset<32> arr(N);
        vector<int> vec;
        
        int count=0;
        int temp=N;
        while(temp)
        {
            count++;
            temp=temp/2;
        }
        int num=pow(2,count)-1;
        
        vec.push_back(num-N);
        vec.push_back(num);
        
        return vec;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends




// Execution Time:0.01