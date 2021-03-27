#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
    {
        int n,m,k;
        cin>>n>>k>>m;
        
        int sum=0;
        
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        for(int i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        
        priority_queue<int> q;
        
        for(int i=k;i<=n;i++)
        {
            q.push(sum);
            sum=(sum+arr[i]-arr[i-k]);
        }
        
        while(m--)
        {
            cout<<q.top()<<" ";
            q.pop();
        }
        cout<<"\n";
    }
	return 0;
}