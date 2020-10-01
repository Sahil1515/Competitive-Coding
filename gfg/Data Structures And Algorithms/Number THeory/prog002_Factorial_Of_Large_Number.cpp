


#include<bits/stdc++.h>
using namespace std;

int multiply_fact(int res[], int res_size,int x)
{
    int carry=0;
    int i=0;
    for(i=0;i<res_size;i++)
    {
        int temp=res[i]*x+carry;
        res[i]=temp%10;
        carry=temp/10;  
    }
    while(carry>0)
    res[res_size]=carry%10,carry=carry/10,res_size++;

    return res_size;
}
void factorial(int n)
{
    int res[500];
    res[0]=1;
    int res_size=1;

    for(int i=2;i<=n;i++)
    {
        res_size=multiply_fact(res,res_size,i);
    }

    for(int i=res_size-1;i>=0;i--)
    {
      printf("%d ",res[i]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    factorial(n);
    return 0;
}