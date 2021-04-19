#include<stdio.h>
int main() {
    int n, k, a[100],i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);}
    if(a[k-1]>0) {
        for(i=k;i<n;i++) {
            if(a[i]==a[k-1]) 
                k++;
        }
    }
    else {
        for(i=k-1;i>=0;i--) {
            if(a[i]==0) 
                k--;
        }
    }
    printf("%d",k);
    return 0;
}
