/*
    Time Duration : Around -- minutes
    Problem_14 : Write a program in C to find the maximum occurring character in a string.
*/
#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100],str2[100], result;
  	int i, len;
  	int max = 0;

  	int freq[256] = {0};

    scanf("%s",str);

    while(str[len] != '\0')
    {
        len++;
    }

  	for(i = 0; i < len; i++)
  	{
  		freq[str[i]]++;
  		printf("%d ",freq[str[i]]);
	}

  	for(i = 0; i < len; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
	printf("\n %c", result);

  	return 0;
}
