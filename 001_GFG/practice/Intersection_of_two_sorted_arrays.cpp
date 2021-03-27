#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int arr1[n1], arr2[n2];

    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    int i = 0, j = 0;
    int temp = -1;

    while (i < n1 && j < n2)
    {
        if (arr1[i] == arr2[j])
        {
            if (temp != arr1[i])
            {
                cout << arr1[i] << " ";
                temp = arr1[i];
            }
            i++;j++;
        }
        else
        {
            if (arr1[i] < arr2[j])
                i++;
            else
                j++;
        }
    }
    return 0;
}


// 8
// 5
// 3 5 10 10 10 15 15 20
// 5 10 10 15 30


// 5
// 7
// 1 1 3 3 3
// 1 1 1 1 3 5 7