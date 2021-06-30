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
    int temp = min(arr1[0], arr2[0]);
    cout<<temp<<" ";

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            if (temp != arr1[i])
            {
                cout << arr1[i] << " ";
                temp = arr1[i];
            }
            i++;
        }
        else
        {
            if (temp != arr2[j])
            {
                cout << arr2[j] << " ";
                temp = arr2[j];
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (temp != arr1[i])
        {
            cout << arr1[i] << " ";
            temp = arr1[i];
        }
        i++;
    }
    while (j < n2)
    {
        if (temp != arr2[j])
        {
            cout << arr2[j] << " ";
            temp = arr2[j];
        }
        j++;
    }

    return 0;
}