/*
    Time : 5 minutes
    Problem_5 : Given two numbers N and X. Find N is divisible by X or not.
*/
#include<stdio.h>

int main()
{
    int N, X;

    scanf("%d %d",&N, &X);

    if(N%X == 0)
    {
        printf("YES \n");
    }
    else
    {
        printf("NO \n");
    }

    return 0;
}
