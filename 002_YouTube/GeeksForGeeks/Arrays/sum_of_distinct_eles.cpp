#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	// Find the sum of all non-repeated elements
	// in an array
	int findSum(int arr[], int n) {
	    // code here
	    set<int> s;
	    
	    for(int i=0;i<n;i++)
	    s.insert(arr[i]);
	    
	    int sum=0;
	    
	    for(auto ele: s)
	    sum=sum+ele;
	    
	    s.clear();
	    return sum;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends

// Execution Time:0.99