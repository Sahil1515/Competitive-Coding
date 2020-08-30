
#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int A, N, K;

	scanf("%d%d%d", &A, &N, &K);
	int arr[K] = {0};

	// 	for(int i=0;i<K;i++)
	// 	printf("%d ",arr[i]);

	int k = 0;
	for (int i = 0; i < A; i++)
	{
		arr[k]++;
		while (arr[k] > N && k < K)
		{

			if (k + 1 <= K)
			{
				arr[k] = 0;
				k++;
				arr[k]++;
			}
		}
		k = 0;
	}

	for (int i = 0; i < K; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}

// Input:
// 3 1 3
// Output:
// 1 1 0