

// Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array and return it. In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... (considering the increasing lexicographical order).

// Example 1:

// Input:
// N = 5
// arr[] = {1,2,3,4,5}
// Output: 2 1 4 3 5
// Explanation: Array elements after 
// sorting it in wave form are 
// 2 1 4 3 5.

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to convert given array to wave like array
// arr: input array
// n: size of array
void convertToWave(int *arr, int n){
    
    // Your code here
    
    if(n==1)
    return;
    
    for(int i=1;i<n;i=i+2)
    {
        swap(arr[i],arr[i-1]);   
    }
    
}

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        int a[n]; //declare array of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        
        convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}  // } Driver Code Ends


// Execution Time:0.13
// 2 marks