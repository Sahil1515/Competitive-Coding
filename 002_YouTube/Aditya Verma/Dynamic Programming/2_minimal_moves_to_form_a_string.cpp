#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
	    string s,s1="";
	    cin>>s;
	    
	    int len=s.length();
	    
	    int dp[len];
	    
	    for(int i=0;i<len;i++)
	    {
	        dp[i]=INT_MAX;
	    }
	    dp[0]=1;
	    
	    s1=s1+s[0];
	   // s2=s1+s[0];
	    
	    for(int i=1;i<len;i++)
	    {
	        s1=s1+s[i];
	         dp[i]=min(dp[i-1]+1,dp[i]);
	        if(s1==s.substr(i+1,i+1))
	        dp[(i*2)+1]=min(dp[i]+1,dp[(i*2)+1]);
	        
	    }
	    
	    printf("%d\n",dp[len-1]);
	    t--;
	}
	return 0;
}

// Execution Time:0.03
// 2 Marks
