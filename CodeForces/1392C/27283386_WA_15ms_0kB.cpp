#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, x;
		scanf("%d", &n);
		int flag = 1;
		scanf("%d", &x);
		for (int i = 1; i<n; i++)
		{
			int y;
			scanf("%d", &y);
			if (y != x) 
			{
				flag = 0;
			}
		}
		if (flag)
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