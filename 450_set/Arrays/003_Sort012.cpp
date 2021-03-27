#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends


void sort012(int arr[], int n)
{
    // coode here 
    
    int i=0;
    int j=n-1;
    int k=0;


    while (k<=j)
    {
        if(arr[k]==0 )
                swap(arr[i++],arr[k++]);
        else if(arr[k]==2)
                swap(arr[j--],arr[k]);
        else
        k++;
    }
}