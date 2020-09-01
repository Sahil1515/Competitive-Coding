#include<bits/stdc++.h>
using namespace std;

// Brute Force with O(n)
// void prime_fact(int n)
// {
//     for(int i=2;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             int count=0;
//             while(n%i==0)
//             count++;
//             cout<<i<<"^"<<count;
//             printf("\n");

//         }
//         if(n>1)
//         cout<<i<<"^"<<1;

//     }
// }



// In O(sqrt(n))
void prime_fact(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int count=0;
            while(n%i==0)
            count++;
            cout<<i<<"^"<<count;
            printf("\n");

        }
        if(n>1)
        cout<<i<<"^"<<1;

    }
}
int main()
{
    int n;
    scanf("%d",&n);
    prime_fact(n);
    return 0;
}