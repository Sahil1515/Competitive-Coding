#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;

    string str3=str1+str1;

    size_t s = str3.find(str2);
    
    if(s==string::npos)
    cout<<"No";
    else 
    cout<<"Yes";

    cout<<"\n";

    return 0;
}

