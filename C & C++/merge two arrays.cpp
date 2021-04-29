/*
    Time : Around 30-35 minutes
    Problem_5 : Write a program in C to merge two arrays.
*/
#include<stdio.h>

int main()
{
    int arr[100],arr2[100], n, m;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&m);
    int len = n+m;

    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr2[i]);
        arr[n]=arr2[i];
        n++;
    }
    for(int i=0; i<len; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
