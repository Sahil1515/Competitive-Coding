
class Solution {
public:

    void deleteMidMy(stack<int>&s, int sizeOfStack,int mid)
    {
        // code here 
        int ele;
        
        if(sizeOfStack==mid+1)
        {
            s.pop();
            return;
        }
        ele=s.top();
        s.pop();
        
        deleteMidMy(s,sizeOfStack-1,mid);
         
        s.push(ele);
        
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here 
        deleteMidMy(s,sizeOfStack,ceil(sizeOfStack/2.0)-1);
        
    }
};

// Done using recurssion. Though could be done iteratively also

// 2 marks 