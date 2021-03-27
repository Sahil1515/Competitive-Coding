#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    if(n==0|| n==2|| n==3)
    {
        printf("NO SOLUTION");
        return 0;
    }
    int k=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        arr[k++]=i;
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        arr[k++]=i;
    }
     for(int i=0;i<k;i++)
    {
       printf("%d ",arr[i]);
    }

    return 0;
}