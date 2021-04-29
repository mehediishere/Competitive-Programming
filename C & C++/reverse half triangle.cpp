/*
    Time Duration :
    Problem_3 : Input a value N and print N lines in following way.
*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=n-i; j>0; j--)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
