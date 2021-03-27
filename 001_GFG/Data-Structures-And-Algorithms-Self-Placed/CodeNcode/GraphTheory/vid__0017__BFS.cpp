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
int res[1000001];

queue<int> q;

int bfs(int v,int p)
{
    vis[v] = 1;

    q.push(v);
    cout<<v<<" ";
    for (int ele : arr[v])
    {
        if(vis[ele]==0)
        q.push(ele),cout<<ele<<" ";
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

    bfs(1);
    cout<<"\n\n";

    for(int i=1;i<=vertices;i++)
    cout<<res[i]<<"\n";

   return 0;
}