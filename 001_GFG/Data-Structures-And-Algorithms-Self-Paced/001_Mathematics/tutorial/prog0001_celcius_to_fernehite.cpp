//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++


//You need to complete this function
double cToF(int C)
{
    //Your code here
    int F= (C*(float(9)/float(5)))+32;
    return F;
}

// { Driver Code Starts.







int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        cout << floor(cToF(C)) << endl; //print the output
    }
    return 0;
}  // } Driver Code Ends