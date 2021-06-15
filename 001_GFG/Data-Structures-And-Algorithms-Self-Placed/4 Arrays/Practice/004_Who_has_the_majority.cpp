// Given an array arr[] of size N and two elements x and y, use counter variables to find which element appears most in the array, x or y. If both elements have the same frequency, then return the smaller element.
// Note:  We need to return the element, not its count.

 class Solution{
  public:

    int majorityWins(int arr[], int n, int x, int y) {
        
    int count1=0;
    int count2=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count1++;        
        }
        else if(arr[i]==y)
        {
            count2++;
        }
    }
    
    if(count1>count2)
    return x;
    
    if(count1==count2)
    return min(x,y);
    
    return y;
    }

};