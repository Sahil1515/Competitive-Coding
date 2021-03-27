#include<bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    
    int temp[1000001]={0};
    int maxi=0;
    
    for(int i=0;i<n;i++)
    {
        if(!temp[a1[i]])
        temp[a1[i]]++;
    }
      for(int i=0;i<m;i++)
    {
        maxi=max(maxi,a2[i]);
        if(temp[a2[i]]==1)
        temp[a2[i]]++;
    }
    
    int count=0;
    for(int i=0;i<=maxi;i++)
    {
        if(temp[i]>1)
        {
            count++;
        }
    }
    
    if(count==m)
    return "Yes";
    return "No";
}