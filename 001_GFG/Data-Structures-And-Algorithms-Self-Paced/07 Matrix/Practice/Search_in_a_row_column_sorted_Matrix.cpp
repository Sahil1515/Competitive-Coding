
bool search(vector<vector<int> > matrix, int n, int m, int x) 
{
    // code here 
    int i=0,j=m-1;
    
    while(i<n && j>=0)
    {
        if(matrix[i][j]==x)
        return true;
        
        if(matrix[i][j]>x)
        j--;
        else if(matrix[i][j]<x)
        i++;
    }
    
    return false;
}