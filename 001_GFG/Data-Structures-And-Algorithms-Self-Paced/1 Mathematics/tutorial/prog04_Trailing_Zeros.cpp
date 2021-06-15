#include<bits/stdc++.h>
using namespace std;

int main()
{
    printf("Enter the number\n");
    int n;
    scanf("%d",&n);

    int res=0;

    for(int i=5;i<=n;i=i*5)
    {
        res=res+(n/i);
    }
    printf("%d",res);
    return 0;
}