
// C++ program to count 2s from 0 to n
#include <bits/stdc++.h>
using namespace std;

/* Counts the number of 2s in a number at d-th
   digit */
long long int count2sinRangeAtDigit(long long int number, long long int d);
/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int number);

// Driver Coden
int main()
{
    long long int n;
    long long int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout << numberOf2sinRange(n) << endl;
    }
    return 0;
}
// } Driver Code Ends


/* Counts the number of 2s in a number at d-th
   digit */
/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int number)
{
// Your code goes here
    string str="";
    long long int count1=0;
    
    for(long long int i=1;i<=number;i++)
    {
        str=to_string(i);
        count1=count1+count(str.begin(),str.end(),'2');
    }
    
    return count1;
}

// Execution Time:0.52