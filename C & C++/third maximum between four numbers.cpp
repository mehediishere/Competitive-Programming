/*
    Time : 1hr 23minutes + (Update : 45 minutes)
    Problem_6 : Write a C program to find the third maximum between four numbers.
*/
#include<stdio.h>

int main()
{
    int number1, number2, number3, number4, temp;

    scanf("%d %d %d %d",&number1, &number2, &number3, &number4);

    if (number1 > number2)
    {
        temp = number1;
        number1 = number2;
        number2 = temp;
    }
    if (number3 > number4)
    {
        temp = number3;
        number3 = number4;
        number4 = temp;
    }
    if (number1 > number3)
    {
        temp = number1;
        number1 = number3;
        number3 = temp;
    }
    if (number2 > number4)
    {
        temp = number2;
        number2 = number4;
        number4 = temp;
    }
    if (number2 > number3)
    {
        temp = number2;
        number2 = number3;
        number3 = temp;
    }

    printf("%d \n",number2);

    return 0;
}
