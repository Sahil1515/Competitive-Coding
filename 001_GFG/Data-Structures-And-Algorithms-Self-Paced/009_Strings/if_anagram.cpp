

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if two strings are anagram
*   c, d: input string
*/
bool isAnagram(string c, string d){
    
    // Your code here
    int arr[256];
    for(int i=0;i<256;i++)
    arr[i]=0;
    
    for(int i=0;i<c.length();i++)
    arr[c[i]]++;
    for(int i=0;i<d.length();i++)
    arr[d[i]]++;
    
    for(int i=0;i<256;i++)
    if(arr[i]%2==1)
    return false;
    
    return true;
    
}


// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;

        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends


//   2 marks

// Execution Time:0.05
