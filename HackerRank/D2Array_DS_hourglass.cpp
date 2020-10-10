#include <bits/stdc++.h>

using namespace std;


int sum_fun(int row, int col, vector<vector<int>> arr)
{
    int sum=0;
    for(int j=col;j<col+3;j++)
    {
        sum=sum+arr[row][j];
    }
    for(int j=col;j<col+3;j++)
    {
        sum=sum+arr[row+2][j];
    }
    sum=sum+arr[row+1][col+1];
    return sum;
}
// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {

    int maxi=INT_MIN;
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            maxi=max(maxi,sum_fun(i,j,arr));
        }
    }
    return maxi;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}


// Sample Input

// 1 1 1 0 0 0
// 0 1 0 0 0 0
// 1 1 1 0 0 0
// 0 0 2 4 4 0
// 0 0 0 2 0 0
// 0 0 1 2 4 0

// Sample Output

// 19
