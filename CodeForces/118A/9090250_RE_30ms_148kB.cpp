#include<stdio.h>
#include<string.h>
int main() {
    char st[100];
    int i;
    scanf("%s",st);
    for(i=0;i<strlen(st); i++) {
        if(st[i]!='A'&&st[i]!='O'&&st[i]!='Y'&&st[i]!='E'&&st[i]!='U'&&st[i]!='I'&&st[i]!='a'&&st[i]!='o'&&st[i]!='y'&&st[i]!='e'&&st[i]!='u'&&st[i]!='i') {
            if(st[i]<91)
                printf(".%c",st[i]+32);
            else
                printf(".%c",st[i]);
        }
    }
    return 0;}
