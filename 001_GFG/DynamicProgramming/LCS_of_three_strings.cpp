

// #include <bits/stdc++.h>
// using namespace std;

// int dp[101][101];

// int  lcs(string str1,string str2)
// {
//     int n1=str1.length();
//     int n2=str2.length();
    
    
//     for(int i=0;i<=n1;i++)
//     {
//         for(int j=0;j<=n2;j++)
//         {
//             if(i==0 || j==0)
//             dp[i][j]=0;
//             else if(str1[i-1]==str2[j-1])
//             dp[i][j]=dp[i-1][j-1]+1;
//             else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//         }
//     }
    
//     // printing the dp table
    
    
//     //  for(int i=0;i<=n1;i++)
//     // {
//     //     for(int j=0;j<=n2;j++)
//     //     {
//     //       cout<<dp[i][j]<<" ";
//     //     }
//     //     cout<<"\n";
//     // }
    
//     return dp[n1][n2];
    
// }

// string getString(string str1, string str2)
// {
//       string str_n="";
// 	    int i=str1.length(),j=str2.length();
// 	    while(i>0 && j>0)
// 	    {
// 	        if(str1[i-1]==str2[j-1])
// 	        {
// 	            str_n.push_back(str1[i-1]);
// 	            i--,j--;
	            
// 	        }
// 	        else if(dp[i][j-1]>dp[i-1][j])
// 	        {
// 	            j--;
// 	        }
// 	        else i--;
// 	    }
	   
	   
// 	   //Reverse the string
// 	   reverse(str_n.begin(),str_n.end());
	   
// 	   return str_n;
// }
// int main() {
// 	//code
	
// 	int t;
// 	cin>>t;
	
// 	while(t--)
// 	{
// 	    int n1,n2,n3;
// 	    cin>>n1>>n2>>n3;
	    
// 	    string str1,str2,str3;
	    
// 	    cin>>str1>>str2>>str3;
	    
// 	    memset(dp,0,sizeof(dp));
	    
// 	    int com=lcs(str1,str2);
	    
// 	   // cout<<com;
	    
	    
// 	   // Getting the commom string
// 	   string str_n = getString(str1,str2);
	  
// 	   //cout<<str_n;
	   
// 	    memset(dp,0,sizeof(dp));
	    
// 	    cout<<lcs(str3,str_n)<<"\n";
	    
// 	}
	
	
// 	return 0;
// }



#include <bits/stdc++.h>
using namespace std;


int lcs(string str1, string str2, string str3)
{
    int n1=str1.length(), n2=str2.length(), n3=str3.length();
    int dp[n1+1][n2+1][n3+1];
    memset(dp,0,sizeof(dp));
    
    for(int i=0;i<=n1;i++)
    {
        for(int j=0;j<=n2;j++)
        {
            for(int k=0;k<=n3;k++)
            {
                if(i==0 || j==0 || k==0)
                dp[i][j][k]=0;
                else if(str1[i-1]==str2[j-1] && str2[j-1]==str3[k-1]) 
                dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                else dp[i][j][k]=max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
            }
        }
    }
    
    return dp[n1][n2][n3];
    
}
int main() {
	//code
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n1,n2,n3;
	    cin>>n1>>n2>>n3;
	    string str1,str2,str3;
	    cin>>str1>>str2>>str3;
	    int com=lcs(str1,str2,str3);
	    cout<<com<<"\n";
	}
	return 0;
}


// Execution Time:0.22
// 4 Marks
