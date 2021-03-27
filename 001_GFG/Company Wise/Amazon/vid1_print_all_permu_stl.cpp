#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    string str;
	    cin>>str;
	    sort(str.begin(),str.end());
	    
	    do{
	        cout<<str<<" ";
	    }
	    while(next_permutation(str.begin(),str.end()));
	    cout<<"\n";
	    
	}
	return 0;
}

// Execution Time:0.01