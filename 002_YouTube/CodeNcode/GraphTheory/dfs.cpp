
#include<bits/stdc++.h>
using namespace std;

void dfs(int v, int vis[], vector<int> arr[])
{
    vis[v] = 1;
    for (int ele : arr[v])
    {
        if (!vis[ele])
            dfs(ele, vis, arr);
    }
}


int main()
{
    int vis[100];
    
}