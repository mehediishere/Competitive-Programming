/*
    Time : 10 minutes
    Problem_1 : Write a C program to find the maximum between two numbers.
*/
#include<stdio.h>

int main()
{
    int number1, number2;

    scanf("%d %d",&number1 ,&number2);

    if(number1>number2)
    {
        printf("%d \n",number1);
    }
    else
    {
        printf("%d \n",number2);
    }

    return 0;
}
