#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
	int t,n;
	scanf("%d",&t);
	
	while(t!=0)
	{
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    
	    int i=0,j=n-1,k=0;
	    while(k<=j)
	    {
	        if(arr[k]==0)
	            swap(arr[i++],arr[k++]);
	        else if(arr[k]==2)
	            swap(arr[j--],arr[k]);
	        else k++; 
	        
	    }
	    
	    for(int i=0;i<n;i++)
	    printf("%d ",arr[i]);
	    
	    printf("\n");
	    t--;
	}
	return 0;
}
