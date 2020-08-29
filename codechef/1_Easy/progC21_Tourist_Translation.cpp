#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	string str="abcdefghijklmnopqrstuvwxyz";
	scanf("%d",&t);
	string byte_eng;
	cin>>byte_eng;
	
	while(t!=0)
	{
	    string byte;
	    char new_str[256];
	    cin>>byte;
	    
	    for(int i=0;i<byte.length();i++)
	    {
	       char c;
	       if(byte[i]=='_')
	       new_str[i]=' ';
	       else if((byte[i]>='a' && byte[i]<='z') || (byte[i]>='A' && byte[i]<='Z') )
	       {
	                if(isupper(byte[i]))
	                {
	                c=tolower(byte[i]);
	                new_str[i]=toupper(byte_eng[c-97]);
	                }
	                else if(islower(byte[i]))
	               {
	                 new_str[i]=byte_eng[byte[i]-97];
	               }
	       }
	       else new_str[i]=byte[i];
	    }
	    for(int i=0;i<byte.length();i++)
	    {
	        cout<<new_str[i];
	    }
	    
	    
	    printf("\n");
	    
	    t--;
	}
	return 0;
}


// Input:
// 5 qwertyuiopasdfghjklzxcvbnm
// Ph
// Pcssi
// Bpke_kdc_epclc_jcijsc_mihyo?
// Epcf_kdc_liswhyo_EIED_hy_Vimcvpcn_Zkdvp_siyo_viyecle.
// Ipp!

// Output:
// Hi
// Hello
// What are these people doing?
// They are solving TOTR in Codechef March long contest.
// Ohh!