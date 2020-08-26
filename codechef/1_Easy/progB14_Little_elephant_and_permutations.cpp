#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d",&n);
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    
	    
	    if(n==1)
	    {
	        printf("YES\n");
	        t--;
	        continue;
	    }
	    
	    int count1=0,count2=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(i<j && arr[i]>arr[j])
	            count1++;
	        }
	    }
	    
	     for(int i=0;i<n-1;i++)
	    {
	        if(arr[i]>arr[i+1])
	        count2++;
	    }
	   // printf(" c1 %d  c2 %d\n",count1,count2);
	    if(count1==count2)
	    printf("YES\n");
	    else printf("NO\n");
	    t--;
	}
	return 0;
}


// Input:
// 4
// 1
// 1
// 2
// 2 1
// 3
// 3 2 1
// 4
// 1 3 2 4

// Output:
// YES
// YES
// NO
// YES