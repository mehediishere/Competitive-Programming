/*
    Time Duration : Around 25 minutes
    Problem_7 : Input a string and print how many vowels and consonants are there.
*/
#include<stdio.h>

int main()
{
    char str[100];
    int vow = 0, con = 0, count = 0;

    gets(str);

    while (str[count] != '\0')
    {
        if(str[count]=='A' || str[count]=='E' || str[count]=='I'|| str[count]=='O' || str[count]=='U' || str[count]=='a'|| str[count]=='e'|| str[count]=='i'|| str[count]=='o'|| str[count]=='u')
            vow++;
        else if(str[count] != ' ')
            con++;
        count++;
    }

    printf("Vowels : %d \n",vow);
    printf("Consonets  : %d \n",con);

    return 0;
}
