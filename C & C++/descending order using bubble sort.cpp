
/*
    Time Duration :
    Problem_11 : Given an array. Sort this array in descending order using bubble sort.
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
            if(arr[k]<arr[k+1])
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

    return 0;
}
