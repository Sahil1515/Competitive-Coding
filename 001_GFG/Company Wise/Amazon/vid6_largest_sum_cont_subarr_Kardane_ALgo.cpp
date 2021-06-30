// Kadane's Algorithm
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
	    
	    int end_sum=arr[0];
	    int max_sum=arr[0];
	    
	    for(int i=1;i<n;i++)
	    {
	        end_sum=max(arr[i],end_sum+arr[i]);   
	        max_sum=max(max_sum,end_sum);
	    }
	    printf("%d\n",max_sum);
	}
	return 0;
}
// Execution Time:0.1