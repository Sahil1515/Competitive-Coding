#include<bits/stdc++.h>
using namespace std;

void reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        reverse(str,len);
        cout<<str;
        cout<<endl;
    }
        return 0;
}
// } Driver Code Ends


void reverse(char *str, int len)
{

// Your code goes here
    stack<char> stk;
    for(int i=0;str[i];i++)
    stk.push(str[i]);
    
    int k=0;
    while(!stk.empty())
    str[k++]=stk.top(),stk.pop();

}


// Execution Time:0.01
