

#include<bits/stdc++.h>
using namespace std;

int  helper_func(int arr[])
{
    int first=0;
    int second=0;

    for(int i=0;i<256;i++)
    {
        if(arr[i]!=arr[first])
        if(arr[first]<arr[i])
        {
            second=first;
            first=i;
        }
        else if(arr[second]<arr[i])
        second=i;       
    }

    return second;
}
int main()
{
    string str;
    cin>>str;

    int arr[256];
    for(int i=0;i<256;i++)
    arr[i]=0;

    for(int i=0;i<str.length();i++)
    {
        arr[str[i]]++;
    }
    
    for(int i=0;i<256;i++)
    if(arr[i]>1)
    {
    int pos=helper_func(arr);
    cout<<char(pos)<<"\n\n";
    return 0;
    }
    cout<<"No second most frequent character\n\n";

    return 0;
}