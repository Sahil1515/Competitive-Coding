
#include <bits/stdc++.h>
using namespace std;

struct Height {
	int feet;
	int inches;
};

int findMax(Height arr[], int n);

// driver program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, tmp1, tmp2;
	    cin>>n;
	    Height arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>tmp1>>tmp2;
	        arr[i]={tmp1, tmp2};
	    }
	    int res = findMax(arr, n);
	    cout<<res<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};
*/
// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n)
{
    // Code here
    int sum=0,temp;
    for(int i=0;i<n;i++)
    {
        temp=arr[i].feet*12+arr[i].inches;
        if(temp>sum)
        sum=temp;
    }
    return sum;
}
// Input:
// 2
// 2
// 1 2 2 1
// 4
// 3 5 7 9 5 6 5 5
// Output:
// 25
// 93