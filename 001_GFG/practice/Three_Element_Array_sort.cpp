#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin>>arr[i];

    int i=0;
    int j=n-1;
    int k=0;


    while (k<=j)
    {
        if(arr[k]==0 )
            swap(arr[i++],arr[k++]);// Incrementing k also because we know that
                                    //  at most the swapped value will be 1.
                                    //  It can never have 2 on left of k
        else if(arr[k]==2)
            swap(arr[j--],arr[k]);
        else  k++;
    }
    for (k = 0; k < n; k++)
        cout<<arr[k]<<" ";

    return 0;
}