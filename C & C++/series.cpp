/*
    Time : 2 minutes
    Problem_9 : Input an integer N. Print the following series: 1-2+3-4+5.....N.
*/
#include<stdio.h>

int main()
{
    int N, i=1, sum = 0;

    scanf("%d",&N);

    while(i<=N)
    {
       if(i%2 != 0)
       {
           sum += i;
       }
       else
       {
           sum -= i;
       }
       i++;
    }

    printf("%d \n",sum);

    return 0;
}
