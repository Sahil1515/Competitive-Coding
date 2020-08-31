

//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;
vector<int> SortBinaryArray(vector<int> binArray);


 // } Driver Code Ends


//User function template for C++

// binArray is an array that consists only 0s and 1s
// return sorted binary array 

vector<int> SortBinaryArray(vector<int> binArray)
{
    // Your code goes here 
    
    int i=0,j=binArray.size()-1;
    
    while(i<j)
    {
        if(binArray[i]==1)
        {
            if(binArray[j]==0)
            {
                swap(binArray[i],binArray[j]);
                i++;j--;
            }
            else j--;
        }
        else i++;
    }
    return binArray;
}


// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> binArray(n);
	    
	    for(int i = 0; i  < n; i++)
	      cin>>binArray[i];
	      
	  	vector<int> result = SortBinaryArray(binArray);
	  	for(int i=0; i<n; i++)
	  	    cout<<result[i]<<" ";
	      
	    cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends

// Input:
// N = 5
// A[] = {1,0,1,1,0}
// Output: 0 0 1 1 1