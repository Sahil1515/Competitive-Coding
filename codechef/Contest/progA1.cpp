#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t, n;
	scanf("%d", &t);
	while (t != 0)
	{
		scanf("%d", &n);
		int arr[n];
		int *freq = (int *)malloc(11 * sizeof(int));
		int *freq2 = (int *)malloc(10000 * sizeof(int));

		for (int i = 0; i < 11; i++)
			freq[i] = 0;

		for (int i = 0; i < 10000; i++)
			freq2[i] = 0;

		for (int i = 0; i < n; i++)
			scanf("%d", &arr[i]);

		for (int i = 0; i < n; i++)
			freq[arr[i]]++;

		for (int i = 1; i <= 10; i++)
		{
			if (freq[i] > 0)
				freq2[freq[i]]++;
		}
		int maxi = 0;
		for (int i = 0; i < 10000; i++)
		{

			if (freq2[i] > freq2[maxi])
				maxi = i;
		}
		printf("%d\n", maxi);
		free(freq);
		free(freq2);
		t--;
	}
	return 0;
}