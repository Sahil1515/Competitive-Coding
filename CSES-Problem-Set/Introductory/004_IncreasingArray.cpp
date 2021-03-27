#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;

    scanf("%lld", &n);
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {

            count += arr[i] - arr[i + 1];
            arr[i + 1] = arr[i];
        }
    }
    printf("%lld", count);

    return 0;
}