#include <bits/stdc++.h>
using namespace std;

typedef long long int ull;

int main()
{
    ull t;
    ull x, y;
    scanf("%lld", &t);

    ull res = 1;

    while (t--)
    {
        res = 0;
        scanf("%lld%lld", &x, &y);
        if(x>y)
        {
            if(x%2==0)
            {
                res=res+(x*x);
                res =res- (y-1);
            }
            else {
                res = res + ((x-1)*(x-1))+1;
                res =res+ (y-1);
            }
        }
        else
        {
            if(y%2==1)
            {
                res=res+(y*y);
                res =res - (x-1);
                
            }
            else {
                res = res + ((y-1)*(y-1))+1;
                res =res + (x-1);
            }
        }

        printf("%lld\n",res);
        }

    return 0;
}