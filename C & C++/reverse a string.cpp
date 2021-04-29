/*
    Time Duration : Around 25-30 minutes
    Problem_5 : How to reverse a string without using any function.
*/
#include<stdio.h>

int main()
{
    char str[100];
    int count = 0;

    scanf("%s",str);

    while (str[count] != '\0')
    {
        count++;
    }

    while(count>=0)
    {
        printf("%c",str[count]);
        count--;
    }

    return 0;
}
