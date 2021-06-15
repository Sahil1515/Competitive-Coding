class Solution
{
    public:
    
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int a=1;
        int pos=1;
    
        while(a<=(max(n,m)))
        {
            if( (( (a&n) !=0) && ( (a&m)==0)) || (((a&n)==0) && ((a&m)!=0)) )
            {
                return pos;
            }
            a=a<<1;
            pos++;
        }
        return -1;
    }
};


// Efficient

class Solution
{
    public:
    
    int RightSetBit(int n)
    {
        int a=1;
        int pos=1;
        
        while(a<=n)
        {
            if( (a&n)!=0)
            {
                return pos;
            }
            a=a<<1;
            pos++;
        }
        return -1;
    }
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        if( (m^n) ==0)
            return -1;
        
        return RightSetBit(m^n);
    }
};