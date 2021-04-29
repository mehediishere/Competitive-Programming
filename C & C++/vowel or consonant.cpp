/*
    Time : 3 minutes
    Problem_13 : Given a character C. Determine the character is a vowel or consonant.
*/
#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='A' || c=='E' || c=='I'|| c=='O' || c=='U' || c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
    {
        printf("'%c' is a vowel.",c);
    }
    else
    {
        printf("'%c' is a consonant.",c);
    }

    return 0;
}
