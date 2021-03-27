#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
    #ifndef ONLINE_JUDGE
    freopen("xinput.txt", "r", stdin);
    freopen("xoutput.txt", "w", stdout);
#endif
	int t;
	scanf("%d",&t);
	string str1,str2,str3;
	    
	cin.ignore();
	while(t--)
	{
	   
	   getline(cin,str1);
	   cin.ignore(0);
	   
	   getline(cin,str2);
       cin.ignore(0);
	 
	   getline(cin,str3);
       cin.ignore(0);
	   
	//    cout<<str1<<"\n";
	//    while(str1.find(str2)!=string::npos)
	//    {
	//       int pos=str1.find(str2);
	//       str1.erase(pos,pos+str2.size());
	//       str1.insert(pos,str3);
	//    }
	   cout<<str1<<"\n";
	    
	}
	return 0;
}

// 2
// xxforxx xx for xx
// xx
// geeks
// india is the xx country
// xx
// best