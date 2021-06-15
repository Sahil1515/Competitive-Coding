
class Solution
{   
public:
    void reverseCol(vector<vector<int> > &matrix)
    {
        // code here
        for(int i=0;i<matrix.size();i++)
            reverse(matrix[i].begin(),matrix[i].end());
    }
};