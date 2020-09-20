
// You are given N elements and your task is to Implement a Stack in which you can get minimum element in O(1) time.


#include<bits/stdc++.h>
using namespace std;

class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){

       int qt;
       cin>>qt;

       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }

}


// } Driver Code Ends


/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/

int _stack :: getMin()
{
   //Your code here
   if(!s.empty())
   {
       int temp=s.top();
       int num=temp%1000;
       return num;
   }
   return -1;
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if(!s.empty())
   {
       int temp=s.top();
       s.pop();
       temp=temp/1000;
       return temp;
   }
   return -1;
}

/*push element x into the stack*/
void _stack::push(int x)
{
   int min_ele;
   
   if(s.empty())
   min_ele=min(x,INT_MAX);
   else min_ele=min(x,s.top()%1000);
   
   int ele=x*1000+min_ele;
   s.push(ele);
   
}

// Execution Time:0.01

// 4 Marks