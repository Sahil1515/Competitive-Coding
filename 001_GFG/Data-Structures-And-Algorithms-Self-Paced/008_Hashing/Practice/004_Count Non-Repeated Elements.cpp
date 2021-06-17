
Hashing is very useful to keep track of the frequency of the elements in a list.

You are given an array of integers. You need to print the count of non-repeated elements in the array.

Example 1:

Input:
10
1 1 2 2 3 3 4 5 6 7

Output: 
4




class Solution{
    public:
    //Complete this function
    //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int count=0;
        for(auto ele: mp)
        {
            if(ele.second==1)
            {
                count++;
            }
        }
        return count;
    }

};

Correct Answer.Correct Answer
Execution Time:2.22