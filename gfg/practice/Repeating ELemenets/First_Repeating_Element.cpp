// Given an array arr[] of size N, find the first repeating element. The element should occurs more than once and the index of its first occurrence should be the smallest.

 

// Example 1:

// Input:
// N = 7
// arr[] = {1, 5, 3, 4, 3, 5, 6}
// Output: 2
// Explanation: 
// 5 is appearing twice and 
// its first appearence is at index 2 
// which is less than 3 whose first 
// occuring index is 3.

// Example 2:

// Input:
// N = 4
// arr[] = {1, 2, 3, 4}
// Output: -1
// Explanation: 
// All elements appear only once so 
// answer is -1.


// Expected Time Complexity: O(NlogN)
// Expected Auxilliary Space: O(N)

 

// Constraints:
// 1 <= N <= 106
// 0 <= Ai<= 106



int firstRepeated(int arr[], int n) {
    //code here
    int arr_set[100001]={0};
    
    for(int i=0;i<n;i++)
    {
        arr_set[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(arr_set[arr[i]]>1)
        {
            return i+1;
        }
    }
    return -1;
}


// 2 Marks