/*
    Time :  Around 30 minutes
    Problem_17 : Given N, find X and A where N = X*2^A.
*/
#include<stdio.h>

int main()
{
    int n, x, a=0;

    scanf("%d", &n);

    while(true)
    {
        n = n/2;
        a++;
        if(n%2!=0)
        {
            x = n;
            break;
        }
    }
    printf("%d %d \n",x,a);

    return 0;
}
