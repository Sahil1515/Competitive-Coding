



// Given N friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.
// Note: Since answer can be very large, return your answer mod 10^9+7.

// Input:N = 3
// Output: 4
// Explanation:
// {1}, {2}, {3} : All single
// {1}, {2,3} : 2 and 3 paired but 1 is single.
// {1,2}, {3} : 1 and 2 are paired but 3 is single.
// {1,3}, {2} : 1 and 3 are paired but 2 is single.
// Note that {1,2} and {2,1} are considered same.




#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{
public:
    long long int countFriendsPairings(int n) 
    { 
        // code here
        
        long long int dp[n+1];
        memset(dp,0,sizeof(dp));
        
        
        
        for(int i=0;i<=n;i++)
        {
            if(i<=2)
            dp[i]=i;
            else 
            dp[i]=(dp[i-1]%1000000007+ (dp[i-2]*(i-1))%1000000007)%1000000007;
        }
        
        return dp[n];
    }
};    
 

// { Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 
  // } Driver Code Ends


// Execution Time:0.02

// 2 marks