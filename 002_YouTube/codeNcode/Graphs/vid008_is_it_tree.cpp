#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

#define ff first
#define ss second
#define lli long long int
#define pair <int,int>
#define vii vector<ii>
#define pb push_back

vi arr[20001];
int vis[20001], dist[20001];

void dfs(int v)
{
    vis[v] = 1;
    for (int ele : arr[v])
        if (vis[ele]==0)
            dfs(ele);
}

int main()
{
    int n,m, a, b;

    cin >> n>>m;

    for (int i = 1; i <= m; i++)
    {
        cin >> a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }

    int cc=0;
    for(int i=1;i<n;i++)
    if(vis[i]==0)
    dfs(i),cc++;

    if(cc==1 && n==m+1)
    cout<<"YES";
    else 
    cout<<"NO";

    return 0;
    
}