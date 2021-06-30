#include<bits/stdc++.h>
using namespace std;

// bool sortcolon(vector<int> v1, vector<int> v2)
// {
//     return v1[0]<v2[0];
// }


bool sortcolon(int v1,int v2)
{
    return v1<v2;
}
int main()
{
    int n;
    scanf("%d",&n);
    // int arr[n][n];

    vector< vector<int> > vec;
    vec.resize(n, vector<int>(n,0));

    for(int i=0 ;i<n;i++)
    for(int j=0;j<n;j++)
    cin>> vec[i][j];

     printf("\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",vec[i][j]);
        }
        printf("\n");
    }


    for(int i=0;i<n;i++)
    {
        sort(vec.begin(),vec.end(),sortcolon);
    }

    printf("\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",vec[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}