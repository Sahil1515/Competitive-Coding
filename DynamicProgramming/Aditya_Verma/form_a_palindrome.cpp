#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    string s;
	    cin>>s;
	    string s2=s;
	    reverse(s.begin(),s.end());
	    
	    int len=s.length();
	    
	    int dp[len+1][len+1];
	    
	    for(int i=0;i<=len;i++)
	    {
	        for(int j=0;j<=len;j++)
	        {
	            if(i==0|| j==0)
	            dp[i][j]=0;
	            else if(s[i-1]==s2[j-1])
	            dp[i][j]=dp[i-1][j-1]+1;
	            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	            
	        }
	    }
	    
	    cout<<len-dp[len][len]<<"\n";
	}
	return 0;
}

// Execution Time:0.01

// Given a string, find the minimum number of characters to
//  be inserted to convert it to palindrome.
// For Example:
// ab: Number of insertions required is 1. bab or aba
// aa: Number of insertions required is 0. aa
// abcd: Number of insertions required is 3. dcbabcd