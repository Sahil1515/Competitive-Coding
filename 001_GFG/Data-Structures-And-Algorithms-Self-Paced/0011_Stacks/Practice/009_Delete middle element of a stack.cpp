Given a stack with push(), pop(), empty() operations, delete the middle of the stack without using any additional data structure.
Middle: ceil(size_of_stack/2.0)
 

Example 1:

Input: 
Stack = {1, 2, 3, 4, 5}
Output:
ModifiedStack = {1, 2, 4, 5}
Explanation:
As the number of elements is 5 , 
hence the middle element will be the 3rd
element which is deleted




class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        stack<int> stk;
        int sz=0;
        if(sizeOfStack%2==0)
            sz=sizeOfStack/2;
        else 
            sz=(sizeOfStack/2)+1;
        
        while(s.size()>sz)
        {
            // cout<<s.size()<<" "<<sz<<" "<<s.top()<<"\n";
            stk.push(s.top());
            s.pop();
        }
        s.pop();
        while(stk.empty()==false)
        {
            s.push(stk.top());
            stk.pop();
        }
    }
};


Correct Answer.Correct Answer
Execution Time:0.01