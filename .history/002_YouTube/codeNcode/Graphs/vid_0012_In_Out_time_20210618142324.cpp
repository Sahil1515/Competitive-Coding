


int timer=1;
bool dfs(int v)
{
    vis[v]=1;
    In[v]=timer++;
    for(int child:arr[v])
    {
        if(vis[child]==0)
        dfs(child);
    }
    out[v]=timer++;
}