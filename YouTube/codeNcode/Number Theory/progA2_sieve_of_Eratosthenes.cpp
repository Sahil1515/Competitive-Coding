#include <bits/stdc++.h>
using namespace std;
bool arr[1000000] = {true};

bool isPrime(int n)
{
    arr[0] = arr[1] = false;
    for (int i = 2; i * i <= 1000000; i++)
    {
        int p = i * i;
        if (arr[i])
        {
            for (int j = p; j <= 1000000; j = j + i)
            {
                arr[j] = false;
            }
        }
    }
    return arr[n];
}
int main()
{
    int n;
    scanf("%d", &n);

    cout << bool(n);
    return 0;
}