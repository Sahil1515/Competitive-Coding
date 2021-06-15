

#include<bits/stdc++.h>
using namespace std;


void reverse_arr(vector<vector<int>> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        reverse(arr[i].begin(),arr[i].end());
    }
}
int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> arr;

    for(int i=0;i<n;i++)
    {
        vector<int> vec;
        int ele;
        for(int j=0;j<m;j++)
        {
            scanf("%d",&ele);
            vec.push_back(ele);
        }
        arr.push_back(vec);
        vec.clear();
    }

    reverse_arr(arr);

    cout<<"\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}



// Not completed