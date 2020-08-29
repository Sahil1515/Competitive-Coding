
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	// your code goes here
	int t ;
	scanf("%d",&t);
	while(t!=0)
	{
	    string str1,str2;
	    cin>>str1>>str2;
	    
	    int len1,len2;
	    len1=str1.length();
	    len2=str2.length();
	    
	    if(len2<len1)
	    {
	        string p=str1;
	        str1=str2;
	        str2=p;
	        swap(len1,len2);
	    }
	    
	    int k=0,count=0;
	  for(int i=0;i<len1;i++)
	  {
	      for(int j=k;j<len2;j++)
	      {
	              if(str1[i]==str2[j])
	              {
	                  k=j+1;
	                  count++;
	                  break;
	              }
	      }
	      
	  }
	        if(count==len1)
	        {
	            printf("YES\n");
	        }
	        else {
	            printf("NO\n");   
	        }
	        str1.clear();
	        str2.clear();
	   
	    t--;
	}
	return 0;
}





// 3
// john johanna
// ira ira
// kayla jayla