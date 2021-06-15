

//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

int median(int arr[],int N)
{
    
    sort(arr,arr+N);
    
    
    
    int ele;
    
    if(N%2==1)
    ele=arr[N/2];
    
    else ele = floor((arr[N/2]+arr[(N/2)-1])/2);
    
    
    return ele;
    
    
    //your code here
    //If median is in fraction then convert it to integer and return
}

int mean(int arr[],int N)
{
    //your code here
    
    return accumulate(arr,arr+N,0)/N;
}


// { Driver Code Starts.

int main()
{
    //testcase
    int T;
    cin>>T;
   
    //looping testcase
    while(T--)
    {
        //number of elements in array
        int N;
        cin>>N;
        int a[N];
        
        //inseting elements in the array
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        //calling mean() and median() functions
        cout<<mean(a,N)<<" "<<median(a,N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends


// Execution Time:0.72

// 2 marks