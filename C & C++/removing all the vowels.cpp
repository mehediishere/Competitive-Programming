/*
    Time Duration : Around 50 minutes
    Problem_13 : Return a string after removing all the vowels.
*/
#include<stdio.h>

int main()
{
    char str[20],str2[20];
    int i=0, len = 0, j = 0;

    scanf("%s",str);

    while(str[len] != '\0')
    {
        len++;
    }

    while(len > 0)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I'|| str[i]=='O' || str[i]=='U' || str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
        {
            str2[j] = str[i+1];
            i += 2;
        }
        else
        {
            str2[j] = str[i];
            i++;
        }
        j++;
        len--;
    }

    str2[j]='\0';
    printf("%s \n",str2);

    return 0;
}
