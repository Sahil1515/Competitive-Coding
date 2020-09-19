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
        int arr[n];

        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum=sum+arr[i];
        }
        n++; // BEcause one number is missing
        long long int sum1=(n*(n+1))/2;

        printf("%lld\n",sum1-sum);
        
    }
}