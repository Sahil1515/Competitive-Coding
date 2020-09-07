
#include<bits/stdc++.h>
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
	    
	   // int sum2=accumulate(arr,arr+n,0);
	   int sum2=6;
        
        int K[n+1][sum2+1];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum2;j++)
            {
                 if(j==0)
                K[i][j]=1;
                
                else if(i==0)
                K[i][j]=0;
                
                else if(arr[i-1]<=j)
                K[i][j]=K[i-1][j-arr[i-1]] + K[i-1][j];
                
                else 
                K[i][j]=K[i-1][j];
            }
        }
        
        printf("%d\n",K[n][sum2]);
        
	    t--;
	}
	return 0;
}
