#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;

    scanf("%d", &t);
    while (t != 0)
    {
        scanf("%d", &n);
        int *arr = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        sort(arr, arr + n);

        int min = INT_MAX;
        for (int i = 1; i < n; i++)
        {

            if (min > arr[i] - arr[i - 1])
                min = arr[i] - arr[i - 1];
        }
        printf("%d\n", min);
        t--;
    }
    // your code goes here
    return 0;
}

// Input:

    // 1
    // 5
    // 4 9 1 32 13

    // Output:

    // 3
