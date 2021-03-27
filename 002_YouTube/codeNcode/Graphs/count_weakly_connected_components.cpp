/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>
using namespace std;

void dfs(int n, bool visited[],vector<int> v[])
{
	visited[n]=true;

	for(auto ele: v[n])
	{
		if(!visited[ele])
		dfs(ele,visited,v);
	}

}

int main() {
	int n,e;
	int a,b;
	scanf("%d%d",&n,&e);
	vector<int> v[n+1];

	bool visited[n+1];
	for(int i=0;i<=n;i++)
	visited[i]=false;

	for(int i=1;i<=e;i++)
	{
		scanf("%d%d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			count++;
			dfs(i,visited,v);
		}
	}
	printf("%d\n",count);
return 0;
}

// 8 5
// 1 2
// 2 3
// 2 4
// 3 5
// 6 7

// 3