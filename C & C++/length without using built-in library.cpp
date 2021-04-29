/*
    Time Duration :
    Problem_1 : Input a word and count its length without using built-in library.
*/
#include<stdio.h>

int main()
{
    char str[100];
    int count = 0;

    scanf("%s",str);

    while (str[count] != '\0')
        count++;

    printf("%d \n", count);

    return 0;
}
