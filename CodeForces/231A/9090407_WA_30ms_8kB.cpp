#include<stdio.h>
#include <string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int p,v,t;
    int solve=0;
    for(i=0;i<n;i++){
        scanf("%d%d%d",&p,&v,&t);
        if(p+v+t<1)
            solve++;
    }
    printf("%d",solve);
    }
