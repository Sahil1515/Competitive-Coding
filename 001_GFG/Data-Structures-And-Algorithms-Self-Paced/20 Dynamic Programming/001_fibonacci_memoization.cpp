

#include<bits/stdc++.h>
using namespace std;

int dp[1001];

int fibo(int n)
{
    if(dp[n]!=-1)
    return dp[n];

    if(n==0 || n==1)
    return n;

    return dp[n]= (fibo(n-1) + fibo(n-2));
}
int main()
{
    int n;
    cin>>n;

    memset(dp,-1,sizeof(dp));
    cout<<fibo(n-1);
    cout<<"\n\n";

    return 0;
}








//Complete this function
long long fibo(int number,long long int dp[])
{
   
    if(number==0 || number==1)
    return (dp[number]=1);
    
    if(dp[number]!=-1)
    return dp[number];
    
    return (dp[number]=fibo(number-1,dp)+fibo(number-2,dp));
}

long long findNthFibonacci(int number, long long int dp[])
{
   for(int i=0;i<=number;i++)
   dp[i]=-1;

    return fibo(number-1,dp);
}