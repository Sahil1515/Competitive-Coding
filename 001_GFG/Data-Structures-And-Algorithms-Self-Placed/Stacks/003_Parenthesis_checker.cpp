
// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
    // Your code here
    
    int i=0;
    int n=x.size();
    stack<char> stk;
    
    
    while(i<n)
    {
        if(x[i]=='{' || x[i]=='(' ||x[i]=='[')
        {
            stk.push(x[i]);
        }
        else if(!stk.empty() && x[i]=='}')
        {
            if(stk.top()=='{')
                stk.pop();
            else
                return false;
        }
         else if(!stk.empty() && x[i]==')')
        {
            if(stk.top()=='(')
                stk.pop();
            else
                return false;
        }  
        else if(!stk.empty() && x[i]==']')
        {
            if (stk.top()=='[')
                stk.pop();
            else
                return false;
        }
        else return false;
        i++;
    }
    
    if(stk.empty())
    return true;
    
    
    return false;
}


// 4 marks