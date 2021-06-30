class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        int a =1;
        int pos=1;
        while(a<=n){
             if( (n&a) !=0)
                 return pos;
                 
             a=a<<1;
             pos++;
        }
        
        return 0;
    }
};




// unsigned int getFirstSetBit(int n){
    
//     // Your code here
//     bitset<32> s(n);
//     return (s._Find_first()+1);
// }
