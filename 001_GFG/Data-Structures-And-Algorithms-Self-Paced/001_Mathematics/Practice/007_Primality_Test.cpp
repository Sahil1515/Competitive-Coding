
class Solution{
    public:
    bool isPrime(int N)
    {
       if(N==1)
       return false;
       
       if(N==2 || N==3)
       return true;
       
       if(N%2==0 || N%3==0)
       return false;
       
       for(int i=5;i<N;i=i+6)
       {
           if(i+2 != N)
           if(N%i==0 ||N%(i+2)==0)
           return false;
       }
       
       return true;
    }

};
