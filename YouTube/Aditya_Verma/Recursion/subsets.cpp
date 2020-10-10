#include<bits/stdc++.h>
using namespace std;

void solve(string in, string op)
{
    if(in.length()==0)
    {
        cout<<op<<"\n";
        return;
    }
    char ele=in.front();
    in.erase(in.begin()+0);
    solve(in,op);
    op.push_back(ele);
    solve(in,op);
    
}
int main()
{
    string str;
    cin>>str;

    string op="";
    solve(str,op);

    return 0;
}
