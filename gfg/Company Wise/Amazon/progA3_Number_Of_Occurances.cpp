// Input:
// N = 7, X = 2
// Arr[] = {1, 1, 2, 2, 2, 2, 3}
// Output: 4
// Explanation: 2 occurs 4 times in the
// given array.








#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int binary(int l, int r ,int arr[],int x)
	{
	  
	    while(l<=r)
	    {
	        int mid=(l+r)/2;
	        
	        if(arr[mid]==x)
	            return mid;
	        else if(arr[mid]<x)
	            l=mid+1;
	        else r=mid-1;
	    
	    }
	    return -1;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    
	    int mid= binary(0,n-1,arr,x);  
	    if(mid==-1)
	    return 0;
	    
	        int count=1;
	        int a=mid-1;
	        int b=mid+1;
	        while(a>=0 && arr[a]==x)
	        {
	            a--;
	            count++;
	        }
	        while(b<=n && arr[b]==x)
	        {
	            b++;
	            count++;
	        }
	        return count;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends







// Execution Time:0.34