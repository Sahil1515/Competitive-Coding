#include<bits/stdc++.h>
using namespace std;

int GCD(int a , int b)
{
    if(b==0)
    return a;
    
    return GCD(b, a%b);
}

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);

    printf("%d",(a*b)/GCD(a,b));

    return 0;
}