#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin>>arr[i];

    int i=-1;
    int j=n;

    // while(i<j)
    // {
    //     if(arr[i]<0)
    //     i++;
    //     if(arr[j]>0)
    //     j--;

    //     if(arr[i]>0 || arr[j]<0)
    //     swap(arr[i],arr[j]);
    // }

    while (true)
    {
        do{i++; } while (arr[i]<0);
        do{j--; } while (arr[j]>0);
        if(i>=j)
        break;
        swap(arr[i],arr[j]);    
    }
    for (int k = 0; k < n; k++)
        cout<<arr[k]<<" ";

    return 0;
}