


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
	    
        int num=0;
        for(int i=0;i<n;i++)
        {
            num^=arr[i];
        }
	   
	    printf("%d\n",num);
	}
	return 0;
}

// Execution Time:0.33