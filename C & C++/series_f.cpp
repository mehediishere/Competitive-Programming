/*
    Time : 2 minutes
    Problem_3 : Input an integer N. Print the following series: 1-2+3-4+5.....N.
*/
#include<stdio.h>

int main()
{
    int N, i, sum = 0;

    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
       if(i%2 != 0)
       {
           sum += i;
       }
       else
       {
           sum -= i;
       }
    }

    printf("%d \n",sum);

    return 0;
}
