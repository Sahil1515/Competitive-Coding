


#include<bits/stdc++.h>
using namespace std;


void swap(char * a, char *b)
{
    *a=*a^ *b;
    *b=*a^ *b;
    *a=*a^ *b;
}

int main()
{
    string str;
    cin>>str;

    int i=0;
    int j=str.length()-1;

    while(i<j)
    {
        swap(&str[i],&str[j]);
        i++;
        j--;
    }

    for(int i=0;i<str.length();i++)
    {
        cout<<str[i];
    }
    
    cout<<"\n\n";

    return 0;
}