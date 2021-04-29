/*
    Time :  1 minutes
    Problem_12 : Given N. print the "namta" of N.
*/
#include<stdio.h>

int main()
{
    int N, i=1, multiplication = 1;

    scanf("%d",&N);

    while(i<=10)
    {
        multiplication = N * i;
        printf("%d * %d = %d\n", N, i, multiplication);
        i++;
    }

    return 0;
}
