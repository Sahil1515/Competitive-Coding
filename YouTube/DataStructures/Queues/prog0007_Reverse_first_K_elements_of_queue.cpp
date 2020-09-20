
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}// } Driver Code Ends


//User function Template for C++

queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    stack<ll> s;
    
    for(int i=0;i<k;i++)
    s.push(q.front()),q.pop();
    
   while(s.empty()==false)
   {
       q.push(s.top()),s.pop();
   }
   
   int size=q.size();
   for(int i=0;i<size-k;i++)
   q.push(q.front()),q.pop();
   
   return q;
}

// Execution Time:0.03

// 2 Marks

// 5 3
// 1 2 3 4 5

// Output: 
// 3 2 1 4 5

// Expected TIme Complexity : O(n)
// Expected Auxilliary Space : O(n)