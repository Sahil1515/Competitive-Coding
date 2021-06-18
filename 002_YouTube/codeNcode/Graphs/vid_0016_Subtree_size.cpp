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

int dfs(int v,int p)
{
    vis[v] = 1;
    int curr_dis=1;
    for (int ele : arr[v])
    {
        if (vis[ele] == 0)
        {
            curr_dis+= dfs(ele,v);
        }
    }
    res[v]=curr_dis;
    return curr_dis;


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

    int temp=dfs(1,0);

    cout<<"\n\n";

    for(int i=1;i<=vertices;i++)
    cout<<res[i]<<"\n";

   return 0;
}