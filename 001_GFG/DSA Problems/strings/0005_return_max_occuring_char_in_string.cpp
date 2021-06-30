

#include<bits/stdc++.h>
using namespace std;

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

    int maxi=INT_MIN;
    int index=0;
    for(int i=0;i<256;i++)
    {
        if(maxi<arr[i])
        maxi=arr[i],index=i;
    }

   printf("%c\n\n",index);

   return 0;
}