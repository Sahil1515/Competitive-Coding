class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int N)
    {
        //Your code here
        double r= (double)B/A;
        
        return (A* pow(r,N-1));
    }
};
