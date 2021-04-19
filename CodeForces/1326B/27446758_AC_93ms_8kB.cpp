#include<iostream>
using namespace std;

int n;

int main()
{
	scanf("%d", &n);
	int maxVal = 0, x;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		printf("%d ", maxVal + x);
		if (x > 0)
		{
			maxVal += x;
		}
	}
	return 0;
}
