/*
    Time : Around 35 minutes mostly because of test case 3 confusion
    Problem_12 : Given a character C. Determine the character is an uppercase alphabet or lowercase alphabet or a digit.
*/
#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    {
        printf("'%c' is uppercase alphabet",c);
    }
    else if(c>='a' && c<='z')
    {
        printf("'%c' is lowercase alphabet",c);
    }
    else if(c>='0' && c<='9')
    {
        printf("'%c' is a digit",c);
    }
    else
    {
        printf("'%c' is not an alphabet",c);
    }
    return 0;
}
