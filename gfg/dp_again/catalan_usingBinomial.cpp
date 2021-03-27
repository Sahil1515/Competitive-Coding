// #include<bits/stdc++.h>
// using namespace std;


// unsigned long int binomialUTIL(int n,int k)
// {
//     unsigned long int res=1;

//     for(int i=0;i<k;i++)
//     {
//         res=res*(n-i);
//         res=res/(i+1);
//     }

//     return res;
// }

// int catalan(int val)
// {
//     unsigned long int ele=binomialUTIL(2*val,val);
//     return ele/(val+1);
// }

// int main()
// {
//     int n;
//     cin>>n;


//     for(int i=0;i<n;i++)
//     {
//         cout<<catalan(i)<<" ";
//     }

//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;


unsigned long int catalan(int n,int k)
{
    unsigned long int res=1;

    for(int i=0;i<k;i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }

    return res;
}


int main()
{
    int n;
    cin>>n;


    for(int i=0;i<n;i++)
    {
        cout<<catalan(2*i,i)/(i+1)<<" ";
    }

    return 0;
}




// cpp_int cat(int n,int k)
// {
//      cpp_int res=1;

//     for(int i=0;i<k;i++)
//     {
//         res=res*(n-i);
//         res=res/(i+1);
//     }

//     return res/(k+1);
// }
// // n : given integer value
// cpp_int findCatalan(int n) {
    
//     return cat(2*n,n);
//     //code here
// }



