
class Solution
{   
public:     
    
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            int j=0,k=n-1;
           while(j<k)
           {
               swap(matrix[j][i],matrix[k][i]);
               j++;k--;
           }
        }
    } 
};