#include<stdio.h>
#include<string.h>
int main() {
    int i=0, cnt=0;
    char s[105];
    scanf("%s", s);
    for(; i<strlen(s); i++)
        if(s[i]=='h') {
            cnt++;
            break;}
    for(; i<strlen(s); i++)
        if(s[i]=='e') {
            cnt++;
            break;}
    for(; i<strlen(s); i++)
        if(s[i]=='l') {
            cnt++;
            break;}
    for(; i<strlen(s); i++)
        if(s[i]=='l') {
            cnt++;
            break;}
    for(; i<strlen(s); i++)
        if(s[i]=='o') {
            cnt++;
            break;}
    if(cnt>=5) printf("YES");
    else printf("NO");
    return 0;
}
