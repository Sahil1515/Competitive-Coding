
using namespace std;
#include<bits/stdc++.h>

int main() {
	//code
	int t,n;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d",&n);
	    int * arr=(int *)malloc((n-1)*sizeof(int));
	    
	    for(int i=0;i<n-1;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    long long int sum=accumulate(arr,arr+(n-1),0);
	    long long int sum1=0;
	    sum1=((n)*(n+1))/2;
	    printf("%lld\n",sum1-sum);
	    t--;
	}
	return 0;
}

// Given an array C of size N-1 and given that there are
// numbers from 1 to N with one element missing,
// the missing number is to be found.

// Input:
// 2
// 5
// 1 2 3 5
// 10
// 1 2 3 4 5 6 7 8 10

// Output:
// 4
// 9