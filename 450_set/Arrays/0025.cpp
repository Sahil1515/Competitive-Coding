// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

// Function to find elements with count more than n/k times
// arr: input array
class Solution{
  public:
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int temp[1000001]={0};
        
        int maxi=0;
        
        for(int i=0;i<n;i++)
        {
            temp[arr[i]]++;
            maxi=max(maxi,arr[i]);
        }
        
        int count=0;
        for(int i=0;i<=maxi;i++)
        {
            // cout<<temp[i]<<" ";
            if(temp[i]>(n/k))
            count++;
        }
        
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends