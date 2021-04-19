#include<iostream>
using namespace std;

int main()
{

    int t;

    cin>>t;

    while(t--)
    {
        int a, b, n, count;
        scanf("%d %d %d", &a, &b, &n);
		count = 0;
		while ((a || b) < n)
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
		}
		printf("%d\n", count);

    }

    return 0;
}
