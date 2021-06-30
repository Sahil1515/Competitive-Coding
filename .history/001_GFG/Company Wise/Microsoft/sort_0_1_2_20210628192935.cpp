 void sort012(int arr[], int n)
    {
        // coode here 
        
        int k=0,j=n-1,i=0;
        
        while(i<=j)
        {   
            if(arr[i]==0)
            {
                swap(arr[i++],arr[k++]);
            }
            else if(arr[i]==2)
            {
                swap(arr[i],arr[j--]);
            }
            else
                i++;
                
        }
    }
    