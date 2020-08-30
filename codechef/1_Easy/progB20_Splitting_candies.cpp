#include <stdio.h>

int main(void)
{
	// your code goes here
	int t;
	scanf("%d", &t);
	while (t != 0)
	{
		long int a, b;
		long int stu = 0;
		long int teac = 0;
		scanf("%ld%ld", &a, &b);

		if (b == 0)
		{
			teac = a;
		}
		else
		{
			stu = a / b;
			teac = a % b;
		}
		printf("%ld %ld\n", stu, teac);

		t--;
	}
	return 0;
}

// Input:

// 2
// 10 2
// 100 3

// Output:

// 5 0
// 33 1
