// Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

// Example 1:

// Input:
// S = i.like.this.program.very.much
// Output: much.very.program.this.like.i
// Explanation: After reversing the whole
// string(not individual words), the input
// string becomes
// much.very.program.this.like.i



#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s);
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        cout<<reverseWords(s)<<endl;
    }
}// } Driver Code Ends



string reverseWords(string str) 
{ 
    
    reverse(str.begin(),str.end());

    int len=str.length();

    int ind=0;

    for(int i=0;i<len;i++)
    {
        if(str[i]=='.' || str[i]=='\0')
        {
            reverse(str.begin()+ind,str.begin()+i);
            ind=i+1;
        }
    }
    reverse(str.begin()+ind,str.begin()+len);
    return str;
} 

// Execution Time:0.01
// 2 Marks