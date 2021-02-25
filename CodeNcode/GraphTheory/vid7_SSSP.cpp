#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

#define ff first
#define ss second
#define lli long long int
#define pair <int,int>
#define vii vector<ii>
#define pb push_back

vi arr[1001];
int vis[1001], dist[1001];

void dfs(int v, int d)
{
    vis[v] = 1;
    dist[v] = d;
    for (int ele : arr[v])
        if (vis[ele]==0)
            dfs(ele, d + 1);
}
int main()
{
    int n, q, a, b;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a, b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    dfs(1, 0);

    cin>>q;

    int ans=-1,min_dist=INT_MAX;
    while (q--)
    {
        int girl_city;
        cin>>girl_city;

        if(dist[girl_city]< min_dist)
        min_dist=dist[girl_city], ans=girl_city;

        else if(dist[girl_city]==min_dist && girl_city<ans)
        ans=girl_city;
    }
    cout<<ans;
    
}