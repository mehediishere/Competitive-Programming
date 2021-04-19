#include<stdio.h>
int main (){
    long long a,b,c;
    while(scanf("%lld %lld",&a,&b)==2){
        if(a>b)
            c=a-b;
        else
            c=b-a;
        printf("%lld\n",c);
    }

    return 0;
