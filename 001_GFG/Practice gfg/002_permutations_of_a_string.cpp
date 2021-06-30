#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    string str;
	    
	    cin>>str;
	    
	    sort(str.begin(),str.end());
        
	    do{
	        cout<<str<<" ";
	    }while(next_permutation(str.begin(),str.end()));
        
	    cout<<"\n";
	}
	return 0;
}

// 2 marks