


// You are given a string str. Find the length of 
// longest palindromic subsequence in the given string.


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1;

    str2=str1;

    int len1=str1.length();
    
    reverse(str1.begin(),str1.end());

    int dp[len1+1][len1+1];

    for(int i=0;i<=len1;i++)
    {
        for(int j=0;j<=len1;j++)
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
    printf("%d ",dp[len1][len1]);
}


// Expected Input and Output

// Case-1:

// str= ADBDCA
// result = 5 (ADBDA)