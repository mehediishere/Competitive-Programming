/*
    Time Duration :
    Problem_10 : Given an array and value X. Find if it possible two make summation of two elements of that array
                 equal to X. If possible print those two element otherwise print -1.
*/
#include<stdio.h>

int main()
{
int arr[100], n, x, temp;

    scanf("%d %d",&n, &x);

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
            if((arr[i]+arr[j])==x)
            {
                printf(" %d %d,",arr[i],arr[j]);
            }
        }
    }

    return 0;
}
