#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'decryptPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string decryptPassword(string s) {

    string str="";
    int count=0;

         for(int i=s.length()-1;i>=0;i--)
         {
             if(s[i]=='0')
             {
                 s[i]=s[count++];
                 s[count-1]='-';
             }
             if(s[i]=='*')
             {
                 swap(s[i-1],s[i-2]);
                 i=i-2;
             }
         }
   
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='-' && s[i]!='*')
            str=str+s[i];
        }
        str=str;
   
    return str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = decryptPassword(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
