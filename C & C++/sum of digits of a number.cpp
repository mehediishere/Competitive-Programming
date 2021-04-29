/*
    Time :  Around 30 minutes
    Problem_13 : Find the sum of digits of a number N.
*/
#include<stdio.h>

int main()
{
    int N, i=1, remainder=1, sum = 0, division, temp;

    scanf("%d",&N);

    division = N;
    temp = N;
    while(remainder!=0)
    {
        remainder = division % 10;
        sum += remainder;
        division = temp / 10;
        temp = division;

    }
    printf("%d \n",sum);

    return 0;
}
