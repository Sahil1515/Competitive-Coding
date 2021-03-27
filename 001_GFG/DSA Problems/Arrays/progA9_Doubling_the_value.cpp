

#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t, n;
	long long int b;
	
	scanf("%d",&t);
	while(t!=0){
	    scanf("%d%lld", &n, &b );
	    long long int *arr=(long long int *)malloc(n*sizeof( long long int));
	    for( int i=0;i<n;i++)
	    {
	        scanf("%lld", &arr[i]);
	    } 
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]==b)
	       {
	           b=b*2;
	       }
	   }
	    printf("%lld\n",b);
	    
	    t--;
	}
	return 0;
}
// Given an array of size n and an integer b, 
// traverse the array and if the element in array is b, 
// double b and continue traversal. 
// In the end return value of b.

// Input:
// 1
// 5 2
// 1 2 3 4 8

// Output:
// 16