

#include <bits/stdc++.h>
using namespace std;

// void heapify(int arr[], int n, int s)
// {
//     int left=2*s+1;
//     int right=2*s+2;
//     int largest=s;

//     if(left<n && arr[s]>=arr[left])
//     largest=left;

//     if(right<n && arr[s]>=arr[right])
//     largest=right;

//     if(largest!=s)
//     {
//         swap(arr[largest],arr[s]);
//         heapify(arr,n,largest);
//     }
// }
// void build_heap(int arr[], int n)
// {
//     int start=(n/2)-1;

//     for(int i=start;i>=0;i--)
//     heapify(arr,n,i);
// }
int main()
{
	// your code goes here

	int t, n, k;

	scanf("%d", &t);
	while (t != 0)
	{
		scanf("%d%d", &n, &k);
		int *arr = (int *)malloc(n * sizeof(int));

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}

		// build_heap(arr,n);
		sort(arr, arr + n);
		k = k < (n - k) ? k : (n - k);

		long int sum1 = 0;
		long int sum2 = 0;
		for (int i = 0; i < n; i++)
		{
			if (i < k)
				sum2 = sum2 + arr[i];
			else
				sum1 = sum1 + arr[i];
		}

		printf("%ld\n", sum1 - sum2);
		t--;
	}
	return 0;
}

// Input : 2 5 2 8 4 5 2 10 8 3 1 1 1 1 1 1 1 1

// 	Output : 17 2