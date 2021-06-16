
You are given string str. You need to remove the consecutive duplicates from the given string using a Stack.
 

Example 1:

Input: 
aaaaaabaabccccccc

Output: 
ababc



class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {

        stack<char> stk;
        for(char ele:s)
        {
            stk.push(ele);
        }
        
        string str="";
        char temp=NULL;
        
        while(stk.empty()==false)
        {
            // cout<<"Hello";
            if(temp==stk.top())
            stk.pop();
            else {
                temp=stk.top();
                str=str+temp;
                stk.pop();
            }
        }
        reverse(str.begin(),str.end());
        return str;
    }
};


Correct Answer.Correct Answer
Execution Time:0.30