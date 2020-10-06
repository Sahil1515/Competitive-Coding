#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &stk, int temp)
{
    if(stk.size()==0 || stk.top()>temp)
    {
        stk.push(temp);
        return;
    }
    int ele=stk.top();
    stk.pop();
    
    insert(stk,temp);

    stk.push(ele);
}

void sort_stk(stack<int> &stk)
{
    if(stk.size()==1)
    return;

    int temp=stk.top();
    stk.pop();

    sort_stk(stk);
    insert(stk,temp);

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

    sort_stk(stk);

    while(stk.empty()==false)
    {
        printf("%d ",stk.top());
        stk.pop();
    }

    return 0;
}