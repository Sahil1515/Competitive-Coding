// vector<long long> printFibb(int n) {
    
//     vector<long long> fibo;
    
//     fibo.reserve(n);
    
//     if(n==0)
//     return fibo;
    
//     fibo.push_back(1);
    
//     if(n==1)
//     return fibo;
    
//     fibo.push_back(1);
    
//     for(int i=2;i<n;i++)
//     {
//         fibo.push_back(fibo[i-1]+fibo[i-2]);
//     }
    
//     return fibo;
    
// }



#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    if(n%2==1 || n<=2)
    cout<<"NO";
    else cout<<"YES";

    return 0;
}