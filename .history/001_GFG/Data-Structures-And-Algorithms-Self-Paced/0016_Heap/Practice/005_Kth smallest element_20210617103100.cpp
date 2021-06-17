
Given an array arr[] of N positive integers and a number K. The task is to find the kth smallest element in the array.

 

Example 1:

Input: 
N = 5, K = 3
arr[] = {3,5,4,2,9}

Output: 
4

Explanation: 
Third smallest element in the array is 4.




class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        // Your code here
        priority_queue<int> heap;
        
        for(int i=0;i<n;i++)
        {
            heap.push(arr[i]);
            if(heap.size()>k)
            heap.pop();
        }
        return heap.top();
    }
};





Correct Answer.Correct Answer
Execution Time:0.48