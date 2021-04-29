/*
    Time Duration : Around 20 minutes
    Problem_15 : Count how many words are in the given input..
*/
#include <stdio.h>

int main()
{
  	char str[100];
  	int i=0, len=0, count = 0;

    gets(str);

    while(str[len] != '\0')
    {
        len++;
    }

  	while(len>0)
    {
        if(str[i]==' ')
        {
            count++;
        }
        i++;
        len--;
    }

        printf("%d \n", count+1);


  	return 0;
}
