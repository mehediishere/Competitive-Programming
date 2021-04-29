/*
    Time : Around 40 minutes
    Problem_8 : Write a program in C to find the maximum and minimum elements in an array.
*/
#include<stdio.h>

int main()
{
    int arr[100], n, check, contain, temp;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j = 0; j<n-1; j++)
    {
        for(int k = 0; k<n-j-1; k++)
        {
            if(arr[k]>arr[k+1])
            {
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n%d \n",arr[n-1]);
    printf("%d \n",arr[0]);

    return 0;
}
