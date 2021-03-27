#include<bits/stdc++.h>
using namespace std;

bool isvowel(char a){
    return (tolower(a)=='a' || tolower(a)=='e' ||tolower(a)=='i' || tolower(a)=='o'  || tolower(a)=='u' || tolower(a)=='y' );
}

int main()
{
    string str,strRes="";
    cin>>str;

    for(int i=0;i<str.size();i++)
    {
        if(isvowel(str[i]))
        continue;
        else if(!isvowel(str[i]))
        strRes+=".",strRes.push_back(tolower(str[i]));
    }

    cout<<strRes;

    return 0;
}