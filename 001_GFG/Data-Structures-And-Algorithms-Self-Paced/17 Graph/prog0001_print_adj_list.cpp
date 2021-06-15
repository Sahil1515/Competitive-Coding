

void printGraph(vector<int> adj[], int V)
{
    for(int i=0;i<V;i++)
    {
        cout<<i;
        for(auto ele : adj[i])
        {
         cout<<"-> "<<ele;
        }
        printf("\n");
    }
}

// Execution Time:0.01