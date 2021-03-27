#include<bits/stdc++.h>
using namespace std;


int main()
{
    printf("Enter a and b\n");
    int a, b;
    scanf("%d%d",&a,&b);

    int temp1=1,temp2=b;

    while(temp2>0)
    {
        if(temp2 & 1)
            temp1=temp1*a;
       
        temp2=temp2/2;
        a=a*a;
    }
    printf("%d",temp1);

    return 0; 
}


// Reference
// https://cp-algorithms.com/algebra/binary-exp.html