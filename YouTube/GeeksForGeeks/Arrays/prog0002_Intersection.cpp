#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
	int t; scanf("%d",&t);
	while(t--)
	{
	    int N,M;
	    scanf("%d%d",&N,&M);
	    
	    int arr1[N];
	    
	    int data,ma=0;
	    
	    for(int i=0;i<N;i++)
	    {
	        scanf("%d",&arr1[i]);
	        if(arr1[i]>ma)
	        ma=arr1[i];
	    }
	    int arr[ma+1]={0};
	    
	    for(int i=0;i<N;i++)
	    arr[arr1[i]]++;
	    
	    int count=0;
	    for(int i=0;i<M;i++)
	    {
	        cin>>data;
	        if(data<=ma && arr[data])
	        count++,arr[data]=0;
	    }
	    
	    printf("%d\n",count );
	    
	}
	return 0;
}

// Execution Time:0.4

// Example:
// Input:
// 4
// 5 3
// 89 24 75 11 23
// 89 2 4
// 6 5
// 1 2 3 4 5 6
// 3 4 5 6 7
// 4 4
// 10 10 10 10
// 20 20 20 20
// 3 3
// 10 10 10
// 10 10 10
// Output:
// 1
// 4
// 0
// 1