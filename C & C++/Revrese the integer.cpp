/*
    Time :  Around 4-5 minutes
    Problem_14 : Input an integer N. Revrese the integer N.
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

        if(remainder>0)
            printf("%d",remainder);

        division = temp / 10;
        temp = division;

    }

    return 0;
}
