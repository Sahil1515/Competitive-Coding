Hashing is very useful to keep track of the frequency of the elements in a list.

You are given an array of integers. You need to print the non-repeated elements as they appear in the array.

Example 1:

Input:
n = 10
arr[] = {1,1,2,2,3,3,4,5,6,7}
Output: 4 5 6 7
Explanation: 4, 5, 6 and 7 are the only 
elements which is having only 1 
frequency and hence, Non-repeating.



class Solution{
  public:
    // arr[]: input array
    // n: size of array
    //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        vector<int> vec;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]==1)
            vec.push_back(arr[i]);
        }
        
        return vec;
    }
};

Correct Answer.Correct Answer
Execution Time:0.51