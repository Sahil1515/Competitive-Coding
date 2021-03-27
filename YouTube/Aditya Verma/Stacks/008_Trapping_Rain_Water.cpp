#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
        
        int arrL[n];
        int arrR[n];
        int water[n];
        
        for(int i=0;i<n;i++)
        {
            arrL[i]=arrR[i]=water[i]=0;
        }
        
        
        arrL[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            arrL[i]=max(arr[i],arrL[i-1]);
        }
        
        arrR[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            arrR[i]=max(arr[i],arrR[i+1]);
        }
        
        int sum=0;
        for(int i=0;i<n;i++)
        {
            water[i]=min(arrL[i],arrR[i])-arr[i];
            sum=sum+water[i];
        }
        
      return sum;
        
        
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends