#include<bits/stdc++.h>
using namespace std;

void transpose(vector <int> vec[],int n)
{
     for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            swap(vec[i][j],vec[j][i]);
        }
    }
}

void reverseColumns(vector<int> vec[], int n) 
{ 
    for (int i = 0; i < n; i++) 
    {
        int  k = n-1;
        for (int j = 0;j <k; j++)
        {
            swap( vec[j][i], vec[k][i]); 
            k--;
        } 
          
    }
} 

void print_mat(vector <int> vec[],int n)
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

int main()
{
    int n;
    scanf("%d",&n);
   vector< int > vec[1000];
   int ele;

    for(int i=0 ;i<n;i++)
    for(int j=0;j<n;j++)
    {
        scanf("%d",&ele);
        vec[i].push_back(ele);
    }

    transpose(vec,n);
    reverseColumns(vec,n);
    print_mat(vec,n);
    
    return 0;

}


    // 1 2 3
    // 4 5 6
    // 7 8 9 

// Transpose

    // 1 4 7
    // 2 5 8
    // 3 6 9

// Reverse columns

    // 3 6 9
    // 2 5 8
    // 1 4 7