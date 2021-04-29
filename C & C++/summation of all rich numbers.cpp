/*
    Time : 50 minutes
    Problem_11 :  Write a program that calculates the summation of all rich numbers of an array. A rich number is a number that is greater than all the previous elements.
*/
#include<stdio.h>

int main()
{
    int arr[100], n, m=0, sum = 0;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    m = arr[0];
    sum = arr[0];

    for(int i=1; i<n; i++)
    {
        if(m<arr[i])
        {
            sum +=arr[i];
            m = arr[i];
        }
    }

    printf("%d \n", sum);

    return 0;
}
