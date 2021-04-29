/*
    Time Duration : Around 2 minutes
    Problem_2 : Write a program in C to separate the individual characters from a string.
*/
#include<stdio.h>

int main()
{
    char str[100];
    int count = 0;

    scanf("%s",str);

    while (str[count] != '\0')
    {
        printf("%c ", str[count]);
        count++;
    }

    return 0;
}
