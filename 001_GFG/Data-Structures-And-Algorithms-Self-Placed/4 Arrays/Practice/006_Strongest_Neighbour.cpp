
// Given an array arr[] of n positive integers. The task is to find the maximum for every adjacent pairs in the array.

// Example 1:

// Input:
// n = 6
// arr[] = {1,2,2,3,4,5}
// Output: 2 2 3 4 5



void maximumAdjacent(int sizeOfArray, int arr[]){
    
   for(int i=0;i<sizeOfArray-1;i++)
   {
       cout<<max(arr[i],arr[i+1])<<" ";
   }
}