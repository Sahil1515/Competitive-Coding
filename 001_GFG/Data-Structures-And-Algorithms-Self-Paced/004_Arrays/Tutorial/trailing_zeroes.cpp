#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t;
	scanf("%d",&t);
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int count=0;
	    
	    for(int i=5;n/i>=1;i=i*5)
	    {
	       count=count+n/i;
	    }
	    
	    cout<<count<<"\n";
	}
	return 0;
}


// Execution Time:0.01

// 4 marks