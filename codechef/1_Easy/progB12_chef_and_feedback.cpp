
#include <bits/stdc++.h>
using namespace std;


int main(void) {
	// your code goes here
	int t;
	
	scanf("%d",&t);
	while(t!=0)
	{
	   // scanf("%s",s);
	   	string s;
	   cin>>s;
	    
	    int flag=0;
	    int len=s.length();
	    
	    if(len>2)
	    for(int i=1;i<len-1;i++)
	    {
	        if( (s[i-1]=='0' && s[i]=='1' && s[i+1]=='0') || (s[i-1]=='1' && s[i]=='0' && s[i+1]=='1') )
	        {
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag==1)
	    printf("Good\n");
	    else printf("Bad\n");
	    t--;
	}
	return 0;
}



// Input:
// 2
// 11111110
// 10101010101010


// Output:
// Bad
// Good