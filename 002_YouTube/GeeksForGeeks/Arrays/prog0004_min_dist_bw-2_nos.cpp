


#include <bits/stdc++.h>
using namespace std;
int minDist(int arr[], int n, int x, int y);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        cout << minDist(a, n, x, y) << endl;
    }
    return 0;
}
// } Driver Code Ends



int minDist(int arr[], int n, int x, int y) {
    // code here
    
    int mini=INT_MAX;
    int p=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x || arr[i]==y)
        {
            if(p!=-1 && arr[p]!=arr[i])
            mini=min(mini,i-p);
        
            p=i;
        }
    }
    if(mini==INT_MAX)
    return -1;
    return mini;
}


// 92
// 52 60 40 8 14 90 63 53 48 41 7 33 80 82 82 27 82 81 48 91 63 37 63 32 6 44 52 80 81 60 71 84 71 62 92 84 51 6 88 98 46 94 83 26 27 64 4 60 96 51 2 11 87 64 94 93 60 45 24 92 56 46 76 78 7 19 13 10 24 100 59 21 45 93 98 23 9 1 34 4 51 35 14 38 51 7 82 10 4 57 1 11
// 1 27


// Execution Time:0.9