#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t ;
	int n;
	scanf("%d",&t);
	while(t>0)
	{
	    scanf("%d",&n);
	   int * arr=(int *)malloc(n*sizeof(int));
	   for(int i=0;i<n;i++)
	   {
	       scanf("%d",&arr[i]);
	   }
	   int mid=n/2;
	   int sumL=0,sumR=0;
	   for(int i=0;i<mid;i++)
	   {
	       sumL+=arr[i];
	       sumR+=arr[n-i-1];
	   }
	   printf("%d",abs(sumL-sumR));
	   printf("\n");
	    t--;
	}
	return 0;
}

// Given an array of even size, task is to find minimum value
//  that can be added to an element so that array become balanced. 
//  An array is balanced if the sum of the left half of the array 
// elements is equal to the sum of right half. 