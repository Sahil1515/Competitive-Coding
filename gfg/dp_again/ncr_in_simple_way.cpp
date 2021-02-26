#include<bits/stdc++.h>
using namespace std;



// nCr = (n!) / (r! * (n-r)!)

int main()
{
    int n,r;
    cin>>n>>r;
    
    unsigned long int res=1;
    for (int i = 0; i < r; i++)
    {
        res=res*(n-i);
        res=res/(i+1);
        res=res%100000001;
    }

    cout<<res;

    return 0;
}