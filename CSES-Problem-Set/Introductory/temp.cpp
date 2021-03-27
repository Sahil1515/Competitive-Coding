#include<bits/stdc++.h>
using namespace std;

// int count(int c)
// {
//     int cnt=0;
//     while(c>0)
//     {
//         cnt++;
//         c=(c&(c-1));
//     }
//     return cnt;
// }
// int countBitsFlip(int a, int b){
    
//     // Your logic here
//     int c=a^b;
//     return count(c);    
// }


// bool isSparse(int n)
// { 
//    if(n&(n>>1))
//    {
//     return false;   
//    }
//    return true;
    
// }

bool isPowerofTwo(long long n){
    
    int cnt=0;
    while(n)
    {
        cnt++;
        n= (n-(n&(-n)));
    }
    if(cnt==1)
    return true;
    
    return false;
    
}

int main()
{
    long long int n=3;
    cout<<isPowerofTwo(n);
    return 0;
}