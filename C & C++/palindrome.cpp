/*
    Time Duration : Around -- minutes
    Problem_11 : Check a string is palindrome or not.
*/
#include<stdio.h>

int main()
{
    char str[100],str2[100];
    int i=0, count = 0;
    bool palindrome = false;

    scanf("%s",str);

    while (str[i] != '\0')
    {
        str2[i] = str[i];
        count++;
        i++;
    }

    count -= 1;
    i = 0;
    while (count>=i)
    {
        if(str[i]==str[count])
        {
           palindrome = true;
        }
        else
        {
            palindrome = false;
            break;
        }
        i++;
        count--;
    }

    if(palindrome == true)
        printf("Yes it's palindrome.");
    else
        printf("Not a palindrome.");

    return 0;
}
