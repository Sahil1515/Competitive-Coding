#include <stdio.h>


void TOH(int n, int from , int to, int aux)
{
    if(n==1)
    {
        printf("%d %d\n",from,to);
        return ;
    }
    
    TOH(n-1,from,aux,to);
    printf("%d %d\n",from, to);
    TOH(n-1,aux,to,from);
}
int main() {
	//code
	
	int t;
	int n;
	
	scanf("%d",&t);
	while(t--)
    {
        scanf("%d",&n);
        int from=1;
        int aux=2;
        int to=3;
        
        TOH(n,from, to, aux);
        
    }
	return 0;
}