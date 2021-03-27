// You are given a rod of integer length. You have to cut the rod 
// in various pieces such that the product of the lengths of all pieces is maximum.


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int len;
//     scanf("%d",&len);

//     int dp[len+1]={0};
//     dp[0]=dp[1]=0;
//     dp[2]=1;

//     for(int i=3;i<=len;i++)
//     {
//         for(int j=0;j<=i/2;j++)
//         {
//             dp[i]=max(dp[i],(max((i-j)*j,dp[i-j]*j )));
//         }
//     }

//     printf("%d\n",dp[len]);
// }




#include <iostream> 
using namespace std; 

/* The main function that teturns the max possible product */
int maxProd(int n) 
{ 
// n equals to 2 or 3 must be handled explicitly 
if (n == 2 || n == 3) return (n-1); 

// Keep removing parts of size 3 while n is greater than 4 
int res = 1; 
while (n > 4) 
{ 
	n -= 3; 
	res *= 3; // Keep multiplying 3 to res 
} 
return (n * res); // The last part multiplied by previous parts 
} 

/* Driver program to test above functions */
int main() 
{ 
	cout << "Maximum Product is " << maxProd(10); 
	return 0; 
} 
