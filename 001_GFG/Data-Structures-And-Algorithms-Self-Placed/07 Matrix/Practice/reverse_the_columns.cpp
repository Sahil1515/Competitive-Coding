
class Solution
{   
public:
    void interchangeRows(vector<vector<int> > &matrix)
    {
        // code here
        int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0;i<m;i++)
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