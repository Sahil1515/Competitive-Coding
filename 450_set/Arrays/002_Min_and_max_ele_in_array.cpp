


// Learning how to use max_element() and min_element()



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int max_ele=*max_element(arr,arr+n);
    int min_ele=*min_element(arr,arr+n);

    cout<<"\n";

    cout<<max_ele<<"\n"<<min_ele;

    return 0;
}