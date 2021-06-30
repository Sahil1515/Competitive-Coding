You are given string str. You need to remove the pair of duplicates.
Note: The pair should be of adjacent elements and after removing a pair the remaining string is joined together. 

Example 1:

Input:
aaabbaaccd

Output: 
ad

Explanation: 
Remove (aa)abbaaccd =>abbaaccd
Remove a(bb)aaccd => aaaccd
Remove (aa)accd => accd
Remove a(cc)d => ad


class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        // Your code here
        
        stack<char> stk;
        for(char ele: str)
        {
            if(stk.empty())
            {
                stk.push(ele);
            }
            else if(ele==stk.top())
            {
                stk.pop();
            }
            else stk.push(ele);
        }
        string strResult="";
        while(stk.empty()==false)
        {
            strResult.push_back(stk.top());
            stk.pop();
        }
        
        reverse(strResult.begin(),strResult.end());
        return strResult;
    }
};


Correct Answer.Correct Answer
Execution Time:0.01