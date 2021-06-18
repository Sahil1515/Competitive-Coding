// #include <bits/stdc++.h>
// using namespace std;

// void dfs(int n, int visited[], vector<int> vec[], int *cycle)
// {
//     visited[n] = 1;

//     for (int ele : vec[n])
//     {
//         if (!visited[ele])
//         {
//             dfs(ele, visited, vec, cycle);
//         }
//         else if (visited[ele] == 2)
//         {
//             *cycle = 1;
//             return;
//         }
//     }
//     visited[n] = 2;
// }
// int main()
// {
//     int n, e, u, v;
//     scanf("%d%d", &n, &e);
//     vector<int> vec[n + 1];
//     int visited[n + 1];

//     for (int i = 0; i <= n; i++)
//         visited[i] = 0;

//     for (int i = 1; i <= e; i++)
//     {
//         scanf("%d%d", &u, &v);
//         vec[u].push_back(v);
//         vec[v].push_back(u);
//     }

//     int connected = -1;
//     int cycle = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (!visited[i])
//         {
//             connected++;
//             dfs(i, visited, vec, &cycle);
//         }
//     }
//     // Or i could directly check  if(connected>0 || e==n-1 )
//     // so no need to find the cycles
//     if (connected > 0 || cycle == 1)
//         printf("NO\n");
//     else
//         printf("YES\n");

//     return 0;

// }

// Time : 0.02sec
// mem :4.8 MB

// Input:
// 3 2
// 1 2
// 2 3

// Output:
// YES

#include <bits/stdc++.h>
using namespace std;

void dfs(int ele, bool vis[], vector<int> arr[])
{
    vis[ele] = true;

    for (auto el : arr[ele])
    {
        if (!vis[el])
            dfs(el, vis, arr);
    }
}

int main()
{
    int a, b;
    int v, e;
    scanf("%d %d", &v, &e);
    vector<int> arr[v + 1];
    bool vis[v + 1];
    for (int i = 0; i < v; i++)
    {
        vis[i] = false;
        scanf("%d%d", &a, &b);
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int cc = 0;
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
            dfs(i, vis, arr), cc++;
    }
    if (cc == 1 && v - 1 == e)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}