// #include<bits/stdc++.h>
// using namespace std;

// int  main()
// {
//     int t;
//     cin>>t;

//     while (t--)
//     {
//         long long int n1,n2;
//         cin>>n1>>n2;
//         while (n1>0 && n2>0)
//         {
//             if(n1>n2)
//             {
//                 n1=n1-2;
//                 n2--;
//             } 
//             else
//             {
//                 n2=n2-2;
//                 n1--;
//             }
            
//         }
//         if(n1==0 && n2==0)
//         {
//             printf("YES\n");
//         }
//         else
//         {
//             printf("NO\n");
//         }
//     }
//     return 0;    
// }



#include<bits/stdc++.h>
using  namespace std;

typedef long long int ull;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ull n1,n2;
        cin>>n1>>n2;

        ull sum=n1+n2;

        n1=min(n1,n2);
        n2=(sum-n1);
        if(n1*2 < n2)
        {
            printf("NO\n");
            continue;
        }
        else
        {
            n1=n1%3;
            n2=n2%3;
            sum=n1+n2;
            n1=min(n1,n2);
            n2=sum-n1;

            if((n1==0 && n2==0) || (n1==1 && n2==2))
            {
                printf("YES\n");
                continue;
            }
            else
            {
                printf("NO\n");
            }
            
        }
    }
    return 0;
    
}