


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
	    int arr[n];
	    for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    
	    stack< pair<int,int> > stk;
	    
	    int ma=INT_MIN;
	    for(int i=n-1;i>=0;i--)
	    {
	        ma=max(ma,arr[i]);
	        stk.push(make_pair(arr[i],ma) );
	    }
	    
	    while(stk.empty()==false)
	    {
	        if(stk.top().second<=stk.top().first)
	        printf("%d ",stk.top().first);
	        
	        stk.pop();
	    }
	    printf("\n");
	}
	return 0;
}


// Execution Time:0.65