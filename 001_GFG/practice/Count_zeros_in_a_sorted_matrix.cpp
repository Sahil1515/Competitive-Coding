
/*you are required to complete this method*/
int lastOccuranceZero(int arr[],int N)
{
    int e=N-1,f=0;
    
    while(f<=e)
    {
        int mid=(e+f)/2;
        if(arr[mid]==1)
            e=mid-1;
        else if(arr[mid]==0)
        {
            if(mid==N-1|| arr[mid]!=arr[mid+1])
                return mid;
            else f=mid+1;
        }
    }
    return -1;
}
int countZeros(int A[MAX][MAX],int N)
{
//Your code here
    int sum=0;

    for(int i=0;i<N;i++)
    {
        int last=lastOccuranceZero(A[i],N);
        if(last==-1)
            sum=sum+0;
        else sum=sum+last+1;
    }
    
}

// 1 Mark