#include<bits/stdc++.h>
using namespace std;

void transpose(vector<int> vec[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            swap(vec[i][j],vec[j][i]);
        }
    }
}

void print_mat(vector<int> vec[], int n)
{
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",vec[i][j]);
        }
        printf("\n");
    }
}

void reverse_row_wise(vector<int> vec[], int n)
{
    for(int i=0;i<n;i++)
    {
        int k=n-1;
        for(int j=0;j<k;j++)
        {
            swap(vec[i][j],vec[i][k]);
            k--;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int ele;

    vector<int> vec[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&ele),vec[i].push_back(ele);;
       
    }

    transpose(vec,n);
    reverse_row_wise(vec,n);
    print_mat(vec,n);
    
    return 0;
}