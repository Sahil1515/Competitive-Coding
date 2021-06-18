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
int vis[1000001];
int in[1000001],out[1000001];

int timer=1;

void dfs(int v)
{
    vis[v]=1;
    in[v]=timer++;

    for(int ele: arr[v])
    {
        if(vis[ele]==0)
        {
            dfs(ele);
        }
    }   
    out[v]=timer++;
}

int main()
{
    int t, edges, vertices, a, b;

    // cin >> t;
    int num=1;
   
        cin >> vertices >> edges;

        for (int i = 1; i <= edges; i++)
        {
            cin >> a >> b;
            arr[a].pb(b);
            arr[b].pb(a);
        }

        dfs(1);
        

    return 0;
}