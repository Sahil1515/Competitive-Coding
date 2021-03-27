#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;

    long long int res = 1;
    long long int left = (n / a);
    long long int top = (m / a);
    if(a==1)
    {
        res=(n*m);
        cout<<res;
    }
    else if (n * m <= a * a)
        cout << 1;
    else
    {
        res = res * left * top;
        if (n % a != 0)
        {
            if (m % a != 0)
            {
                res = res + top + left + 1;
            }
            else
                res += top;
        }
        else
         res += left;

        cout << res;
    }

    

    return 0;
}