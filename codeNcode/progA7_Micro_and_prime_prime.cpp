#include<bits/stdc++.h>
using namespace std;

bool arr[1000001];
int ppi[1000001];
bool sieve()
{

     for(int i=0;i<=1000000;i++)
    {
       arr[i]=true;
    }
    arr[0]=arr[1]=false;
    for(int i=2;i*i<=1000000;i++)
    {
        int p=i*i;
        if(arr[i])
        for(int j=p;j<=1000000;j=j+i)
        {
           arr[j]=false;
        }
    }
    int count=0;

     for(int i=2;i<=1000000;i++)
    {
        ppi[i]=0;

    }
    for(int i=1;i<=1000000;i++)
    {
        if(arr[i])
        count++;
        if(arr[count])
        ppi[i]=1;

    }
    for(int i=1;i<=1000000;i++)
    {
        ppi[i]+=ppi[i-1];

    }
}

int main()
{
    int t;
    int L,R;
  
    sieve();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&L,&R);
        printf("%d\n",ppi[R]-ppi[L-1]);
    }
    return 0;
}