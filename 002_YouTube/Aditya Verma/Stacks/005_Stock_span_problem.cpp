#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to calculate span
// price[]: price array in input
// n: size of array

class Solution{
    public:
    vector <int> calculateSpan(int arr[], int n)
    {
       // Your code here
       vector <int> vec;
       stack <int> s;
       
       for(int i=0;i<n;i++)
       {
           if(s.empty())
           vec.push_back(1);
           
           else if(arr[s.top()]>arr[i])
           {
               vec.push_back(i-s.top());
           }
           else if(arr[s.top()]<=arr[i])
           {
               while(!s.empty() && arr[s.top()]<=arr[i])
               {
                   s.pop();
               }
               if(s.empty())
               {
                   vec.push_back(i+1);
               }
               else vec.push_back(i-s.top());
           }
           
           s.push(i);
       }
    //   reverse(vec.begin(),vec.end());
       return vec;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends