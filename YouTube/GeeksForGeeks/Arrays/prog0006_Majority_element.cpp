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
	    
	    int ma=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	        ma=max(ma,arr[i]);
	    }
	    int h[ma+1]={0};
	    
	    for(int i=0;i<n;i++)
	    h[arr[i]]++;
	    
	    int flag=-1;
	    for(int i=0;i<=ma;i++)
	    {
	        if(h[i]>n/2)
	        {
	            flag=i;
	        }
	        h[i]=0;
	    }
	    
	  printf("%d\n",flag);
	    
	}
	return 0;
}

// Those elements which occur for more than n/2 times

// Execution Time:0.1