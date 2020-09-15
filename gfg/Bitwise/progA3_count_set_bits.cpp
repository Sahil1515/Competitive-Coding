// Given a positive integer N, print count of set bits in it. 

// Input:
// N = 6
// Output:
// 2


#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{
public:
    int setBits(int N)
    {
        // Write Your Code here
        bitset<32> arr(N);
        return arr.count();
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends

// Execution Time:0.01