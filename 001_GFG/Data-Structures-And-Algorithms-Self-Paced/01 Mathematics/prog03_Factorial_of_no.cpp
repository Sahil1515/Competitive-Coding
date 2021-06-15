#include<bits/stdc++.h>
using namespace std;


int main()
{
    printf("Enter number\n");
    int n;
    scanf("%d",&n);

    long long int res=1;

    for(int i=1;i<=n;i++)
    {
        res=res*i;
    }
    printf("%lld",res);

    return 0;
}