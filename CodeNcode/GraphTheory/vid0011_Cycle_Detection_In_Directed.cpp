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

bool dfs(int v, int parent)
{
    vis[v] = 1;
    for(int ele: arr[v])
    {
        if(vis[ele]==0)
        {
            if(dfs(ele,v)==true)
            return true;
        }
        else if(ele!=parent)
        return true;
    }
    return false;
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

        cout<<dfs(1,0);
        

    return 0;
}