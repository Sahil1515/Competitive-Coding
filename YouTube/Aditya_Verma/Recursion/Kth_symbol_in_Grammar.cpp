
#include<bits/stdc++.h>
using namespace std;

 int kthGrammar(int N, int K)
{
        
        if(K==1)
            return 0;
        int mid= (pow(2,N-1)/2);
        
        if(K<=mid)
            return kthGrammar(N-1,K);
        else return !kthGrammar(N-1,K-mid);
        
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);

    printf("%d",kthGrammar(n,k));

    return 0;
}