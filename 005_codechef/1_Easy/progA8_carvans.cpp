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

        int count = 1;
        if (n == 1)
        {
            printf("%d\n", count);
            t--;
            continue;
        }

        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] > arr[i])
                count++;
            else
                arr[i] = arr[i - 1];
        }
        printf("%d\n", count);
        t--;
    }
    // your code goes here
    return 0;
}

// Input:
// 3
// 1
// 10
// 3
// 8 3 6
// 5
// 4 5 1 2 3

// Output:
// 1
// 2
// 2