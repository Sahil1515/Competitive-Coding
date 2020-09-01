#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n==1)
    return false;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int L,R;
    scanf("%d%d",&L,&R);

    for(int i=L;i<=R;i++)
    {
        if(isPrime(i))
        cout<<L<<" ";
        
    }
}