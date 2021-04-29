/*
    Time Duration :
    Problem_2 :  Input a value N and print N lines in following way.
*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
