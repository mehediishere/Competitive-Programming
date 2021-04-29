/*
    Time :  7-8 minutes
    Problem_4 : Given base B and power P. find B^P.
*/
#include<stdio.h>

int main()
{
    int b, p, result, i;

    scanf("%d %d",&b, &p);

    result = b;
    for(i=1; i<p; i++)
    {
        result *= b;
    }

    printf("%d \n",result);

    return 0;
}
