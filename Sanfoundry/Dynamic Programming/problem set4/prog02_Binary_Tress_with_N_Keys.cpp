
// Problem Description
// How many structurally different binary trees are possible with n nodes?

int catalan(int n)
{
    int dp[n+1]={0};

    dp[0]=dp[1]=1;
    dp[2]=2;

    for(int i=3;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            dp[i]=dp[i]+dp[i-1-j]*dp[j];
        }
    }
    return dp[n];
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    int tot=catalan(n);
    printf("%d\n",tot);
}


// CONFUSED:

// Total number of possible Binary Search Trees and Binary Trees with n keys
// Last Updated: 12-08-2019

// Total number of possible Binary Search Trees with n different keys (countBST(n)) = Catalan number Cn = (2n)! / ((n + 1)! * n!)

// For n = 0, 1, 2, 3, … values of Catalan numbers are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …. So are numbers of Binary Search Trees.

// Total number of possible Binary Trees with n different keys (countBT(n)) = countBST(n) * n! 