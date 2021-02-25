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

int maxD = -1;
int maxNode=0;

void dfs(int v,int d)
{
    vis[v] = 1;
    if (d > maxD)
        maxD = d,maxNode=v;

    for (int ele : arr[v])
    {
        if (vis[ele] == 0)
        {
            dfs(ele,d+1);
        }
    }
}

int main()
{
    int t, edges, vertices, a, b;

    // cin >> t;
    int num = 1;

    cin >> vertices;

    for (int i = 1; i < vertices; i++)
    {
        cin >> a >> b;
        arr[a].pb(b);
        arr[b].pb(a);
    }

    dfs(1,0);

    // for(int i=1;i<=vertices;i++)
    // vis[i]=0;

    fill(vis.begin(),vis.end(),0);

    maxD=-1;
    dfs(maxNode,0);

    cout<<maxD;

   return 0;
}