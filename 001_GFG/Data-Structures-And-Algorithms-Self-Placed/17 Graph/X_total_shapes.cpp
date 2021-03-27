
// Given N * M string array of O's and X's.
// The task is to find the number of 'X' total shapes. 
// 'X' shape consists of one or more adjacent X's (diagonals not included).


#include <bits/stdc++.h>
using namespace std;

int n,m;
int visited[51][51];
char str[51][51]; 

bool isSafe(int r, int c)
{
    return ( r<=n && r>0 && c>0 && c<=m && !visited[r][c] && str[r][c]=='X');
}
void dfs(int r, int c)
{
    int row[4]={0,-1,0,1};
    int col[4]={-1,0,1,0};

    visited[r][c]=1;

    for(int i=0;i<4;i++)
    {
        if(isSafe(r+row[i],c+col[i]))
        {
            dfs(r+row[i],c+col[i]);
        }
    } 
}
int main() {
	//code

    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;

        for(int i=1;i<=n;i++)
        {
            string temp;
            cin>>temp;

            for(int j=1;j<=temp.size();j++)
            str[i][j]=temp[j-1],visited[i][j]=0;
        }
        

        int c=0;

        for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        if(!visited[i][j] && str[i][j]=='X')
        dfs(i,j),c++;

        cout<<c<<"\n";
        
    }
	return 0;
}


// Execution Time:0.01