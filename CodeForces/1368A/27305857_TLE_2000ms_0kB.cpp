#include<iostream>
using namespace std;

typedef long long int llt;

int main()
{

    int t;

    scanf("%d",&t);

    while(t--)
    {
        llt a, b, n, count;
        scanf("%lld %lld %lld", &a, &b, &n);
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
		printf("%lld\n", count);

    }

    return 0;
}
