#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t, n;
	scanf("%d",&t);
	
	while(t!=0)
	{
	    scanf("%d",&n);
	    
	    int * arr=(int *)malloc(n*sizeof(int));
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    
	    int sum=accumulate(arr,arr+n,0);
	   // printf("%d ",sum);
        if (sum%2==1)
        {
            printf("NO\n");
            t--;
            continue;
        }
        int sum2=sum/2;
        
        bool K[n+1][sum2+1];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum2;j++)
            {
                 if(j==0)
                K[i][j]=true;
                
                else if(i==0)
                K[i][j]=false;
                
                else if(arr[i-1]<=j)
                K[i][j]=K[i-1][j-arr[i-1]] || K[i-1][j];
                
                else 
                K[i][j]=K[i-1][j];
            }
        }
        
        if(K[n][sum2]==true)
        printf("YES\n");
        else printf("NO\n");
        
	    t--;
	}
	return 0;
}
// Execution Time:0.34

