#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,d;
	scanf("%d%d",&n,&d);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	sort(arr,arr+n);
	int count=0;
	for(int i=1;i<n;i++)
	{
	    if(arr[i]-arr[i-1]<=d)
	    {
	        count++;
	        i++;
	    }
	}
	printf("%d\n",count);
	return 0;
}


// Input:

// 5 2
// 1
// 3
// 3
// 9
// 4

// Output:
// 2