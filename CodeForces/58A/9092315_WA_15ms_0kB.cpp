#include<stdio.h>
#include<string.h>
int main() {
    int i,cnt=0;
    char s[105];
    scanf("%s", s);
    for(i=0; i<strlen(s); ++i){
        if(s[i]=='h'){
    cnt++;
    i++;
    break;
}
    if(s[i]=='e'){
    cnt++;
    i++;
    break;
}if(s[i]=='l'){
    cnt++;
    i++;
    break;
}if(s[i]=='l'){
    cnt++;
    i++;
    break;
}if(s[i]=='o'){
    cnt++;
    i++;
    break;
}
    }
    if(cnt>=5) printf("YES");
    else printf("NO");
    return 0;
}
