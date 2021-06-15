#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int sum=0;
        for(int i=0;i<K;i++)
        {
            sum+=Arr[i];
        }
        int maxi=INT_MIN;
        
        for(int i=K;i<=N;i++)
        {
            maxi=max(maxi,sum);
            sum=sum+Arr[i]-Arr[i-K];
        }
        
        return maxi;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends