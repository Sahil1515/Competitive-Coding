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
int vis[1000001], coler[1000001];

bool dfs(int v, int col)
{
    vis[v] = 1;
    coler[v]=col;
    for (int ele : arr[v])
        if (vis[ele] == 0)
        {
            if (dfs(ele, col ^ 1) == false)
                return false;
        }
        else if(coler[v]==coler[ele])
        return false;

        return true;
}

int main()
{
    int t, edges, vertices, a, b;

    cin >> t;
    int num=1;
    while (t--)
    {
        int status=0;
        cout<<"Scenario #"<<num++<<":\n";
        cin >> vertices >> edges;

        for (int i = 1; i <= vertices; i++)
        arr[i].clear(),vis[i]=0;


        for (int i = 1; i <= edges; i++)
        {
            cin >> a >> b;
            arr[a].pb(b);
            arr[b].pb(a);
        }

        for (int i = 1; i <= vertices; i++)
            if (vis[i] == 0)
                if(dfs(i, 0)==false){
                    cout<<"Suspicious bugs found!\n";
                    status=1;
                    break;
                }
        
        if(status==0)
        {
            cout<<"No suspicious bugs found!\n";
        }
        
    }

    return 0;
}