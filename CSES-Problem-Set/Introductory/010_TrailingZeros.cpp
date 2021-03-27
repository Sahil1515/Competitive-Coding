#include<bits/stdc++.h>
using namespace std;

typedef long long int ull;

int main()
{
    ull n;
    cin>> n;

    ull sum=0;
    for(int i=5;i<=n;i=i*5)
    {
        sum+=(n/i);
    }
    printf("%lld\n",sum);

    return 0;
}