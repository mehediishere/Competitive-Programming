#include<stdio.h>
#include<string.h>
int main() {
    int flag, cnt,i;
    char s[150];
    scanf("%s",s);
    cnt=flag=0;
    for(i=1;i<strlen(s);i++) {
        if(s[i]==s[i-1])
        cnt++;
        else cnt=0;
        if(cnt==6) {
            flag=1;
            printf("YES");
            break;
        }
    }
    if(flag==0)
        printf("NO");
    return 0;
}
