#include <iostream>
using namespace std;

int main() {
	//code
	int t, n;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d",&n);
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    
	    long long  int sum_arr=0;
	    for(int i=0;i<n;i++)
	    sum_arr=sum_arr+arr[i];
	    
	    long long  int temp=sum_arr;
	    
	    long long int sum=0;
	    int flag=0;
	    
	    
	     if(n==1)
	         {
	         printf("%d\n",1); 
	         t--;
	         continue;
	         }
	    temp=temp-arr[0];
	    
	    for(int i=1;i<n;i++)
	    {
	        sum=sum+arr[i-1];
	        temp=temp-arr[i];
	        if(temp==sum)
	        {
	            printf("%d\n",i+1); 
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag==0)
	    printf("-1\n");
	   t--;
	}
	return 0;
}
