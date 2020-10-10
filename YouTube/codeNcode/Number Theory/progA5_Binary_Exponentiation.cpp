
// It is a technique to find the a^n in O(logn)

#include<bits/stdc++.h>
using namespace std;
long long int power_modulo(int a,int n,int p)
{
    int res=1;

    while(n)
    {
        if(n%2==1)
        {
            res=(res*a)%p;
            n--;
        }
        else if(n%2==0)
        {
            a=(a*a)%p;
            n=n/2;
        }
    }
    return res;  
}

// Modular Exponentiation
long long int power(int a,int n)
{
    int res=1;

    while(n)
    {
        if(n%2==1)
        {
            res=res*a;
            n--;
        }
        else if(n%2==0)
        {
            a=a*a;
            n=n/2;
        }
    }
    return res;  
}
int main()
{
    int a,n;
    scanf("%d%d",&a,&n);

    printf("%d ^ %d is :%lld\n",a,n,power(a,n));
    printf("(%d ^ %d ) modulo 100000007 is :%lld\n",a,n,power_modulo(a,n,100000007));

    return 0;
}