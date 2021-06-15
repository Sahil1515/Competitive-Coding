
// You are given a matrix of dimensions (n1 x m1).
// You have to exchange its first column with the last column.


void exchangeColumns(vector<vector<int> > &matrix)
{
    // code here
    int m=matrix[0].size();
    for(int i=0;i<matrix.size();i++)
    {
        swap(matrix[i][0],matrix[i][m-1]);
    }
}