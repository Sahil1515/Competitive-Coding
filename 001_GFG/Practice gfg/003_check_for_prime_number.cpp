#include<bits/stdc++.h>
using namespace std;

int isPrime(int num)
{
    if(num<=1)
    return false;
    if(num<=3)
    return true;

    if(num%2==0 || num%3==0)
    return false;

    for(int i=4;i*i<=num;i++)
    {
        if(num%i==0)
        return false;
    }

    return true;
}

int main()
{
    int num;
    cin>>num;

    if(isPrime(num))
    cout<<"Prime";
    else cout<<"Not Prime";

    return 0;
}