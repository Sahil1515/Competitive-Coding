// You are given two strings.
// Find the length of the shortest string
// that has both the given strings
// as subsequences.

// string 1 - APQRSTU
// string 2 - KPLRMNTUO
 
// length of shortest string that has both the given strings - 12 (AKPQLRSMNTUO)



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
    printf("%d\n",len1+len2-dp[len1][len2]);
}