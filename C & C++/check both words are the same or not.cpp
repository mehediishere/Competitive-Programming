/*
    Time Duration : Around 10 minutes
    Problem_3 : Input two words and check both words are the same or not.
*/
#include<stdio.h>

int main()
{
    char str[100],str2[100];
    int count = 0, result = 0;

    scanf("%s",str);
    scanf("%s",str2);

    while (str[count] != '\0' || str2[count] != '\0')
    {
        if(str[count] == str2[count])
        {
            result = 1;
        }
        else
        {
            result = 0;
            printf("No \n");
            break;
        }
        count++;
    }
    if(result == 1)
        printf("Yes \n");

    return 0;
}
