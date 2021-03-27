
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    int dp[n];
	    
	    for(int i=0;i<n;i++)
	    dp[i]=arr[i];
	    
	    
	    
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(arr[i]>arr[j])
	            {
	               dp[i]=max(dp[j]+arr[i], dp[i]);
	            }
	        }
	    }
	    int maxi=INT_MIN;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(maxi<dp[i])
	        maxi=dp[i];
	    }
	    return maxi;
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends

// Execution Time:0.05

// Input: N = 5, arr[] = {1, 101, 2, 3, 100} 
// Output: 106
// Explanation:The maximum sum of a
// increasing sequence is obtained from
// {1, 2, 3, 100}


// Input: N = 3, arr[] = {1, 2, 3}
// Output: 6
// Explanation:The maximum sum of a
// increasing sequence is obtained from
// {1, 2, 3}