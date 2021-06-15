class Solution{
    public:
        int multiplicationUnderModulo(long long a,long long b)
    {
        //your code here
        return ( (a%1000000007)*(b%1000000007) )%1000000007;
    }
};