/*
    Time :  1 minutes
    Problem_10 : Given base B and power P. find B^P.
*/
#include<stdio.h>

int main()
{
    int b, p, result, i=1;

    scanf("%d %d",&b, &p);

    result = b;
    while(i<p)
    {
        result *= b;
        i++;
    }

    printf("%d \n",result);

    return 0;
}
