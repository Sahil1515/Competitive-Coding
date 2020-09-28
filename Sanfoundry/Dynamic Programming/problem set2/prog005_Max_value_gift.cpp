

// You are given a matrix of order n*m. 
// Each cell of the matrix has a gift of certain value.
//  Starting from the top-left cell, you have to reach the 
//  bottom-right cell of the matrix collecting gifts of the 
//  visited cells. But you can visit either the cell below the current 
//  cell or the cell to right of current cell. 
//  Determine the maximum value of gifts you can collect.


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

        int arr[n][n];
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&arr[i][j]);

        int dp[n+1][n+1]={0};

        dp[0][0]=arr[0][0];

        for(int i=1;i<n;i++)
        dp[0][i]=dp[0][i-1]+arr[0][i];

        for(int i=1;i<n;i++)
        dp[i][0]=dp[i-1][0]+arr[i][0];

        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j] =  arr[i][j] + max(dp[i-1][j],dp[i][j-1]);
            }
        }
        printf("%d\n",dp[n-1][n-1]);

    }
    return 0;
}