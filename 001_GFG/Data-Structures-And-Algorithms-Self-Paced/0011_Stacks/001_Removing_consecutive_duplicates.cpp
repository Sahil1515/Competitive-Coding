
string removeConsecutiveDuplicates(string s)
{
    // Your code here
    
    stack<char> stk;
    
    char ch=s[0];
    stk.push(ch);
    for(int i=1;i<s.size();i++)
    {
        if(ch!=s[i])
            stk.push(s[i]),ch=s[i];
    }
    string str;
    
    while(!stk.empty())
    {
        str.push_back(stk.top());
        stk.pop();
    }
    
    reverse(str.begin(),str.end());
    
    return str;
}


// 2 marks