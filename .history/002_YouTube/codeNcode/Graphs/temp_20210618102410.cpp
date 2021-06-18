


#include<bits/stdc++.h>

using namespace std;

void dfs(vector<int> arr, int ele)
{
    visited[ele]=true;

    for(auto el: arr[ele])
    {
        if(!visited[el])
        {
            dfs(arr,el);
        }
    }
}

int main()
{

}