
#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	
	int t, n,count=0,j=0;
	
	scanf("%d",&t);
	while(t!=0){
	    count =0;
	    scanf("%d", &n);
	    int *arr=(int *)malloc(n*sizeof( int));
	    for( int i=0;i<n;i++)
	    {
	        scanf("%d", &arr[i]);
	    }
	    
	    for (int i=0;i<n-1;i++)
	    {
	        j=i;
	       while(arr[i]==arr[j+1])
	       {
	           arr[j+1]=arr[i]+1;
	           j++;
	       }
	    }
	     for (int i=0;i<n;i++)
	    {
	       count=count+arr[i];
	    }
	    printf("%d\n", count);
	    
	    t--;
	}
	return 0;
}

// Given a sorted integer array. We need to make array elements distinct by increasing values and keeping array sum minimum possible. We need to print the minimum possible sum as output.

// Input:
// 2
// 5
// 2 2 3 5 6
// 2
// 20 20
// Output:
// 20
// 41