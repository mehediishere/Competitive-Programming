
/*
    Time Duration :
    Problem_13 :   Given an array of distinct integers, sort the array and find all pairs where a<b.
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

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((arr[i]<arr[j]) && (arr[i] != arr[i-1]) && (arr[j] != arr[j-1]))
            {
                printf("%d %d, ",arr[i],arr[j]);
            }
        }
    }

    return 0;
}
