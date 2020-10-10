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
    for(int i=0;i<n;i++)
    arr[i]=i+1;

    for(int i=0;i<=n/2;i++)
    {
        int temp=arr[i];

        int j=i;
        for(j=i;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[j]=temp;
    }

    int i=0;
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);

    return 0;
}