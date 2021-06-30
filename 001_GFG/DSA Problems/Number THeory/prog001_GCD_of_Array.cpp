// Given an array of N positive integers, find GCD of all the array elements.


// Example 1:

// Input: N = 3, arr[] = {2, 4, 6}
// Output: 2
// Explanation: GCD of 2,4,6 is 2.



 // } Driver Code Ends

#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
	
	int GCD(int a, int b)
	{
	    if(a==0)
	    return b;
	    if(a==1)
	    return a;
	    return GCD(b%a,a);
	}
    int gcd(int N, int arr[])
    {
    	// Your code goes here
    	int a=arr[0];
    	for(int i=1;i<N;i++)
    	a=GCD(a,arr[i]);
    	
    	return a;
    }
};


// { Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        int arr[N];
        for(int i = 0; i < N; i++)
        	cin >> arr[i];
        Solution ob;
       	cout <<  ob.gcd(N, arr) << "\n";
   
    }
    return 0;
}  // } Driver Code Ends


// Execution Time:0.19

// Mark 1