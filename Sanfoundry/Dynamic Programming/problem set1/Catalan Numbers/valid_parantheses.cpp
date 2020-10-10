

// Find the number of valid parentheses expressions of given length

#include<bits/stdc++.h>
using namespace std;

long long int  dp[100];

void catalan()
{
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;

    for(int i=3;i<=99;i++)
    {
        dp[i]=0;
        for(int j=0;j<i;j++)
        {
            dp[i]=dp[i]+ dp[j]*dp[i-1-j];
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    catalan();
    while(t--)
    {
        int n;
        scanf("%d",&n);
        cout<<dp[n/2]<<"\n"; // The number of ballanced paranthesse is dp[n/2];

    }
    return 0;
}


// Input: 2
// Output: 1 
// There is only possible valid expression of length 2, "()"

// Input: 4
// Output: 2 
// Possible valid expression of length 4 are "(())" and "()()" 

// Input: 6
// Output: 5
// Possible valid expressions are ((())), ()(()), ()()(), (())() and (()())