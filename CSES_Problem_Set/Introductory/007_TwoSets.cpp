#include <bits/stdc++.h>
using namespace std;

typedef long long int ull;

int main()
{
    ull n;
    cin >> n;
    ull sum = 0;
    sum =

        sum = (n) * (n - 1) / 4;
    int dp[n + 1][(sum) + 1];

    if (sum % 2 == 1)
        printf("NO\n");
    else
    {

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (i==0 && j==0)
                {
                    dp[i][j]=1;
                }
                else  if (i == 0)
                {
                    dp[i][j] = 0;
                }
                else if (j == 0)
                {
                    dp[i][j] = 1;
                }

                else if (arr[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum / 2; j++)
        {
            cout << dp[i][j];
        }
        cout << "\n";
    }
    if (dp[n][sum / 2])
    {
        /* code */
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}