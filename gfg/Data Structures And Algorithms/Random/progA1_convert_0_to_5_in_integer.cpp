#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends
/*you are required to complete this method*/
int reverse(int n)
{
    int temp=0;
    int num=0;
    while(n>0)
    {
        temp=n%10;
        n=n/10;
        if(temp==0)
        temp=5;
        num*=10;
        num=num+temp;
    }
    return num;
}
int convertFive(int n) {
    
    int num=reverse(n);
    num=reverse(num);
    return num;
}


// Input:
// N = 1004
// Output: 1554