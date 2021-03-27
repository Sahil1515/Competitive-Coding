#include <bits/stdc++.h>
using namespace std;

// int n, m;
int arr[100][100];

int binary_search_func(int arr[], int left, int right)
{
    cout<<"hi ";
    int mid = (left + right) / 2;

    while (left < right)
    {
        if (left > 0)
            if (arr[mid] < 0 && arr[mid - 1] > 0)
            {
                return mid;
            }
            else if (arr[mid] > 0)
                left = mid;
            else
                right = mid;
    }

    return -1;
}

int main()
{
    int n,m;
    cin >> n >> m;

    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            count++;
            cin >> arr[i][j];
            cout<< count;
        }
        cout<<"still ";
    }

    cout<<"Hey ";

    // int count = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     int res = binary_search_func(arr[i], 0, m);
    //     if (res != -1)
    //         count = count + (n - res);
    // }

    cout << count;

    return 0;
}

// 4 3 2 -1
// 3 2 1 -1
// 1 1 -1 -2
// -1 -1 -2 -3
