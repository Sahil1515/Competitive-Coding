#include<bits/stdc++.h>
using namespace std;


vector<int> v;

void sieve()
{
    int n= 10000000; 
    bool arr[n+1]={true};
    arr[0]=arr[1]=false;

    for(int i=2;i*i<n; i++)
    {
        int p=i*i;
        for(int j=p;j<=n; j+=i)
        {
            arr[j]=false;
        }
    }
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i])
        v.push_back(i);
    }

}
int main()
{
    int q;
    cin>>q;
    sieve();
    while(q--)
    {
        
    }

}