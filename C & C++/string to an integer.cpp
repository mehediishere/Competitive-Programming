/*
    Time Duration : Around -- minutes
    Problem_9 : How to convert a string to an integer.
*/
#include<stdio.h>

int main()
{
    char str[100],str2[100];
    long long int number = 0, i=0;

    scanf("%s",str);

    while (str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            number = number*10 + str[i] - '0';
        }
        i++;
    }

    printf("%lld\n", number);

    return 0;
}
