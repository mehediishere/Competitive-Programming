#include<stdio.h>
#include<string.h>
int main()
{
    char s1[105], s2[105];
    int i;
    scanf("%s%s",s1,s2);
    for (i = 0; i <strlen(s1); ++i)
    {
        if (s1[i] == s2[i])
        {
            s1[i] = '0';
        }
        else
        {
            s1[i] = '1';
        }
    }
    printf("%s",s1);
    return 0;
}
