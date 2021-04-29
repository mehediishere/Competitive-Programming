/*
    Time Duration : Around 30+ minutes
    Problem_12 : Write a program that merges two string into another string without using Concat function.
*/
#include<stdio.h>

int main()
{
    char str[100],str2[100];
    int i=0, count = 0, len = 0;
    bool palindrome = false;

    scanf("%s %s",str, str2);

    while (str[len] != '\0')
    {
        len++;
    }
    while (str[i] != '\0')
    {
        str[len] = str2[i];
        i++;
        len++;
    }

    printf("%s \n",str);

    return 0;
}
