

#include<iostream>
#include<stack>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}// } Driver Code Ends

#include<bits/stdc++.h>
int mi=INT_MAX;
/*Complete the function(s) below*/
void push(int a)
{
     //add code here.
     if(s.empty())
     mi=min(INT_MAX,a);
     else mi=min(a,mi);

     s.push(a);
}

bool isFull(int n)
{
     //add code here.
     return s.size()==n;
}

bool isEmpty()
{
    //add code here.
    return s.empty();
}

int pop()
{
    //add code here.
    if(s.empty()==false)
    {
        int temp=s.top();
        s.pop();
        return temp;
    }
    return -1;
}

int getMin()
{
   //add code here.
       
   if(s.empty()==false)
    {
        return mi;
    }
    return -1;
}

// Execution Time:0.01

// 2 Marks

// Input:
// Stack: 18 19 29 15 16
// Output: 15
