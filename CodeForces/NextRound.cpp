#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0;
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0 && arr[i]>=arr[k-1])
        cnt++;
    }

    cout << cnt;
    return 0;
}