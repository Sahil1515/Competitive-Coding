#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        scanf("%d",&num);

        stack<int> stk;
        int count=1;
        while(num)
        {
            stk.push(num%10);
            num/=10;
        }

        while(stk.empty()==false)
        {
            num=num+count*stk.top();
            stk.pop();
            count*=10;
        }
        printf("%d\n",num);

    }
}