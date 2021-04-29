
/*
    Time Duration :
    Problem_9 : Given two number X and N. Find the digit sum of all numbers between X to N where X<=N.
*/
#include<stdio.h>

int main()
{
    int x, n, sum = 0, temp = 0, rem = 0;

    scanf("%d %d",&x, &n);

    for(int i=x; i<=n; i++)
    {
        temp = i;
        while(temp != NULL)
        {
            rem = temp%10;
            sum += rem;
            temp = temp/10;
        }
    }

    printf("%d \n",sum);

    return 0;
}
