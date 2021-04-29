/*
    Time :
    Problem_2 : Input an integer N. Find the sum of odd numbers - 1+3+5+...+N.
*/
#include<stdio.h>

int main()
{
    int N, i, oddSum = 0;

    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
       if(i%2 != 0)
       {
           oddSum += i;
       }
    }

    printf("%d \n",oddSum);

    return 0;
}
