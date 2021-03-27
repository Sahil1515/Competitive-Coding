/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here








// Monk visits the land of Islands. There are a total of N islands numbered from 1 to N. Some pairs of islands are connected to each other by Bidirectional bridges running over water.
// Monk hates to cross these bridges as they require a lot of efforts. He is standing at Island #1 and wants to reach the Island #N. Find the minimum the number of bridges that he shall have to cross, if he takes the optimal route.

// Input:
// First line contains T. T testcases follow.
// First line of each test case contains two space-separated integers N, M.
// Each of the next M lines contains two space-separated integers X and Y , denoting that there is a bridge between Island X and Island Y.

// Output:
// Print the answer to each test case in a new line.

// Constraints:
// 1 ≤ T ≤ 10
// 1 ≤ N ≤ 104
// 1 ≤ M ≤ 105
// 1 ≤ X, Y ≤ N







#include<bits/stdc++.h>
using namespace std;

vector<int> vec[100001];
int visited[100001];
int dist[100001];

void BFS(int src)
{
    // visited[i]=true;

    queue<int> q;
    q.push(src);
    visited[src]=1;

    while(q.empty()==false)
    {
        int f=q.front();
        q.pop();

        for(auto ele: vec[f])
        if(!visited[ele])
        {
            dist[ele]=dist[f]+1;
            visited[ele]=1;
            q.push(ele);

        }
    }
}
int main()
{
    int t,a,b,V,E;
    cin>>t;
    while(t--)
    {
        cin>>V>>E;

        for(int i=1;i<=V;i++)
        visited[i]=0,dist[i]=0,vec[i].clear();

       for(int i=0;i<E;i++)
        {
            cin>>a>>b;
            vec[a].push_back(b),vec[b].push_back(a);
        }

        BFS(1);

        cout<<dist[V]<<"\n";

    }
    return 0;
}

