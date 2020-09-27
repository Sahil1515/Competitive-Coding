#include<bits/stdc++.h>
using namespace std;

bool dfs(int n, int visited[],vector<int> vec[],int col[],int colour)
{
    visited[n]=1;
    col[n]=colour;

    for(int ele : vec[n])
    {
        if(!visited[ele])
        {
            if(dfs(ele,visited,vec,col,colour^1))
            return false;
        }
        else if(col[ele]==col[n])
        return false;
    }
    return true;
}
int main()
{
    int t,count=0;
    scanf("%d",&t);
    while(t!=0)
    {
        count++;
        int n,e,u,v;
        scanf("%d%d",&n,&e);
        vector<int> vec[n+1];
        int visited[n+1];
        int col[n+1];
        
        for(int i=0;i<=n;i++)
        visited[i]=0;
        for(int i=1;i<=e;i++)
        {
            scanf("%d%d",&u,&v);
            vec[u].push_back(v);
            vec[v].push_back(u);
        }

        bool flag=false;
        int colour=0;
        for(int i=1;i<=n;i++)
        {
            bool temp;
            if(!visited[i])
            {
            
            temp=dfs(i,visited,vec,col,colour);
            cout<<temp<<" "; 
            if(temp)
            {
                flag=true;
            }
            else
            {
                flag=false;
                break;
            }
            }
            
            
        }
        printf("Scenario #%d\n",count);
        if(flag==false)
        {
            printf("Suspicious bugs found!");
        }
        else
        {
            printf("No suspicious bugs found!");
        }
        printf("\n");
        t--;
    }
    return 0;
}
