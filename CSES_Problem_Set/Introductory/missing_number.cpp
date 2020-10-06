#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n];

    long long int sum1=0,sum2=0;

    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        sum1=sum1+arr[i];
    }

    sum2=((n)*(n+1))/2;
    printf("%lld",sum2-sum1);

    return 0;
}