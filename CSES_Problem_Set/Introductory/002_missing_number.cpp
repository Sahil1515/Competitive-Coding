#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];

    long long int sum1=0,sum2=0;

    for(long long int i=0;i<n-1;i++)
    {
        scanf("%lld",&arr[i]);
        sum1=sum1+arr[i];
    }

    sum2=((n)*(n+1))/2;
    printf("%lld",abs(sum2-sum1));

    return 0;
}