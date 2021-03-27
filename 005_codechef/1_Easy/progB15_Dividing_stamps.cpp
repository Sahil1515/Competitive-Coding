#include <stdio.h>

int main(void)
{
	// your code goes here
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	long long int sum = 0;
	for (int i = 0; i < n; i++)
		sum = sum - arr[i] + i + 1;

	if (sum == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}

// Input:
// 5
// 7 4 1 1 2

// Output:
// YES

// Input:
// 5
// 1 1 1 1 1

// Output:
// NO
