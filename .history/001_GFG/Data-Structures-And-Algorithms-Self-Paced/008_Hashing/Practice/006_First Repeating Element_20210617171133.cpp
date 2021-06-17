
Given an array arr[] of size n, find the first repeating element. The element should occurs more than once and the index of its first occurrence should be the smallest.

 

Example 1:

Input:
n = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation: 
5 is appearing twice and 
its first appearence is at index 2 
which is less than 3 whose first 
occuring index is 3.



class Solution{
    public:
    //Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        //code here
        unordered_map<int, pair<int, int>> mp;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]].second++;// second in pair is frequency
            if(mp[arr[i]].second==1)
            mp[arr[i]].first=i+1;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]].second>1)
            {
                return mp[arr[i]].first;
            }
        }
        return -1;
    }
};


Correct Answer.Correct Answer
Execution Time:0.78