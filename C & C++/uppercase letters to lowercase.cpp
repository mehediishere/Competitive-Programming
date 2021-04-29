/*
    Time Duration : Around 10 minutes
    Problem_8 : Input a string that will contain only uppercase letters. Convert these letters in lowercase.
*/
#include<stdio.h>

int main()
{
    char str[100];
    int count = 0;

    scanf("%s",str);

    while (str[count] != '\0')
    {
        if('A'<=str[count]<='Z')
        {
            str[count] = str[count]+32;
            printf("%c",str[count]);
        }
        count++;
    }

    return 0;
}
