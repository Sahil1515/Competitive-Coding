

// There are n plots in a row. Buildings are to be constructed on these plots 
// in such a way that there is space between every two buildings.
// Find the number of ways in which buildings can be constructed in the plots.


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    int dp[n+3]={0};

    dp[0]=0;
    dp[1]=1;
    dp[2]=1;

    for(int i=3;i<=n+2;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }

    printf("%d",dp[n+2]);

    return 0;
}