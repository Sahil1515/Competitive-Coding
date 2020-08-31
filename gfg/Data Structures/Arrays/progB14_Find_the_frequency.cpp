//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

/*Function to find frequency of x
* x : element whose frequency is to be found
* v : input vector
*/
int findFrequency(vector<int> v, int x){
    
    // Your code here
    return count(v.begin(),v.end(),x);
    
    // return count;
}

// { Driver Code Starts.

// Driver code
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector 
	    vector<int> v;
	        
	    // Taking vector element input
	    for(int i = 0;i<N;i++){
	        int k;
	        cin >> k;
	        v.push_back(k);
	    }
	    
	    // element whose frequency to be find
	    int x;
	    cin >> x;
	    
	    cout << findFrequency(v, x) << endl;
	}
	
	return 0;
}  // } Driver Code Ends

// Given a vector of N positive integers and an integer
//  X. The task is to find the frequency of X in vector.

// Input:
// 1
// 5
// 1 1 1 1 1
// 1
// Output:
// 5