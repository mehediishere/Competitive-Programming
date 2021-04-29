/*
    Time Duration :
    Problem_6 : Input a value N and print N lines in following way.
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i-1; j++)  // j != i
        {
            printf(" ");
        }
        for(int k=0; k<=n-i; k++)
        {
            printf("*");
        }
        for(int l=0; l<=n-i-1; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
