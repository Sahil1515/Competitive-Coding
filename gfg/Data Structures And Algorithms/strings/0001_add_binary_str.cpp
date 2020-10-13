#include<bits/stdc++.h>
using namespace std;


string add_strings(string str1,string str2)
{

  int i=str1.length()-1;
  int j=str2.length()-1;

  string result="";

  int s=0;

  while(i>=0 || j>=0 ||s==1)
  {
    s=s+ ((i>=0) ? str1[i]-'0':0);
    s=s+ ((j>=0) ? str2[j]-'0':0);

    result= char(s%2 +'0')+result;

    s=s/2;

    i--;
    j--;
  }

  return result;

}
int main()
{
    string str1,str2;

    cin>>str1>>str2;

    cout<<add_strings(str1,str2)<<"\n";

    return 0;
}