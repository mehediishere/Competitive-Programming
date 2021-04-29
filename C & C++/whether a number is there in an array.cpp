/*
    Time : Around -- minutes
    Problem_7 : Write a program to find whether a number is there in an array or not.
*/
#include<stdio.h>

int main()
{
    int arr[100], n, check, contain;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&check);

    int i = 0;
    while(i<n)
    {
        if(arr[i] == check)
        {
            contain = 1;
            break;
        }
        else
        {
            contain = 0;
        }
        i++;
    }
    if(contain == 1)
        printf("The number is in the array. \n");
    else
        printf("The number is not in the array. \n");

    return 0;
}
