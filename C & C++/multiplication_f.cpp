/*
    Time :  Around 5-7 minutes
    Problem_6 : Given N. print the "namta" of N.
*/
#include<stdio.h>

int main()
{
    int N, i, multiplication = 1;

    scanf("%d",&N);

    for(i=1; i<=10; i++)
    {
        multiplication = N * i;

        printf("%d * %d = %d\n", N, i, multiplication);
    }


    return 0;
}
