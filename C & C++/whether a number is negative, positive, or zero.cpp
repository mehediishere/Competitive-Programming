/*
    Time : 5 minutes
    Problem_3 : Write a C program to check whether a number is negative, positive, or zero.
*/
#include<stdio.h>

int main()
{
    int number;

    scanf("%d",&number);

    if(number>0)
    {
        printf("positive number. \n");
    }
    else if(number<0)
    {
        printf("negative number. \n");
    }
    else
    {
        printf("0");
    }

    return 0;
}
