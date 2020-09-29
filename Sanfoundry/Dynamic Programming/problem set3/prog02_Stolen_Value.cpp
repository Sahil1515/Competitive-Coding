
// Given an array Arr of size N containing positive integers. 
// Find the maximum sum of a subsequence such that no two numbers
// in the sequence should be adjacent in the array.

// Example 1:

// Input:
// N = 6
// Arr[] = {5, 5, 10, 100, 10, 5}
// Output: 110
// Explanation: If you take indices 0, 3
// and 5, then Arr[0]+Arr[3]+Arr[5] =
// 5+100+5 = 110.


#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    
	 int val1,val2;
	 
	  
	  if(n==0)
	  return 0;
	  if(n==1)
	  return arr[0];
	  if(n==2)
	  return max(arr[0],arr[1]);
	  
	  val1=arr[0];
	  val2=max(arr[0],arr[1]);
	  
	  for(int i=2;i<n;i++)
	  {
	     arr[i]=max(val1+arr[i],val2);
	     val1=val2;
	     val2=arr[i];
	  }
	  
	  return arr[n-1];
	}
};

// https://www.geeksforgeeks.org/find-maximum-possible-stolen-value-houses/

// 42
// 468 335 1 170 225 479 359 463 465 206 146 282 328 462 492 496 443 328 437 392 105 403 154 293 383 422 217 219 396 448 227 272 39 370 413 168 300 36 395 204 312 323

// Its Correct output is:
// 7234

// And Your Code's output is:
// 6904


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
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends

// Execution Time:0.34

// 2 Marks

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)