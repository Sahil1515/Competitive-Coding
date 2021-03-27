

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;  cin>>t;

    while(t--)
    {
        int n;   cin>>n;
    int arr[n]; for(int i=0;i<n;i++)    cin>>arr[i];
    int sum;    cin>>sum;
    

    int s=0;
    int flag=0;

    int tot=1<<n;
    for (int i = 0; i < tot; i++)
    {
        s=0;
        for(int j=0;j<n;j++)
        if(i & 1<<j)
        s=s+arr[j];

        if(s==sum)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    cout<<"YES\n";
    else cout<<"NO\n";
    
    }
    return 0;

}


// HackerEarth: Sum of numbers