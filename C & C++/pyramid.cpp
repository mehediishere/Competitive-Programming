/*
    Time Duration :
    Problem_4 :  Input a value N and print N lines in following way.
*/
#include <stdio.h>

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

    return 0;
}
