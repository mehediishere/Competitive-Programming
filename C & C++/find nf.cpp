/*
    Time :  Around 5-7 minutes
    Problem_5 : Given N. Find N!.
*/
#include<stdio.h>

int main()
{
    int N, i, factorial = 1;

    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
        factorial *= i;
    }

    printf("%d \n",factorial);

    return 0;
}
