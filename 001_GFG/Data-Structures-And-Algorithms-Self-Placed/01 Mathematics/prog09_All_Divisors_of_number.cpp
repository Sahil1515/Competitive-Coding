#include<bits/stdc++.h>
using namespace std;

void AllDivisors(int n)
{
    int i=0;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        printf("%d ",i);
    }
    for(; i>0;i--)
    {
        if(n%i==0)
        printf("%d ",n/i);
    }
}

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    AllDivisors(n);

    return 0;
}