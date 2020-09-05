// https://practice.geeksforgeeks.org/problems/adding-ones/0

#include<stdlib.h>
int main() {
	//code
	
	int t, n1,n2;
	 scanf("%d",&t);
	 
	 while(t!=0)
	 {
	     scanf("%d%d",&n1,&n2);
	     int *arr1=(int* )malloc(n1*sizeof(int));
	     int *arr2=(int* )malloc(n2*sizeof(int));
	     
	      for (int i=0;i<n1;i++)
	     {
	         arr1[i]=0;
	     }
	     
	      for (int i=0;i<n2;i++)
	     {
	         scanf("%d",&arr2[i]);
	     }
	    
	     
	     for(int i=0;i<n2;i++)
	     {
	         for(int j=arr2[i]-1;j<n1;j++)
	         {
	             arr1[j]=arr1[j]+1;
	         }
	     }
	     	     for (int i=0;i<n1;i++)
	     {
	         printf("%d ",arr1[i]);
	     }
	     printf("\n");
	     
	     t--;
	 }
	return 0;
}


// You start with an array A of size N.
//  Also, A[i] = 0 for i = 1 to N. You
//   will be given K positive integers.
//    Let j be one of these integers,
//     you have to add 1 to all A[i], 
//     for i >= j. Your task is to print the array A after all 
// these K updates are done.

// 2
// 3 4
// 1 1 2 3
// 2 3
// 1 1 1
// Output:
// 2 3 4
// 3 3


