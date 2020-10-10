


#include <bits/stdc++.h>
using namespace std;


void print_subsets(string in, string out, set<string> &s,vector<string> &arr)
{
    if(in.length()==0)
    {
        // if(out.length()!=0)
        // out.erase(out.begin()+out.length()-1);
        // if(s.find(out)==s.end())
        s.insert(out),arr.push_back(out);
        return;
    }
    
    char temp=in.front();
    in.erase(in.begin()+0);

    out.push_back(temp);
    // out.push_back(' ');
    
    print_subsets(in,out,s,arr);
    
	out.pop_back();
	out.pop_back();

    print_subsets(in,out,s,arr);
    
}

int main() {
	//code
	
	int t, n;
	scanf("%d",&t);
	
	while(t--)
	{
	    scanf("%d",&n);
	    
	    string str="";
	    
	    for(int i=0;i<n;i++)
	    {
	        int ele;
	        scanf("%d",&ele);
	        str=str+to_string(ele);
	    }
	    
	    set<string> s;
		vector<string> vec;

	    print_subsets(str,"",s,vec);
	    
	    for(auto it=vec.begin();it!=vec.end();it++)
	    {
	        cout<<*it;
	    }
	    printf("\n");
	    
	}
	return 0;
}