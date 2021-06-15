class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        
        for(int i=0;i<sizeOfArray;i++)
        {
            if(max<arr[i])
            {
                max2=max;
                max=arr[i];
            }
            if(max2<arr[i] && arr[i]!=max)
                max2=arr[i];
        }
        
        vector<int> vec;
        vec.push_back(max);
        
        if(max2==INT_MIN)
        vec.push_back(-1);
        else
        vec.push_back(max2);
         
         return vec;
    }
};
