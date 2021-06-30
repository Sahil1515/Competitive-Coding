

#include <stdio.h>
#include <stdlib.h>
int bin(int *arr, int l, int h, int x)
{
    if (h >= l)
    {
        int mid = (l + h) / 2;

        if (arr[mid] == x)
            return 1;
        else if (arr[mid] > x)
            return bin(arr, l, mid - 1, x);
        else if (arr[mid] < x)
            return bin(arr, mid + 1, h, x);
    }
    return -1;
}

int main()
{

    int n, t, m;

    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &n);
        scanf("%d", &m);
        int *arr = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int j = 0; j < m; j++)
        {
            if (bin(arr, 0, n - 1, j) == -1)
            {
                printf("%d\n", j);
                break;
            }
        }

        t--;
    }
}
// Input:
// 4
// 5 10
// 0 1 2 6 9
// 4 12
// 4 5 10 11
// 4 5
// 0 1 2 3
// 9 11
// 0 1 2 3 4 5 6 7 10
// Output:
// 3
// 0
// 4
// 8
// Given a sorted array Arr[] of N distinct integers where each integer is in the range from 0 to M-1 and M > N. 
// You need to write a program to find the smallest number that is missing from the array. For example, 
// if the array is Arr[] = {0, 1, 2, 6, 9} and n = 5, m = 10. Then the smallest missing number is 3.
// Note: Array does not contain repetitive elements.
