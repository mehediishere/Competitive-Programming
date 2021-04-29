/*
    Time : 2 minutes
    Problem_8 : Input an integer N. Find the sum of odd numbers - 1+3+5+...+N.
*/
#include<stdio.h>

int main()
{
    int N, i = 1, oddSum = 0;

    scanf("%d",&N);

    while(i<=N)
    {
       if(i%2 != 0)
       {
           oddSum += i;
       }
       i++;
    }

    printf("%d \n",oddSum);

    return 0;
}
