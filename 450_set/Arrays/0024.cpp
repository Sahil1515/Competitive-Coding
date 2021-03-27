#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int temp[100001]={0};
      int maxi=0;
      
      
      for(int i=0;i<N;i++)
      {
          maxi=max(maxi,arr[i]);
        //   if(temp[arr[i]]==0)
          temp[arr[i]]++;
      }
      int max_ans=0;
      int count=0;
      for(int i=1;i<=maxi;i++)
      {
          if(temp[i-1]>0 && temp[i]>0)
          count++;
          else {
              max_ans=max(max_ans,count);
              count=0;
          }
      }
      max_ans=max(max_ans,count);
      
      return max_ans+1;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends