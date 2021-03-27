// Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

// Example 1:

// Input:
// N = 4
// a[] = {0,3,1,2}
// Output: -1
// Explanation: N=4 and all elements from 0
// to (N-1 = 3) are present in the given
// array. Therefore output is -1.
// Example 2:

// Input:
// N = 5
// a[] = {2,3,1,2,3}
// Output: 2 3 
// Explanation: 2 and 3 occur more than once
// in the given array.



// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(n).


vector<int> duplicates(int arr[], int n) {
    // code here
    
    int set_arr[100001]={0};
    
    vector<int> vec;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        set_arr[arr[i]]++;
    }
    
    for(int i=0;i<100001;i++)
    {
        if(set_arr[i]>1)
        vec.push_back(i);
    }
    if(vec.size()==0)
    {
        vec.push_back(-1);
        return vec;
    }
    return vec;
    
}


// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(1).


vector<int> duplicates(int arr[], int n) {
    // code here
    
    int set_arr[100001]={0};
    
    vector<int> vec;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int index=arr[i]%n; //If the element is more than n
        arr[index]+=n;
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]/n>=2)
        vec.push_back(i);
    }
    if(vec.size()==0)
    {
        vec.push_back(-1);
        return vec;
    }
    return vec;
    
}

// 2 Marks