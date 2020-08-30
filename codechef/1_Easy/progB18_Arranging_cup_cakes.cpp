
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes heret
	int t, n;
	scanf("%d", &t);
	while (t != 0)
	{
		int mini = INT_MAX;
		int index = 0;

		scanf("%d", &n);
		for (int i = 1; i <= sqrt(n); i++)
		{
			if (n % i == 0)
				if (abs(i - n / i) < mini)
				{
					mini = abs(i - n / i);
				}
		}
		printf("%d\n", mini);
		t--;
	}
	return 0;
}

// Input:
// 4
// 20
// 13
// 8
// 4

// Output:
// 1
// 12
// 2
// 0