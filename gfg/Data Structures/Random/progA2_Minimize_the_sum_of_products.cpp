#include <bits/stdc++.h>
using namespace
int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
	    int n;
	    scanf("%d",&n);
	    int *arr1=(int*)malloc(n*sizeof(int));
	    int *arr2=(int*)malloc(n*sizeof(int));
	   
	   
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr1[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr2[i]);
	    }
	   sort(arr1,arr1+n);
	   sort(arr2,arr2+n);
	   
	   reverse(arr1,arr1+n);
	   
	   long long int sum=0;
	   for(int i=0;i<n;i++)
	   {
	       sum=sum+arr1[i]*arr2[i];
	   }
	   
	    printf("%lld\n",sum);
	    
	    t--;
	}
	return 0;
}

// Input:
// 2
// 3 
// 3 1 1
// 6 5 4
// 5
// 6 1 9 5 4
// 3 4 8 2 4
// Output:
// 23 
// 80

// Explanation:
// For testcase1: 1*6+1*5+3*4 = 6+5+12 = 23 
// is the minimum sum