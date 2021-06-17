
Given an array arr[] of N integers in which elements may be repeating several times. Also, a positive number K is given and the task is to find sum of total frequencies of K most occurring elements

Note: The value of K is guaranteed to be less than or equal to the number of distinct elements in arr.

Example 1:

Input:
N = 8
arr[] = {3,1,4,4,5,2,6,1}
K = 2
Output: 4
Explanation: Since, 4 and 1 are 2 most
occurring elements in the array with
their frequencies as 2, 2. So total
frequency is 2 + 2 = 4.




class Solution
{
    public:
    //Function to return the sum of frequencies of k numbers
    //with most occurrences in an array.
    int kMostFrequent(int arr[], int n, int k) 
    { 
    	// Your code here
    	unordered_map<int,int> mp;
    	priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> heap;
    	
    	for(int i=0;i<n;i++)
    	mp[arr[i]]++;
    	
    	for(auto ele: mp)
    	{
    	    heap.push({ele.second,ele.first});
    	    if(heap.size()>k)
    	    heap.pop();
    	}
    	int count=0;
        while(heap.size()>0)
        {
            count+=heap.top().first;
            heap.pop();
        }
        
        return count;
    } 
};



Correct Answer.Correct Answer
Execution Time:1.92


Expected Time Complexity : O(N log N)
Expected Auxilliary Space: O(N)

Used Time Complexity : O(N logK)
Expected Auxilliary Space: O(N)

