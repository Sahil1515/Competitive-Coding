#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n,k;
    
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d",&n);
        int * arr=(int *)malloc(n*sizeof(int));
        for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        scanf("%d",&k);
        int num=arr[k-1];
        
        sort(arr,arr+n);
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==num)
            {
                printf("%d\n",i+1);
                break;
            }
        }
        t--;
    }
	// your code goes here
	return 0;
}


// Input:
// 3
// 4
// 1 3 4 2
// 2
// 5
// 1 2 3 9 4
// 5
// 5
// 1 2 3 9 4 
// 1

// Output:
// 3
// 4
// 1