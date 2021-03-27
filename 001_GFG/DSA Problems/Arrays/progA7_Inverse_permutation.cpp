
#include<bits/stdc++.h>

int main() {
	//code
	int t, n;
	
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d",&n);
	    int *arr1=(int*)malloc(60*sizeof(int));
	    int *arr2=(int*)malloc(60*sizeof(int));
	    
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr1[i]);
	    }
	    
	      for(int i=0;i<n;i++)
	    {
	        arr2[arr1[i]-1]=i+1;
	    }
	    for(int i=0;i<n;i++)
	    {
	        printf("%d ",arr2[i]);
	    }
	    printf("\n");
	 
	    t--;
	}
	
	return 0;
}

// Given an array A of size n of integers in the range from 1 to n,
//  we need to find the inverse permutation of that array.

//  Input:
// 3
// 4
// 1 4 3 2
// 5
// 2 3 4 5 1
// 5
// 2 3 1 5 4

// Output:
// 1 4 3 2
// 5 1 2 3 4
// 3 1 2 5 4