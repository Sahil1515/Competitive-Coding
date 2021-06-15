

//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;

vector<int> largestAndSecondLargest(int, int[]);


 // } Driver Code Ends


     

/* Function to find largest and second largest element
*sizeOfArray : number of elements in the array
* arr = input array
*/
vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
    
    int max1 = -1, max2= -1;
    
    vector<int> vec;
    
    for(int i=0;i<sizeOfArray;i++)
    {
        if(arr[i]!=max1)
        if(arr[i] >max1)
        {
            max2=max1;
            max1=arr[i];
        }
        
        else if(arr[i]>max2)
        max2=arr[i];
    }
    
    vec.push_back(max1);
    vec.push_back(max2);
    
    return vec;
     
}

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    vector<int> ans = largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends


// Execution Time:0.10
//  2 marks