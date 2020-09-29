#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int len1,len2;
    scanf("%d%d",&len1,&len2);
    string str1, str2;
    cin>>str1>>str2;

    int dp[len1+1][len2+1];

    int maxi=INT_MIN;

    for(int i=0;i<=len1;i++)
    {
        for(int j=0;j<=len2;j++)
        {
            if(i==0 || j==0)
            dp[i][j]=0;
            else if(str1[i-1]==str2[j-1])
            dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=0;
            maxi=max(dp[i][j],maxi);

        }
    }
    printf("%d\n",maxi);
    }
    return 0;
}