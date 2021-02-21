#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x = 0;

    while (t--)
    {
        string str;
        cin >> str;
        if (str[0] == '+')
            x++;
        else if (str[0] == '-')
            x--;
        else if (str[0] == 'X' && str[1] == '-')
            x--;
        else if (str[0] == 'X' && str[1] == '+')
            x++;
    }

    // cout<<"\n";
    cout << x;

    return 0;
}
