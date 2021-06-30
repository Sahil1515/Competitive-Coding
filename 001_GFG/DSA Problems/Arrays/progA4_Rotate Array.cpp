using namespace std;
#include<bits/stdc++.h>
int max(int * arr, int n,int k)
{
    int m=-99999999;
    for(int i=k;i<n;i++)
    {
        if(arr[i]>m)
        m=arr[i];
    }
    return m;
}

int main() {
	//code
	int t,n;
	scanf("%d",&t);
	while(t>0)
	{
	    scanf("%d",&n);
	    int * arr=(int*)malloc(n*sizeof(int));
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    int i=0;
	    for(i=0;i<n-1;i++)
	    {
	        arr[i]=max(arr,n,i+1);
	    }
	    arr[i]=-1;
	    for(i=0;i<n;i++)
	    {
	        printf("%d ",arr[i]);
	    }
	    printf("\n");
	    t--;
	}
	return 0;
}

// Input:
// 2
// 5 2
// 1 2 3 4 5 
// 10 3
// 2 4 6 8 10 12 14 16 18 20

// Output:
// 3 4 5 1 2
// 8 10 12 14 16 18 20 2 4 6