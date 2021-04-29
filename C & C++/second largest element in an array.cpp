/*
    Time : Around 10 minutes
    Problem_12 : Write a program in C to find the second largest element in an array.
*/
#include<stdio.h>

int main()
{
    int arr[100], n, temp;

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

    printf("%d \n",arr[n-2]);

    return 0;
}
