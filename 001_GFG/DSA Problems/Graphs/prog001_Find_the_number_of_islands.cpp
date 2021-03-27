
// Given a Matrix consisting of 0s and 1s. Find the number of islands of connected 1s present in the matrix. 
// Note: A 1 is said to be connected if it has another 1 around it (either of the 8 directions).


// Example(To be used only for expected output) :
// Input
// 2
// 3 3
// 1 1 0 0 0 1 1 0 1
// 4 4
// 1 1 0 0 0 0 1 0 0 0 0 1 0 1 0 0

// Output
// 2
// 2

#include <bits/stdc++.h>
using namespace std;

int findIslands(vector<int> A[], int N, int M);

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++) {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
}// } Driver Code Ends


/*you are required to complete this method*/

/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/

bool isSafe(bool visited[][102],vector<int> A[],int i,int j,int N,int M)
{
    return (i<N && i>=0 && j<M && j>=0 && !visited[i][j] && A[i][j]);
}


void DFS(bool visited[][102], vector<int> A[], int i,int j,int N,int M)
{
        int row[8]={-1,-1,-1,0,1,1,1,0};
        int coln[8]={-1,0,1,1,1,0,-1,-1};
        
        visited[i][j]=true;
        
        for(int k=0;k<8;k++)
        {
            if(isSafe(visited,A,i+row[k],j+coln[k],N,M))
            DFS(visited,A,i+row[k],j+coln[k],N,M);
        }
}

int findIslands(vector<int> A[], int N, int M) {

    // Your code here
    
    int count=0;
    
    bool visited[N][102];
    
    for(int i=0;i<N;i++)
    for(int j=0;j<M;j++)
    visited[i][j]=false;
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(!visited[i][j] && A[i][j])
            {
                DFS(visited,A,i,j,N,M);
                count++;
            }
        }
    }
    
    return count;
}



// Execution Time:0.39
// 4 marks