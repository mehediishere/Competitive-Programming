#include<iostream>
using namespace std;

int main()
{

    int t;

    scanf("%d",&t);

    while(t--)
    {
        int a, b, n, count;
        scanf("%d %d %d", &a, &b, &n);
		count = 0;
		lebel1:
		if((a || b) < n)
		{
			if (a < b)
			{
				a += b;
			}
			else
			{
				b += a;
			}
			count++;
			goto lebel1;
		}
		printf("%d\n", count);

    }

    return 0;
}
