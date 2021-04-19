#include <stdio.h>
int main() {
	int i=1,n;
	int l,w,h;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&l,&w,&h);
		printf("Case %d: ",i++);
		if(l<=20 && w<=20 && h<=20)
            printf("good\n");
		else
            printf("bad\n");
	}
	return 0;
}
