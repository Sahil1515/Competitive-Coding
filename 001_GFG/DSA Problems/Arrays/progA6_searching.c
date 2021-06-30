

#include<stdlib.h>

int main() {
	//code
	int n,t,*arr,k;
	scanf("%d",&t);
	int c=0;
	while(t>0)
	{
	    c=0;
	    scanf("%d%d",&n,&k);
	    arr=(int *)malloc(n*sizeof(int));
	    for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    for(int i=0;i<n;i++)
        if(arr[i]==k)
        {
            printf("%d",i+1);
            c=1;
            break;
        }
        if(c==0)
        printf("%d",-1);
        
        printf("\n");
	    t--;
	}
	return 0;
}
// Given an array of N elements and a integer K. 
// Your task is to return the position of 
// first occurence of K in the given array.