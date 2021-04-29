/*
    Time : Around 5 minutes
    Problem_1 : Take an input N. In the next line input N integers. Print this N integers in separate lines.
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

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
