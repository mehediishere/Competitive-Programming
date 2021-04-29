/*
    Time Duration :
    Problem_7 : Input a value N and print N+(N-1) lines in following way.
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
        for(int l=1; l<i; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)  // j != i
        {
            printf(" ");
        }
        for(int k=0; k<=n-i-1; k++)
        {
            printf("*");
        }
        for(int l=0; l<=n-i-2; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
