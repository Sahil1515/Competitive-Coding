#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	string s1,s2;
	
	scanf("%d",&t);
	while(t!=0)
	{
	    cin>>s1>>s2;
	    
	    int arr[256]={0};
	    
	    int l1=s1.length();
	    int l2=s2.length();
	    
	    for(int i=0;i<l1;i++)
	    arr[s1[i]]=-999;
	    
	    for(int i=0;i<l2;i++)
	    arr[s2[i]]++;
	    
	    int count=0;
	    for(int i=0;i<256;i++)
	    if(arr[i]<0)
	    count=count+(arr[i]+999);
	    
	    printf("%d\n",count);
	    
	    t--;
	}
	return 0;
}

// Input:
// 4
// abc
// abcdef
// aA
// abAZ
// aaa
// a
// what
// none

// Output:
// 3
// 2
// 1
// 0