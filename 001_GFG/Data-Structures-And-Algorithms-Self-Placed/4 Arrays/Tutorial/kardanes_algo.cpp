#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    
    
    int max_sum=arr[0];
    int ending_sum=arr[0];
    
    for(int i=1;i<n;i++)
    {
        max_sum=max(arr[i],max_sum+arr[i]);
        ending_sum=max(ending_sum,max_sum);
    }
    
    return ending_sum;
    
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends



// Execution Time:0.53

//4 marks
