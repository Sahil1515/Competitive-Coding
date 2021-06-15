
class Solution
{
public:
    vector<int> boundaryTraversal(vector<vector<int>> matrix, int n, int m)
    {
        int status = 0;
        vector<int> vec;
        if (n == 1)
            for (int i = 0; i < m; i++)
                vec.push_back(matrix[0][i]), status = 1;

        else if (m == 1)
            for (int i = 0; i < n; i++)
                vec.push_back(matrix[i][0]), status = 1;

        if (!status)
        {
            for (int i = 0; i < m; i++)
            {
                vec.push_back(matrix[0][i]);
            }
            for (int i = 1; i < n; i++)
            {
                vec.push_back(matrix[i][m - 1]);
            }
            for (int i = m - 2; i >= 0; i--)
            {
                vec.push_back(matrix[n - 1][i]);
            }
            for (int i = n - 2; i >= 1; i--)
            {
                vec.push_back(matrix[i][0]);
            }
        }
        return vec;
    }
};

// 2 Marks