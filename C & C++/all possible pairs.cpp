/*
    Time Duration :
    Problem_8 : Given an array, Find all possible pairs.
*/
#include<stdio.h>
int main()
{
    int n, arr[100];
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf(" %d %d,",arr[i],arr[j]);
        }
    }

    return 0;
}
