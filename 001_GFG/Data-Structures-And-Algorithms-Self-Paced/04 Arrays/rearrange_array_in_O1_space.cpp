


// Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].

// Example 1:

// nput:
// N = 5
// arr[] = {4,0,2,1,3}
// Output: 3 4 2 0 1
// Explanation: arr[0] = 4 and arr[arr[0]] 
// = 3. Also, arr[1] = 0 and arr[arr[1]] 
// = 4 and so on. So, rearranging elements,
// we get array as 3 4 2 0 1.


// Constraints:
// 1 <= N <= 107
// 0 <= Arr[i] < N




 // } Driver Code Ends


    
// Function to rarrange the elements in O(1) extra space
// arr: input array
// n: size of array


#include<bits/stdc++.h>
using namespace std;
 
void arrange(long long arr[], int n) {
    // Your code here
    
    for(int i=0;i<n;i++)
    {
        arr[i]=(arr[arr[i]%10000000]%10000000) *10000000  +arr[i]%10000000;
    }
    
     for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]/10000000;
    }
    
}


// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        
        //calling arrange() function
        arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends


// Execution Time:0.01

// 4 marks