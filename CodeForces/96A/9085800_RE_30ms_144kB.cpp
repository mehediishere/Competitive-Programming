#include<stdio.h>
int main() {
    int flag, ct;
    int i;
    char s[100];
    scanf("%s",s);
    ct=0;
    flag=0;
    for(i=0;s[i]; i++) {
        if(s[i]==s[i-1]) ct++;
        else
            ct=1;
        if(ct==7) {
            flag=1;
            printf("YES");
            break;
        }
    }
    if(flag==0)
        printf("NO");

    return 0;
}
