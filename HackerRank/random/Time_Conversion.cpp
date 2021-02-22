#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
  
  string str="",temp1="",temp2="";

  temp1=temp1+s.substr(0,2);
  temp2=temp2+s.substr(s.size()-2,2);

  str+=s.substr(2,s.size()-4);

  if(temp1=="12" && temp2=="AM")
  str="00"+str;
  else if(temp2=="PM" && temp1!="12")
  str=to_string(stoi(temp1)+12)+str;
  else 
  str=temp1+str;
  

  cout<<str;
  
  
  return str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
