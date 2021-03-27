class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int startr=0,startc=matrix[0].size()-1;
        
        while(startr<matrix.size() && startc>=0)
        {
            if(matrix[startr][startc]==target)
                return true;
            else if(matrix[startr][startc]<target)
            {
                startr++;
            }
            else startc--;
        }
        
        return false;
    }
};