/*
    Time :
    Problem_1 : Input an integer N. Print N, N-1, ......3, 2, 1.
*/
#include<stdio.h>

int main()
{
    int N, i;

    scanf("%d",&N);

    for(i=N; i>0; i--)
    {
        printf("%d ",i);
    }

    return 0;
}
