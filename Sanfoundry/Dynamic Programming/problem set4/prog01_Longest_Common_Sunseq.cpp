

// There are 2 strings str1 and str2. Find the 
// length of the longest subsequence common to both str1 and str2.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;

    int len1=str1.length();
    int len2=str2.length();

    int dp[len1+1][len2+1];

    for(int i=0;i<=len1;i++)
    {
        for(int j=0;j<=len2;j++)
        {
            if(i==0)
            dp[i][j]=0;
            else if(j==0)
            dp[i][j]=0;
            else if(str1[i-1]==str2[j-1])
            dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    printf("%d ",dp[len1][len2]);
}