
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
  public:
  
    int sum(int n)
    {
        if(n<=2)
        return n;
        
        else if(n%2==0)
        return sum(n/2) +1;
        else return sum(n/2)+2;
    }
    int minOperation(int n)
    {
        //code here.
        return sum(n);
        
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}  // } Driver Code Ends

// Execution Time:0.01


// Given a number N. Find the number of operations required to reach N starting from 0. You have 2 operations available:

//     Double the number
//     Add one to the number


