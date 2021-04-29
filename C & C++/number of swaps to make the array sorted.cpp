
/*
    Time Duration :
    Problem_12 :  Given an array of integers. Find the number of swaps to make the array sorted if we use bubble sort
                  algorithm.
*/
#include<stdio.h>

int main()
{
    int arr[100], n, temp, count = 0;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j = 0; j<n-1; j++)
    {
        for(int k = 0; k<n-j-1; k++)
        {
            if(arr[k]<arr[k+1])
            {
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
                count++;
            }
        }
    }

    /*for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }*/

    printf("%d ",count);

    return 0;
}
