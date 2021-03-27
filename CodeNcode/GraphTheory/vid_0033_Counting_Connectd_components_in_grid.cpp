#include <bits/stdc++.h>
using namespace std;

int n, m;

int arr[1001][1001], vis[1001][1001];

int row[4] = {0, -1, 0, 1};
int col[4] = {-1, 0, 1, 0};

bool isSafe(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m && arr[x][y] == 1 && vis[x][y] == 0);
}

void dfs(int x, int y)
{
    // cout<<arr[x][y];
    vis[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        if (isSafe(x +row[i],y+col[i]))
            dfs(x+row[i],y+col[i]);
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }


    int cc=0;

    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j < m; j++)
        {
            if (vis[i][j]==0 && arr[i][j]==1)
            {
                cc++;
                dfs(i,j);
            }
            
        }
    }

    cout<<cc;
    

    return 0;
}



// 6
// 6
// 0 0 1 0 1 1 
// 0 1 1 0 0 1 
// 0 1 0 0 0 0 
// 1 0 1 1 0 0 
// 0 0 0 1 0 0 
// 0 1 1 0 1 1