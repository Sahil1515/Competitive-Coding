#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    string str,str2="";
    cin>>str;

    // sort(str.begin(),str.end(), greater<int>());

    sort(str.begin(),str.end());


    for(int i=0;i<str.size()-1;i++)
    {
        if(str[i]=='+')
        continue;
        else str2.push_back(str[i]),str2.push_back('+');
    }
    str2+=str[str.size()-1];

    // cout<<str;
    cout<<str2;
    return 0;
}
