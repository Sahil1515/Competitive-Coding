long long findNthFibonacci(int number)
{
    // Your Code Here
    long long int fibo[1000];
    
    fibo[0]=1;
    fibo[1]=1;
    
    for(int i=2;i<=number;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    
    return fibo[number-1];
    
    
}