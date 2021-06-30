void frequencycount(vector<int>& arr,int n)
{ 
    // code here
    for(int i=0;i<n;i++)
    {
        int index=arr[i]-1;
        if(arr[i]>0)
        {
            if(arr[index]>0)
            {
                arr[i]=arr[index];
                arr[index]=-1;
                i--;
            }
            else
            {
                arr[index]--;
                arr[i]=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=abs(arr[i]);
    }
}
