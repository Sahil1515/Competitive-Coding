// Given an n x n matrix, where every row and column is sorted in non-decreasing order. 
// Print all elements of matrix in sorted order.

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int arr[n][n];
	    
	    vector<int> vec;
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            scanf("%d",&arr[i][j]);
	            vec.push_back(arr[i][j]);
	        }
	    }
	    
	    sort(vec.begin(),vec.end());
	    
	    for(auto ele: vec)
	    {
	        cout<<ele<<" ";
	    }
	    printf("\n");
	    
	    
	}
	return 0;
}


// Execution Time:0.01