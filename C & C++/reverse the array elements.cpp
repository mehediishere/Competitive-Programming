/*
    Time : Around -- minutes
    Problem_4 : Given a list of numbers. Save the numbers in an Array. Finally, reverse the array elements and output in a line separated by space.
*/
#include<stdio.h>

int main()
{
    int arr[100], n;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
