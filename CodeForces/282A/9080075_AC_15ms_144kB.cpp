#include<stdio.h>
int main() {
    int n, r;
    char s[5];
    r=0;
    scanf("%d",&n);
    while(n--) {
        scanf("%s",s);
        if(s[0]=='-'||s[1]=='-')r--;

        else
            r++;
    }
    printf("%d", r);
    return 0;
}
