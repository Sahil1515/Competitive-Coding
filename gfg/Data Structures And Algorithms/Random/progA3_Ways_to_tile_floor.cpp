using namespace std;
#include<bits/stdc++.h>

int main() {
	//code
	int t, W;
	scanf("%d",&t);
	while(t!=0)
	{
	    scanf("%d",&W);
	    long int dp[W+1];
	    dp[0]=0;
	    for(int i=1;i<W+1;i++)
	    {
	        if(i==1 || i==2)
	        {
	            dp[i]=i;
	        }
	        else dp[i]=dp[i-1]+dp[i-2];
	    }
	    
	    printf("%ld\n",dp[W]);
	    t--;
	}
	return 0;
}


// Given a floor of dimensions 2 x W and tiles of dimensions
// 2 x 1, the task is to find the number of ways the floor 
// can be tiled. A tile can either be placed horizontally 
// i.e as a 1 x 2 tile or vertically i.e as 2 x 1 tile.

// Input
// 2
// 5
// 3

// Output
// 8
// 3