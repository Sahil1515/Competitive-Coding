#include<bits/stdc++.h>
using namespace std;

void insert(int arr[], int temp,int n)
{
    if(n==0 || arr[n-1]<temp)
    {
      arr[n]=temp;
        return;
    }
    int ele=arr[n-1];
    
    insert(arr,temp,n-1);

    arr[n]=ele;
}

void sort_arr(int arr[], int n)
{
    if(n==1)
    return;

    int temp=arr[n-1];

    sort_arr(arr,n-1);
    insert(arr,temp,n-1);

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    if(n==0)
    return 0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    sort_arr(arr,n);

        for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
   

    return 0;
}