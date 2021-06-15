string removePair(string str){
    // Your code here
    int i=str.size()-1;
    
    stack<char> stk; 
    stk.push(str[i--]);
    
    while(i>=0)
    {
        if(stk.empty()  || str[i]!=stk.top())
            stk.push(str[i]);
        else 
            stk.pop();
        
        i--;
    }
    
    string s="";
    
    if(stk.empty())
        s="Empty String";
    else
    while(!stk.empty())
        {
            s=s+stk.top();
            stk.pop();
        }
    
    return s;
}



// 2 marks