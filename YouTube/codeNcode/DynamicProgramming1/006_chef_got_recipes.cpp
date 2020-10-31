


#include<bits/stdc++.h>
using namespace  std;


int main()
{
    int t;  cin>>t;

    while(t--)
    {
        int n;  cin>>n;

        int size=32;
        
        int dp[size];
        memset(dp,0,sizeof(dp));

        for(int i=0;i<n;i++)
        {
            string str;
            cin>>str;

            int temp=0;
            for(char ch : str)
            {
                if(ch=='a')
                temp=temp |1<<0;
                else if(ch=='e')
                temp=temp |1<<1;
                else if(ch=='i')
                temp=temp |1<<2;
                else if(ch=='o')
                temp=temp |1<<3;
                else temp=temp |1<<4;
            }
            dp[temp]++;
        }

        int count=0;
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(i | j ==31)
                count=count+ dp[i]*dp[j];
            }
        }
        // cout<<count;
        count=count+(dp[31]*(dp[31]-1))/2;
        cout<<count<<"\n";
    }

    return 0;
}
