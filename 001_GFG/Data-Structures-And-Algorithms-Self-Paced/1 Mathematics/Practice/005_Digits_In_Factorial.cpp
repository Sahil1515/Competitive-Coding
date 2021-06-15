class Solution{
    public:
    int digitsInFactorial(int N)
    {
        // code here
        double count=0;
        for(int i=1;i<=N;i++)
        {
            count=count+log10(i);
        }
        return floor(count)+1;
    }
};