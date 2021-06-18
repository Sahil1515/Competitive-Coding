
#include <bits/stdc++.h>
using namespace std;

int dist[1001];

void dfs(int n, int count, bool visited[], vector<int> vec[])
{
	visited[n] = 1;
	dist[n] = count;

	for (auto ele : vec[n])
	{
		if (!visited[ele])
		{
			dfs(ele, dist[n] + 1, visited, vec);
		}
	}
}

int main()
{

	int n, u, v, Q;

	scanf("%d", &n);
	vector<int> vec[n + 1];
	bool visited[n + 1];

	for (int i = 1; i <= n; i++)
	{
		visited[i] = false;
		dist[i] = INT_MAX;
		scanf("%d%d", &u, &v);
		vec[u].push_back(v);
		vec[v].push_back(u);
	}

	dfs(1, 0, visited, vec);
	scanf("%d", &Q);

	int mini = INT_MAX;
	int country = 1;
	int girl_min;
	for (int i = 1; i <= Q; i++)
	{
		scanf("%d", &girl_min);

		if (dist[girl_min] < mini)
		{
			mini = dist[girl_min];
			country = girl_min;
		}
		else if (dist[girl_min] == mini && girl_min < country)
		{
			country = girl_min;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", dist[i]);
	}
	printf("\n");

	printf("%d\n", country);
	return 0;
}

// 6
// 1 2
// 1 3
// 1 4
// 2 5
// 2 6
// 4
// 5
// 6
// 3
// 4