#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n,m;
    
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d%d",&n,&m);
        int * arr1=(int *)malloc(m*sizeof(int));
        int * arr2=(int *)malloc((n+1)*sizeof(int));
         
        for(int i=0;i<m;i++)
        scanf("%d",&arr1[i]);
        
        for(int i=1;i<n+1;i++)
        arr2[i]=i;
       
        
        for(int i=0;i<m;i++)
        {
            arr2[arr1[i]]=-1;
        }
        
        vector<int> v1,v2;
        int sahil=0;
        for(int i=1;i<n+1;i++)
        {
            if(arr2[i]!=-1)
            {
            if(sahil%2==0 )
            v1.push_back(arr2[i]);
            else v2.push_back(arr2[i]);
            
               sahil++;
            }
            
        }
        
        for(auto i:v1)
        {
            printf("%d ",i);
        }
        printf("\n");
        for(auto i: v2)
        {
            printf("%d ",i);
        }
        printf("\n");
        v1.clear();
        v2.clear();
        t--;
    }
	// your code goes here
	return 0;
}

// Input:
// 3
// 6 3
// 2 4 1
// 3 2
// 3 2
// 8 2
// 3 8

// Output:
// 3 6
// 5
// 1

// 1 4 6
// 2 5 7