


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m ;
    cin>>n>>m;

    int arr[n][m];
    int res[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            res[i][j]=0;
            cin>>arr[i][j];
        }
    }

    for(int i=m-1;i>=0;i--) //col
    {
        for(int j=0;j<n;j++) //row
        {
            int r_up,r,r_l;

            if(i==m-1)
            res[j][i]=arr[j][i];
            
            else {
            r_up=(i==m-1 || j==0)? 0: res[j-1][i+1];
            r=(i==m-1)? 0: res[j][i+1];
            r_l=(i==m-1 || j==n-1)? 0:res[j+1][i+1];
            res[j][i]=arr[j][i]+max(r, max(r_up,r_l));
            }

            
        }
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,res[i][0]);
    }

    cout<<maxi<<"\n\n";

    return 0;
}


// 3 3

// 1 3 3
// 2 1 4
// 0 6 4

// 4 4
// 10 33 13 15
// 22 21 4 1
// 5 0 2 3
// 0 6 14 2