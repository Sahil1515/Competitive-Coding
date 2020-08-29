#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t,n;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d",&n);
	    int arr[n];
	    set<int> s;
	    
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	        s.insert(arr[i]);
	    }
	    
	    printf("%d\n",s.size());
	    s.clear();
	    
	    t--;
	}
	return 0;
}


// Input
// 2
// 5
// 1 1 1 1 1
// 5
// 1 2 3 1 2