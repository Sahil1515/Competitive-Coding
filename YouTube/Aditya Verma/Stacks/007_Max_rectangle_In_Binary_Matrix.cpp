

#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

/*You are required to complete this method*/
class Solution{
  public:
   void smallerLeft(int arr[],int n, vector<int>  &vec)
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
    
    
    void  smallerRight(int arr[],int n, vector<int>  &vec)
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
    
    int getMaxArea(int arr[], int n){
    
    // Your code here
    vector<int> smallerIndexLeft;
    vector<int> smallerIndexRight;
    
    smallerLeft(arr,n,smallerIndexLeft);
    smallerRight(arr,n,smallerIndexRight);
    reverse(smallerIndexRight.begin(),smallerIndexRight.end());
    
    int maxi=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]*(smallerIndexRight[i]-smallerIndexLeft[i]-1));    
    }
    
    return maxi;
}
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int maxi=INT_MIN;
        int arr[m+1]={0};
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(M[i][j]==1)
                    arr[j]=arr[j]+1;
                else arr[j]=0;
            }
            maxi=max(getMaxArea(arr,m),maxi);
        }
        return maxi;
    }
};



// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends