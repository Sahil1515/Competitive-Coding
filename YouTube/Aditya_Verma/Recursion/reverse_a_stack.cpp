
#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &stk, int temp)
{
    if(stk.size()==0)
    {
        stk.push(temp);
        return;
    }
    int ele=stk.top();
    stk.pop();
    
    insert(stk,temp);

    stk.push(ele);
}

void rev_stk(stack<int> &stk)
{
    if(stk.size()==0)
    return;

    int temp=stk.top();
    stk.pop();

    rev_stk(stk);
    insert(stk,temp);
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

    rev_stk(stk);

    show(stk);

    return 0;
}