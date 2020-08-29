#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d",&n);
        int dig=10,dig_prev=0;
        int num=n;
        int flag=0;
        
        if(n==0)
        {
            flag=2;
        }
        while(num)
        {
            int x=(n%dig)-dig_prev*(dig-0.9*dig);
            if(x==5)
            {
                dig_prev=n%dig;
                dig*=10;
                num=num/10;
            }
            
            else if(x<3)
            {
                n=n+3*(dig-0.9*dig)-((n%dig)-dig_prev);
                dig_prev=n%dig;
                dig*=10;
                num=num/10;
                
            }
            else if(x<5)
            {
                n=n+1;
                dig_prev=5;
                dig*=10;
                num=num/10;
            }
            else if(x>5)
            {
                string s=to_string(x),s1="";
                int len=s.length();
                for(int i=0;i<len;i++)
                s1=s1+"3";
                s1=s1+"3";
                cout<<s1;
                flag=1;
            }
        }
        
        if(flag==0)
        printf("%d",n);
        else if(flag==2)
         printf("3");

        printf("\n");
        

        t--;
    }
}
