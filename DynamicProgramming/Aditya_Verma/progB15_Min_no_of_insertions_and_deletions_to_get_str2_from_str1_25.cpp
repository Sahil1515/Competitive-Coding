#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;

        int len1=s1.length();
        int len2=s2.length();

        int dp[len1+1][len2+1];

        for(int i=0;i<=len1;i++)
        {
            for(int j=0;j<=len2;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                }
                else if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        int deletions=len1-dp[len1][len2];
        int insertions=len2-dp[len1][len2];

        cout<<"No of Deletions "<<deletions<<"\n";
        cout<<"No of Insertions "<<insertions<<"\n";

    }
        return 0;
}

// Execution Time:0.08

// Input:
// 1
// 4 3
// heap pea 

// Output:
// 3

// Given two strings ‘str1’ and ‘str2’ of size m and n respectively. The task is to remove/delete 
// and insert minimum number of characters from/in str1 so as to transform it into str2.

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
//         string s1,s2;
//         int len1,len2;
        
//         cin>>len1>>len2;
//         cin>>s1>>s2;

//         int dp[len1+1][len2+1];

//         for(int i=0;i<=len1;i++)
//         {
//             for(int j=0;j<=len2;j++)
//             {
//                 if(i==0 || j==0)
//                 {
//                     dp[i][j]=0;
//                 }
//                 else if(s1[i-1]==s2[j-1])
//                 dp[i][j]=1+dp[i-1][j-1];
//                 else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
//         int deletions=len1-dp[len1][len2];
//         int insertions=len2-dp[len1][len2];

//         cout<<deletions+insertions<<"\n";

//     }
//         return 0;
// }