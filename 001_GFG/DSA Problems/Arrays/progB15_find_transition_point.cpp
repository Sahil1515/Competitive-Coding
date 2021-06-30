



// You are given a sorted array containing only numbers 0 and 1. Find the transition point efficiently. The transition point is a point where "0" ends and "1" begins (0 based indexing).
// Note that, if there is no "1" exists, print -1.
// Note that, in case of all 1s print 0.

// Input:
// N = 5
// C[] = {0,0,0,1,1}
// Output: 3
// Explanation: position 3 is 0 and next
// one is 1, so answer is 3.

#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends

int bin(int arr[],int s, int l)
{
 while(s<=l)
 {
     if(s==l)
     if(arr[s]==0)
     return -1;
     else if(arr[s]==1) return 0;
    int mid=(s+l)/2;
    
    if(arr[mid]==0)
    {
        if(arr[mid+1]==1)
        return mid+1;
        else return bin(arr,mid+1,l);
    }
   else  if(arr[mid]==1)
    {
        if(arr[mid-1]==0)
        return mid;
        else return bin(arr,s,mid-1);
    }
 }
    
    
}
// Function to find the transition point
int transitionPoint(int arr[], int n) {
    // code here
    int s=0;
    int final=bin(arr,s,n-1);
    return final;
}