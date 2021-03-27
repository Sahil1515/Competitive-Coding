#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Maximum Rectangular area in a histogram
// arr[]: input array
// n: size of array

class Solution
{
    public:
    
    void smallerLeft(long long arr[],int n, vector<long long>  &vec)
     {
        
         stack<int> s;
         
         for(int i=0;i<n;i++)
         {
             if(s.empty())
             {
                 vec.push_back(-1);
             }
             else if(arr[s.top()]<arr[i])
             {
                 vec.push_back(s.top());
             }
             else if(arr[s.top()]>=arr[i])
             {
                 while(!s.empty() && arr[s.top()]>=arr[i])
                 {
                     s.pop();
                 }
                 if(s.empty())
                 vec.push_back(-1);
                 else vec.push_back(s.top());
             }
             
             s.push(i);
         }
     }
    
    
    void  smallerRight(long long arr[],int n, vector<long long>  &vec)
     {
       
         stack<int> s;
         
         for(int i=n-1;i>=0;i--)
         {
             if(s.empty())
             {
                 vec.push_back(n);
             }
             else if(arr[s.top()]<arr[i])
             {
                 vec.push_back(s.top());
             }
             else if(arr[s.top()]>=arr[i])
             {
                 while(!s.empty() && arr[s.top()]>=arr[i])
                 {
                     s.pop();
                 }
                 if(s.empty())
                 vec.push_back(n);
                 else vec.push_back(s.top());
             }
             
             s.push(i);
         }
     }
    
    long long getMaxArea(long long arr[], int n){
    
    // Your code here
    vector<long long> smallerIndexLeft;
    vector<long long> smallerIndexRight;
    
    smallerLeft(arr,n,smallerIndexLeft);
    smallerRight(arr,n,smallerIndexRight);
    reverse(smallerIndexRight.begin(),smallerIndexRight.end());
    
    long long int maxi=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]*(smallerIndexRight[i]-smallerIndexLeft[i]-1));    
    }
    
    return maxi;
    
    
}
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends