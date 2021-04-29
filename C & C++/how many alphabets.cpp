/*
    Time Duration : Around 20 minutes
    Problem_10 : Input a string and print how many alphabets, digit, and special characters are there.
*/
#include<stdio.h>

int main()
{
    char str[100];
    int alphabets = 0, digit = 0, other = 0, count = 0;

    gets(str);

    while(str[count]!='\0')
    {
        if((str[count]>='a' && str[count]<='z') || (str[count]>='A' && str[count]<='Z'))
        {
            alphabets++;
        }
        else if(str[count]>='0' && str[count]<='9')
        {
            digit++;
        }
        else
        {
            other++;
        }

        count++;
    }

    printf("Alphabets : %d \n",alphabets);
    printf("Digit  : %d \n",digit);
    printf("Special  : %d \n",other);

    return 0;
}
