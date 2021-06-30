
class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        
        vector<int> vec;
        //MinHeap because the largest eles are required at the end
        priority_queue<int,vector<int>, greater<int>> minH;
        
        for(int i=0;i<n;i++)
        {
            minH.push(arr[i]);
            if(minH.size()>k)
            minH.pop();
        }
        
        while(minH.size()>0)
        {
            vec.push_back(minH.top());
            minH.pop();
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};




Correct Answer.Correct Answer
Execution Time:0.82