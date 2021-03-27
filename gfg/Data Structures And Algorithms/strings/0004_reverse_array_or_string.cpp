

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cin>>str;

    cout<<"String before reversing: "<<str;

    reverse(str.begin(),str.end());

    cout<<"\nString after reversing: "<<str<<"\n\n";

    return 0;
}