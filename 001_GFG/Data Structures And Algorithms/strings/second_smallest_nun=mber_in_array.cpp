


#include<bits/stdc++.h>
using namespace std;

int second_largest(vector<int> arr)
{
    int first=0;
    int second=0;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[first]!=arr[i])
        if(arr[first]<arr[i])
        {
            second=first;
            first=i;
        }
        else if(arr[second]<arr[i])
        second=i;
    }

    return arr[second];
}
int main()
{
    int n;
    cin>>n;

    vector<int> arr;

    int ele;
    for(int i=0;i<n;i++)
    cin>>ele,arr.push_back(ele);

    cout<<second_largest(arr);

    return 0;
}