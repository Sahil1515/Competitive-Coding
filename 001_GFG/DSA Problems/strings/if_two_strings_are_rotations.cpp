


#include<bits/stdc++.h>
using namespace std;


bool check_func(string str1, string str2)
{
    str1.append(str1);

    if(str1.find(str2)!=string::npos)
    return true;

    return false;

}
int main()
{
    string str1,str2;

    cin>>str1>>str2;

    cout<<check_func(str1,str2);

    return 0;
    
}













// #include<bits/stdc++.h>
// using namespace std;


// bool check_func(string str1, string str2)
// {
//     int len1=str1.length();;
//     int len2=str2.length();

//     if(len1!=len2)
//         return 0;

//     for(int i=0;i<len1-1;i++)
//     {
//         rotate(str1.begin(),str1.begin()+1,str1.end());
//         if(str1==str2)
//             return 1;
//     }
//     return false;

// }
// int main()
// {
//     string str1,str2;

//     cin>>str1>>str2;

//     cout<<check_func(str1,str2);

//     return 0;
    
// }
