#include <bits/stdc++.h>
using namespace std;


int func(string str1, string str2)
{
    int n=str1.length();
    int m=str2.length();
    
    int dp[n+1][m+1];
    
    memset(dp,-1,sizeof(dp));
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            dp[i][j]=0;
            
            else if(str1[i-1] == str2[j-1])
            dp[i][j]=dp[i-1][j-1]+1;
            
            else 
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            
        }
    }
    
    
    return dp[n][m];
    
}

int main() {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n, m;
	    
	    cin>>n,m;
	    
	    string str1,str2;
	    
	    cin>>str1>>str2;
	    
	    cout<<func(str1,str2)<<"\n";
	}
	return 0;
}