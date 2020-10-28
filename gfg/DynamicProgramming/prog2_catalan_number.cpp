


#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;

using boost::multiprecision::cpp_int;

cpp_int dp[101];

void catalan()
{
    dp[0]=1,dp[1]=1;

    for(int i=2;i<=100;i++)
    {
        dp[i]=0;
        for(int j=0;j<i;j++)
        {
            dp[i]=dp[i]+dp[j]*dp[i-j-1];
        }
    }
}
int main()
{
    int t;
    cin>> t;

    catalan();
    while(t--)
    {
        int n;
        cin>>n;

        cout<<dp[n]<<"\n";

    }
    return 0;
}


// Execution Time:0.01

// 2 Marks