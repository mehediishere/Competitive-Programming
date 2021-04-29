/*
    Time : Around 30+ minutes
    Problem_10 :  Given an array. Remove a specific index element and reorder the array again.
*/
#include<stdio.h>

int main()
{
    int arr[100], n, indexPos;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&indexPos);

    if(indexPos<n)
    {
        for(int i=indexPos; i<n-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        for(int i = 0; i < n-1; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
