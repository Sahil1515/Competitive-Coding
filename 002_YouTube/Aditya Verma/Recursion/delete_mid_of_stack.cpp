#include<bits/stdc++.h>
using namespace std;

void delete_mid(stack<int> &stk,int n)
{
    if(stk.size()==n/2+1)
    {
        stk.pop();
        return;
    }

    int temp=stk.top();
    stk.pop();

    delete_mid(stk,n);
   stk.push(temp);

}

void show(stack<int> stk)
{
    if(stk.empty()==true)
    return;
    int ele=stk.top();
    stk.pop();
    show(stk);

    printf("%d ",ele);
}

int main()
{
    stack<int> stk;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int ele;
        scanf("%d",&ele);
        stk.push(ele);
    }

    delete_mid(stk,stk.size());

    show(stk);

    return 0;
}