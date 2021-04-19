#include<stdio.h>
#include<string.h>
int main() {
    int i,cont=0,a=0,r=0,p=0;
    char s[25];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
        if(s[i]=='4'||s[i]=='7')
            cont++;
    while(cont>0) {
        a=cont%10;
        cont=cont/10;
        p++;
        if(a==4||a==7)
            r++;
    }
    if(r==p&&r>0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
