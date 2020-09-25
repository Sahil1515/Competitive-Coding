

// https://practice.geeksforgeeks.org/problems/game-of-death-in-a-circle/0


using namespace std;
#include<bits/stdc++.h>
int func(int n1, int n2)
{
    if(n1==1)
    return 1;
    else 
    return (func(n1-1,n2)+n2-1)%n1+1;
}

int main() {
    
    int t, n1,n2;
    
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d%d",&n1,&n2);
        printf("%d\n",func(n1,n2)); 
        t--;
    }
	//code
	return 0;
}