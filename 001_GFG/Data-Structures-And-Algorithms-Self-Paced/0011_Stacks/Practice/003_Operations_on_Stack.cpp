


Given a stack of integers and Q queries. The task is to perform the operation on stack according to the query.

The queries can be of 4 types:

i x: (adds element x in the stack).

r: (removes the topmost element from the stack).

h: Prints the topmost element.

f y: (check if the element y is present or not in the stack). Print "Yes" if present, else "No".
 

Example 1:

Input: 
Q = 6 
Queries = {(i, 2), (i, 4), (i, 3),
(i, 5), (h), (f, 8)}
Output: 
5
No
Explanation: 
Inserting 2, 4, 3, and 5 
onto the stack. Returning top element 
which is 5. Finding 8 will give No, 
as 8 is not in the stack.






// Code


//Function to push an element into the stack.
void insert(stack<int> &s,int x)
{
    //Your code here
    s.push(x);
    
}

//Function to remove top element from stack.
void remove(stack<int> &s)
{
    
    //Your code here
    if(s.empty()==false)
    s.pop();
         
}

//Function to print the top element of stack.
void headOf_Stack(stack<int> &s)
{
    int x=s.top();
    cout<<x<<" "<<endl; 
}

//Function to search an element in the stack.
bool find(stack<int> s, int val)
{
    bool exists=false;
    
    //Your code here
    while(s.empty()==false)
    {
        if(s.top()==val)
        {
            exists=true;
            break;
        }
        else s.pop();
    }
    
    if(exists==true){
        return true;
    }
    else{
        return false;
    }
}








Correct Answer.Correct Answer
Execution Time:0.01