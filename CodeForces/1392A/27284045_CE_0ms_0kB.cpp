#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, firstValue;
		scanf("%d", &n);
		bool check = true
		scanf("%d", &firstValue);
		for (int i = 1; i<n; i++)
		{
			int remainingValue;
			scanf("%d", &remainingValue);
			if (remainingValue != firstValue)
			{
				check = false;
			}
		}
		if (check)
		{
			printf("%d\n", n);
		}
		else
		{
			printf("1\n");
		}
	}
	return 0;
}
