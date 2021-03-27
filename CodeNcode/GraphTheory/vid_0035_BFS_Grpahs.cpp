

#include <bits/stdc++.h>
using namespace std;

int n, m;
int vis[1001][1001], arr[1001][1001], dist[1001][1001];

int row[4] = {0, -1, 0, 1};
int col[4] = {-1, 0, 1, 0};

queue<pair<int, int>> q;

bool isSafe(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m && vis[x][y] == 0);
}

void bfs(int srcX, int srcY)
{
    q.push({srcX, srcY});
    vis[srcX][srcY] = 1;
    dist[srcX][srcY] = 0;

    while (!q.empty())
    {
        auto p = q.front();
        int x = p.first;
        int y = p.second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int newX = row[i] + srcX;
            int newY = col[i] + srcY;

            if (isSafe(newX, newY))
            {
                dist[newX][newY] = dist[srcX][srcY] + 1;
                vis[newX][newY] = 1;
                q.push({newX, newY});
            }
        }
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == 0)
                bfs(i, j);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dist[i][j];
        }
    }

    return 0;
}