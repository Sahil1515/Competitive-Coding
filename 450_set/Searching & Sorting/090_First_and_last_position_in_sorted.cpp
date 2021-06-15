
int bin1(int arr[], int n, int x)
{
    int left=0;
    int right=n-1;
    
    while(left<=right)
    {
        int mid=(left+right)/2;
        
        if(arr[mid]==x && mid==0)
        return mid;
        
        if(arr[mid]==x && mid-1>=0 && arr[mid-1]!=x)
        return mid;
        
        if (arr[mid]>=x)
        right=mid-1;

        else left=mid+1;
    }
    
    return -1;
}

int bin2(int arr[], int n, int x)
{
    int left=0;
    int right=n-1;
    
    while(left<=right)
    {
        int mid=(left+right)/2;
        
        if(arr[mid]==x && mid==n-1)
        return mid;
        
        if(arr[mid]==x && arr[mid+1]!=x)
        return mid;
        
        // cout<<"Hi";
        
        if (arr[mid]==x)
        left=mid+1;
        else if(arr[mid]>x)
        right=mid-1;
        else left=mid+1;
    }
    return -1;
}

vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int>vec;
    
    vec.push_back(bin1(arr,n,x));
    vec.push_back(bin2(arr,n,x));
    
    return vec;
    
    
}
