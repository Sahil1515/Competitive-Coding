class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        // code here
        return (a%1000000007 + b%1000000007)%1000000007;
    }
};