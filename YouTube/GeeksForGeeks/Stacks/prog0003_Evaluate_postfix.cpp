#include <bits/stdc++.h>
using namespace std;

int operate(int a, int b, char ele)
{
    switch(ele)
    {
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':return a/b;
    }
}
int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    string str;
	    cin>>str;
	    
	    stack<int> stk;
	    
	    int ele=0;
	    for(int i=0;str[i];i++)
	    {
	        if(isdigit(str[i]))
	        stk.push(str[i]-'0');
	        
	        else 
	        {
	            int a,b;
	            if(!stk.empty())
	                a=stk.top(),stk.pop();
	            if(!stk.empty())
	                b=stk.top(),stk.pop();
	            
	                ele=operate(b,a,str[i]);
	                stk.push(ele);
	        }
	    }
	    printf("%d\n",stk.top());
	    stk.pop();
	}
	return 0;
}


// Execution Time:0.01

// 2
// 231*+9-
// 123+*8-
// Output:
// -4
// -3

