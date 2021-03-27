#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int sr=0,sc=arr[0].size()-1;
	    int res=-1;
	    
	    while(sr<arr.size() && sc>= 0)
	    {
	        if(arr[sr][sc]==1)
	        {
	            sc--;
	            res=sr;
	        }
	        else
	        sr++;
	    }
	    if (res==-1)
	    return -1;
	    return res;
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends