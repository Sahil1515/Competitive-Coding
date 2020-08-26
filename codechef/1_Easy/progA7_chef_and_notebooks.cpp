#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, X,Y,K,N;
    
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d%d%d%d",&X,&Y,&K,&N);
        
        int * arr1=(int *)malloc(N*sizeof(int));//pages
        int * arr2=(int *)malloc(N*sizeof(int));//price
        
        for(int i=0;i<N;i++)
        {
            scanf("%d%d",&arr1[i],&arr2[i]);
        }
        
        int req_pages=0;
        if(X>Y)
        req_pages=X-Y;
        int flag=0;
        for(int i=0;i<N;i++)
        {
            if(arr1[i]>=req_pages && arr2[i]<=K)
            {
                flag=1;
            }
        }
        if(flag==1)
        printf("LuckyChef\n");
        else printf("UnluckyChef\n");
        
        t--;
    }
	// your code goes here
	return 0;
}

// Input
// 3
// 3 1 2 2
// 3 4
// 2 2    
// 3 1 2 2
// 2 3
// 2 3    
// 3 1 2 2
// 1 1
// 1 2

// Output
// LuckyChef
// UnluckyChef
// UnluckyChef