// Check if the directed graph is connected or not?

// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
#define N 100000 

// To keep correct and reverse direction 
vector<int> gr1[N];

// Function to add edges 
void Add_edge(int u, int v) 
{ 
	gr1[u].push_back(v); 
} 

void dfs(int t, bool visited[],vector<int> gr1[])
{
  visited[t]=true;
  for(auto i=gr1[t].begin();i!=gr1[t].end();++i)
  {
  	if(!visited[*i])
    {
    visited[*i]=true;
    dfs(*i,visited,gr1);
    }
  }
}

bool Is_Connected(int n) 
{ 
	bool *visited= new bool[n];
    for(int i=0;i<n;i++)
      visited[i]=false;
  
  dfs(0,visited,gr1);
     for(int i=0;i<n;i++)
     if( visited[i]==false)
       return false;
  	 return true;
} 

// Driver code 
int main() 
{ 
	int n = 4; 

	// Add edges 
	Add_edge(0, 1); 
	Add_edge(0, 2); 
	Add_edge(1, 2); 
   


	// Function call 
	if (Is_Connected(n)) 
		cout << "Yes"; 
	else
		cout << "No"; 

	return 0; 
}
