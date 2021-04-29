/*
    Time Duration :
    Problem_5 :  Input a value N and print N lines in following way.
*/
#include <stdio.h>

int main()
{
    int n,j;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            printf(" ");
        }
        for(int k=n; k>j; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
