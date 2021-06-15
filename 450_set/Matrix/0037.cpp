#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> vec;    
        int t1=0,t2=c-1,t3=r-1,t4=0;
        
        while(t1<=t3 && t4<=t2)
        {
            if(t1<=t3 && t4<=t2)
            for(int i=t4;i<=t2;i++)
            {
                vec.push_back(matrix[t1][i]);
            }
            t1++;
            
            if(t1<=t3 && t4<=t2)
             for(int i=t1;i<=t3;i++)
            {
                vec.push_back(matrix[i][t2]);
            }
            t2--;
            
            if(t1<=t3 && t4<=t2)
             for(int i=t2;i>=t4;i--)
            {
                vec.push_back(matrix[t3][i]);
            }
            t3--;
            
            if(t1<=t3 && t4<=t2)
             for(int i=t3;i>=t1;i--)
            {
                vec.push_back(matrix[i][t4]);
            }
            t4++;
        }
        return vec;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends