#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    vector<bool> isPrime(n+1,true);

    for(int i=2;i*i<=n;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                isPrime[j]=false;
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            printf("%d ",i);
        }
    }
    return 0;

}