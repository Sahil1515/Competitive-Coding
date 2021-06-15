#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
	//code
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        int k;
        cin>>k;
        
        
        deque<int> di;
	    for(int i=0;i<k;i++)
    	{
	        if(arr[i]<0)
	        di.push_back(i);
    	}
    	
    	for(int i=k;i<n;i++)
    	{
    	    if(di.empty()==false)
    	    cout<<arr[di.front()];
    	    else cout<<"0";
    	    
    	    cout<<" ";
    	    
    	    if(di.empty()==false && di.front()<(i-k+1))
    	    di.pop_front();
    	    
    	    if(arr[i]<0)
    	    di.push_back(i);
    	}
    	if(di.empty()==false)
    	    cout<<arr[di.front()];
    	else cout<<"0";
    	cout<<"\n";
    	
    }
	
	return 0;
}