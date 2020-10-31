
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution{
	public:

		int DivisibleByM(vector<int>nums, int m){
		    // Code here
		    
		    int n=nums.size();
		    
		    int sum=accumulate(nums.begin(),nums.end(),0);
		    
		    bool dp[n+1][sum+1];
		    
		    
		    for(int i=0;i<=n;i++)
		    {
		        for(int j=0;j<=sum;j++)
		        {
		            if(j==0)
		            dp[i][j]=true;
		            else if(i==0)
		            dp[i][j]=false;
		            else if(nums[i-1]<=j)
		            dp[i][j]= (dp[i-1][j-nums[i-1]] ) || (dp[i-1][j]);
		            else dp[i][j]=dp[i-1][j];
		        }
		    }
            for(int i=0;i<=n;i++)
		    {
		        for(int j=0;j<=sum;j++)
		        {
		            cout<<dp[i][j]<<" ";
		        }
                cout<<"\n";
		    }
		    
		    // int flag=0;
		    // for(int i=m;i<=sum;i++)
		    // {
		    //         if(dp[n][i]==1)
		    //         flag=flag || i%m==0;
		            
		    //         if(flag==1)
		    //         break;
		    // }
		    
		    return flag;
		  
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans  = ob.DivisibleByM(nums, m);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends


// 1
// 4
// 6
// 3 1 7 5