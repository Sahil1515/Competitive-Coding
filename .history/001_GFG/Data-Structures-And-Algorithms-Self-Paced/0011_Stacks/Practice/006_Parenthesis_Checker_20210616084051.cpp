class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> stk;
        for(char ele:x)
        {
            if(ele=='{' || ele=='('|| ele=='[')
            {
                stk.push(ele);
            }
            else if(stk.empty()==false && ele=='}' && stk.top()=='{')
            stk.pop();
            else if(stk.empty()==false && ele==')' && stk.top()=='(')
            stk.pop();
            else if(stk.empty()==false && ele==']' && stk.top()=='[')
            stk.pop();
            
            else return 0;
        }
        if(stk.empty()==false)
        return 0;
        
        return 1;
    }

};

Note: Before accessing anything check if it is there. Common sense

Correct Answer.Correct Answer
Execution Time:0.05