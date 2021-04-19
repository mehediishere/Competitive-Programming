#include<stdio.h>
int main(){
char s[100];
int i=0;
while(1)
{
    scanf("%s",s);
    if(s[0]=='*')
        {
            break;
        }
    else if(s[0]=='H')
        {
            printf("Case %d: Hajj-e-Akbar\n",++i);
        }
    if(s[0]=='U')
        {
            printf("Case %d: Hajj-e-Asghar\n",++i);
        }
}
return 0;
}
