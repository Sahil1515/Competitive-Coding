
#include <bits/stdc++.h>
using namespace std;


int union_(int arr1[],int arr2[],int N,int M)
{
    set<int> s;
    for(int i=0;i<N;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<M;i++)
    {
         s.insert(arr2[i]);
    }
    int si=s.size();
    s.clear();
    
    return si;
}

int main() {
	//code
	int t; scanf("%d",&t);
	while(t--)
	{
	    int N,M;
	    scanf("%d%d",&N,&M);
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i=0;i<N;i++)
	    scanf("%d",&arr1[i]);
	    
	    for(int i=0;i<M;i++)
	    scanf("%d",&arr2[i]);
	    
	    printf("%d\n",union_(arr1,arr2,N,M) );
	    
	}
	return 0;
}

// Execution Time:1.3
