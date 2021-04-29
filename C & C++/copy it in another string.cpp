/*
    Time Duration : Around 5 minutes
    Problem_4 : Input a word and copy it in another string.
*/
#include<stdio.h>

int main()
{
    char str[100],str2[100];
    int count = 0, result = 0;

    scanf("%s",str);

    while (str[count] != '\0')
    {
        str2[count] = str[count];
        count++;
    }

    printf("%s \n", str2);

    return 0;
}
