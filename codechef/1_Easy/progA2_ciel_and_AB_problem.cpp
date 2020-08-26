#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int a,b;
	scanf("%d%d",&a,&b);
	int ans=abs(a-b);
	
	if(ans%10==0 || ans-1==0 )
	printf("%d",ans+1);
	else
	printf("%d",ans-1);
	
	return 0;
}
