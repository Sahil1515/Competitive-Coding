



// Given an integer N denoting the Length of a line segment. 
// you need to cut the line segment in such a way that the cut 
// length of a line segment each time is integer either x , y or z.
// and after performing all cutting operation the total number of 
// cutted segments must be maximum. 



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int val[n];

        for(int i=0;i<n;i++)
        {
            scanf("%d",&val[i]);
        }

 

        int dp[n+1];
        
        dp[0]=0;

        for(int i=1;i<=n;i++)
        {
            dp[i]=INT_MIN;
            for(int j=0;j<i;j++)
            {
               dp[i]=max(dp[i], val[j]+dp[i-1-j]);
            }
        }
        printf("%d\n",dp[n]);

    }

    return 0;
}