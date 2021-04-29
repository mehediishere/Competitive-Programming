/*
    Time :  1 minutes
    Problem_11 : Given N. Find N!.
*/
#include<stdio.h>

int main()
{
    int N, i=1, factorial = 1;

    scanf("%d",&N);

    while(i<=N)
    {
        factorial *= i;
        i++;
    }

    printf("%d \n",factorial);

    return 0;
}
