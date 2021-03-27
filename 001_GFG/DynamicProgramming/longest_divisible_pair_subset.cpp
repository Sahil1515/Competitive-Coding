
// Largest divisible pairs subset
// Last Updated: 25-09-2020
// Given an array of n distinct elements, find length of the largest subset such that every pair in the subset is such that the larger element of the pair is divisible by smaller element. 
// Examples: 
 

// Input : arr[] = {10, 5, 3, 15, 20} 
// Output : 3 
// Explanation: The largest subset is 10, 5, 20.
// 10 is divisible by 5, and 20 is divisible by 10.

// Input : arr[] = {18, 1, 3, 6, 13, 17} 
// Output : 4
// Explanation: The largest subset is 18, 1, 3, 6,
// In the subsequence, 3 is divisible by 1, 
// 6 by 3 and 18 by 6.



#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    cin>>n;
    if(n<2)
    return 0;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    sort(arr,arr+n);

    int dp[n];

    dp[n-1]=0;
    

    int res=INT_MIN;
    for(int i=n-2;i>=0;i--)
    {
        int maxi=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]%arr[j]==0 || arr[j]%arr[i]==0)
            maxi=max(maxi,dp[j]);
        }
        dp[i]=maxi+1;
        res=max(res,dp[i]);
    }

    cout<<res+1<<" "; // because those are pairs and not the number of elements so add 1

    return 0;
}


// 5
// 10 5 3 15 20

// output : 3

// 6
// 18 1 3 6 13 17

// output : 4