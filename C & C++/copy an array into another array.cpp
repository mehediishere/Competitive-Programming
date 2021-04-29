/*
    Time : Around 10 minutes
    Problem_3 : Write a program to copy an array into another array and print both array. (the size of the array should be taken from keyboard).
*/
#include<stdio.h>

int main()
{
    int arr1[100], arr2[100], n;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i] = arr1[i];
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr1[i]);
    }

    printf("\n");

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr2[i]);
    }

    return 0;
}
