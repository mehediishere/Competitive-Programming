/*
    Time : Around 1.30 hr
    Problem_9 :  Given an array. Insert a new value in a specific index and reorder the array again.
*/
#include<stdio.h>

int main()
{
    int arr[100], n, check, contain, indexPos, value;

    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    scanf("%d %d",&indexPos,&value);

    for(int i = n; i >= indexPos; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[indexPos] = value;

    for(int i = 0; i < n+1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
