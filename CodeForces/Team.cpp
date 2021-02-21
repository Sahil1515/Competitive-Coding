#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int cnt=0;

    int arr[3];

    while (n--)
    {
        cin>>arr[0]>>arr[1]>>arr[2];
        if(arr[0]+arr[1]+arr[2]>=2)
        cnt++;
    }
    cout<<cnt;

    return 0;
    
}
