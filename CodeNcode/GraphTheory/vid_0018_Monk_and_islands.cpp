
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

#define ff first
#define ss second
#define lli long long int
#define pair <int,int>
#define vii vector<ii>
#define pb push_back

vi arr[1000001];
vi vis(1000001, 0);
int dist[1000001];

void bfs(int v, int n)
{

    vis[v] = 1;
    queue<int> q;
    q.push(v);

    while (!q.empty())
    {
       
        int temp = q.front();
        q.pop();
        for (int ele : arr[temp])
        {
            if (vis[ele] == 0)
            {
                vis[ele] = 1;
                q.push(ele);
                dist[ele]=dist[temp]+1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, a, b;
        cin >> n >> m;

        for (int i = 1; i <= n; i++)
        {
            arr[i].clear();
            vis[i] = 0;
        }

        for (int i = 1; i <= m; i++)
        {
            cin >> a >> b;
            arr[a].pb(b);
            arr[b].pb(a);
        }

        bfs(1, n);

        cout<<dist[n]<<"\n";
    }

    return 0;
}


// on hackeEarth


