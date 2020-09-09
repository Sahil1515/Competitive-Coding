#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string a,b;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        cin>>a>>b;

        int len1=a.length();
        int len2=b.length();

        int dp[len1+1][len2+2];

        int count=0;
        string str="";

        string a_temp=a;
        string b_temp=b;


        for(int i=0;i<=len1;i++)
        {
            for(int j=0;j<=len2;j++)
            {
                if(i==0 || j==0)
                dp[i][j]=0;
                else if(a[i-1]==b[j-1])
                {
                    if(a_temp[i]!='-' && b_temp[j]!='-')
                    str=str+a[i-1];
                    dp[i][j]=dp[i-1][j-1]+1;
                    a_temp[i]='-';
                    b_temp[j]='-';
                    
                }
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }

        cout<<str;
        printf("\n");
    }
}

// Execution Time:0.01