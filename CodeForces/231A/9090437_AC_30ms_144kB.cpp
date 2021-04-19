#include<stdio.h>
#include <string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int p,v,t;
    int solu=0;
    for(i=0;i<n;i++){
        scanf("%d%d%d",&p,&v,&t);
        if(p+v+t>1)
            solu++;
    }
    printf("%d",solu);
    
    return 0;
    }
