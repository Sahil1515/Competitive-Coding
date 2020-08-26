#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, G,I,N,Q;
    
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d",&G);
        int count=0;
        
        while(G!=0)
        {
            scanf("%d%d%d",&I,&N,&Q);
            if(N%2==0)
              count=N/2;
            else if(I!=Q)
              count=(N/2)+1;
            else count=N/2;
            printf("%d\n",count);
            G--;
        }
        t--;
    }
	// your code goes here
	return 0;
}


// Input:
// 1
// 2
// 1 5 1
// 1 5 2

// Output:
// 2
// 3
