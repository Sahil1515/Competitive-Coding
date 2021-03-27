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
	    
	    sort(arr,arr+n);
	    
	    int count=1;
	    int count_final=0;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i-1]+1==arr[i])
	            count++;
	        else 
	       {
	            count_final++;
	            count=1;
	       }
	    }
	    count_final++;
	    
	    printf("%d\n",count_final);
	}
	return 0;
}

// Correct Answer
// Execution Time:0.01
