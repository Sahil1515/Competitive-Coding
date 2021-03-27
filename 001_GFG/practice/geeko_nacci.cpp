#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c,n;
	    cin>>a>>b>>c>>n;
	    
	    int sum=a+b+c;
	    
	    int temp=3;
	    while(temp<=n)
	    {
	        sum=a+b+c;
	        temp++;
	        a=b;
	        b=c;
	        c=sum;
	    }
	    
	    cout<<b<<"\n";
	}
	return 0;
}