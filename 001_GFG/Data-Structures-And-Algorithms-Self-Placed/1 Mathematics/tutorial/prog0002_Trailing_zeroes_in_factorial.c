#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    
	    int count=0;
	    
	    for(int i=5;i<=n;i=i*5)
	    {
	        count=count+n/i;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

// Execution Time:0.01


// Input:
// 1
// 9
// Output:
// 1