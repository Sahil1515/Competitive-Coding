#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;

   cin>>n;
   int A[n];
   int max1=INT_MIN;;
   for(int i=0;i<n;i++)
   {
       cin>>A[i];
       max1=max(max1,A[i]);
   }
   
    cin>>m;
    int B[m];
    int max2=INT_MIN;

    for (int  j = 0; j < m; j++)
    {
        cin>>B[j];
        max2=max(max2,B[j]);
    }
    
    cout<<max1<<" "<<max2;

    return 0;
}
