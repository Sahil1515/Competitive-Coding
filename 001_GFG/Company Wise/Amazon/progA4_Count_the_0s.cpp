// Input:
// N = 12
// Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
// Output: 3
// Explanation: There are 3 0's in the given array.



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{   
public:

    int binary(int l, int r, int arr[])
    {
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]==0)
            return mid;
            else l=mid+1;
        }
        return -1;
    }
    int countZeroes(int arr[], int n) {
        // code here
        int mid=binary(0,n-1,arr);
        int count=1;
        if(mid==-1)
        return 0;
        
        else {
            int a=mid-1;
            int b=mid+1;
            
            while(a>=0 && arr[a]==0)
            count++,a--;
            
            while(b<n && arr[b]==0)
            count++,b++;
        }
        return count;
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
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends

// Execution Time:0.22