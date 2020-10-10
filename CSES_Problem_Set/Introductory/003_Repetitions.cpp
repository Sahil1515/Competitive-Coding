#include<bits/stdc++.h>
using namespace  std;


int main()
{
    string str;

    cin>>str;

    if(str.size()==0|| str.size()==1)
    {
        cout<<str.size();
        return 0;
    }

    int maxi=INT_MIN;
    int count=1;
    char ch=str[0];
    for(int i=1;i<=str.size();i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
        else
        {
            maxi=max(maxi,count);
            count=1;
            ch=str[i];
        } 
    }

    printf("%d",maxi);

    return 0;
}