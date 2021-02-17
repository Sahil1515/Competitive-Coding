#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string str,str2="";

        // getline(cin,str);

        cin>>str;
        if(str.size()>10)
        {
            str2=str2+str[0]+to_string(str.size()-2)+str[str.size()-1];
        }
        else str2=str;

        cout<<str2;
        cout<<"\n";
    }

    return 0;
}