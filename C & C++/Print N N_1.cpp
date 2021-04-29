/*
    Time : 3 minutes
    Problem_7 : Input an integer N. Print N, N-1, ......3, 2, 1.
*/
#include<stdio.h>

int main()
{
    int N, i;

    scanf("%d",&N);

    i = N;
    while(i>0)
    {
        printf("%d ",i);
        i--;
    }

    return 0;
}
