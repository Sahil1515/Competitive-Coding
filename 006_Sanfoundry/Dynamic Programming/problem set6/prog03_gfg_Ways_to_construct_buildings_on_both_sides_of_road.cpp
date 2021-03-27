
// Given an input number of sections and each section has 2 plots 
// on either sides of the road. Find all possible ways to construct 
// buildings in the plots such that there is a space between any 2 buildings.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    int dp[n+3]={0};

    dp[0]=0;
    dp[1]=1;
    dp[2]=1;

    for(int i=3;i<=n+2;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }

    printf("%d",dp[n+2]*dp[n+2]);

    return 0;
}


// Can be done in O(1)




// C++ program to count all possible way to construct buildings 
// #include<iostream> 
// using namespace std; 

// // Returns count of possible ways for N sections 
// int countWays(int N) 
// { 
// 	// Base case 
// 	if (N == 1) 
// 		return 4; // 2 for one side and 4 for two sides 

// 	// countB is count of ways with a building at the end 
// 	// countS is count of ways with a space at the end 
// 	// prev_countB and prev_countS are previous values of 
// 	// countB and countS respectively. 

// 	// Initialize countB and countS for one side 
// 	int countB=1, countS=1, prev_countB, prev_countS; 

// 	// Use the above recursive formula for calculating 
// 	// countB and countS using previous values 
// 	for (int i=2; i<=N; i++) 
// 	{ 
// 		prev_countB = countB; 
// 		prev_countS = countS; 

// 		countS = prev_countB + prev_countS; 
// 		countB = prev_countS; 
// 	} 

// 	// Result for one side is sum of ways ending with building 
// 	// and ending with space 
// 	int result = countS + countB; 

// 	// Result for 2 sides is square of result for one side 
// 	return (result*result); 
// } 

// // Driver program 
// int main() 
// { 
// 	int N = 2; 
// 	cout << "Count of ways for " << N 
// 		<< " sections is " << countWays(N); 
// 	return 0; 
// } 
