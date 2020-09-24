
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
		int editDistance(string str1, string str2)
		{
		  
        int len1=str1.length();
        int len2=str2.length();

        int dp[len1+1][len2+1];

        for(int i=0;i<=len1;i++)
        {
            for(int j=0;j<=len2;j++)
            {
                if(i==0)
                dp[i][j]=j;
                else if(j==0)
                dp[i][j]=i;
                else if(str1[i-1]==str2[j-1])
                dp[i][j]=dp[i-1][j-1];
                else dp[i][j]=min(min(dp[i][j-1],dp[i-1][j]), dp[i-1][j-1])+1;
            }
        }
        return (dp[len1][len2]);
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string s, t;
    	cin >> s >> t;
    	Solution ob;
    	int ans = ob.editDistance(s, t);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends

// Given two strings s and t. Find the minimum number of operations that need to be performed on str1 to convert it to str2. The possible operations are:

//     Insert
//     Remove
//     Replace



// Output: 1
// Explanation: One operation is required 
// inserting 's' between two 'e's of str1.

// 0.01 sec

// 4 marks