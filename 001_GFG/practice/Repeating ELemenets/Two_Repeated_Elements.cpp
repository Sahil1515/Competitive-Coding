// You are given an array of N+2 integer elements. 
// All elements of the array are in range 1 to N. 
// Also, all elements occur once except two numbers 
// which occur twice. Find the two repeating numbers.

// Example 1:

// Input:
// N = 4
// array[] = {1,2,1,3,4,3}
// Output: 1 3
// Explanation: In the given array, 
// 1 and 3 are repeated two times.



pair<int,int> twoRepeated (int arr[], int N)
{
    // Your code here
    
    vector<int> vec;
    for(int i=0;i<=N+1;i++)
    {
        if(arr[abs(arr[i])]>=0)
        {
            arr[abs(arr[i])]=-arr[abs(arr[i])];
        }
        else {
            vec.push_back(abs(arr[i]));
        }
    }
    
    pair<int,int> p;
    
    p.first=vec[0];
    p.second=vec[1];
    
    return p;
}





// https://www.geeksforgeeks.org/find-duplicates-in-on-time-and-constant-extra-space/