// Given an array A[ ] denoting the time taken to complete N tasks, determine the minimum amount of
//  time required to finish the tasks considering that you can skip
//   any task, but skipping two consecutive tasks is forbidden.
 

//  For example 
// For the array arr [] = {10, 5, 2, 4, 8, 6, 7, 10}
// the output will be  22  (Skip the tasks taking more time ,avoiding consective skipping(10,8,10).
//  Tasks done in: 5+2+4+6+7)

using namespace std;
#include<bits/stdc++.h>

int main() {
	//code
	int t,n ;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d",&n);
	    int *arr =(int *)malloc(n*sizeof(int));
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    
	    int incl=arr[0];
	    int excl=0;
	    
	    for(int i=1;i<n;i++) 
	    {
	        int incl_new=arr[i]+min(incl,excl);
	        int excl_new=incl;
	        incl=incl_new;
	        excl=excl_new;
	        
	        
	    }
	    printf("%d\n",min(incl,excl));
	    t--;
	}
	return 0;
}