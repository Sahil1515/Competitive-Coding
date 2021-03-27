
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str;

//     getline(cin,str);

//     for(auto it=str.begin();it!=str.end();it++)
//     {
//         if(isspace(*it))
//         str.erase(it);      
//     }

//     cout<<str;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    getline(cin,str);

    for(int i=0;i<str.length();i++)
    {
        if(isspace(str[i]))
        str.erase(i,1);      
    }

    cout<<str;

    return 0;
}