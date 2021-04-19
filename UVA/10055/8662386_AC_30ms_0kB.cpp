#include<stdio.h>
#include<stdlib.h>
int main (){
    long long a,b,c;
    while(scanf("%lld %lld",&a,&b)==2){
        c=abs(a-b);
        printf("%lld\n",c);
    }

    return 0;
}
