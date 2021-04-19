
#include <stdio.h>
int main(void)
{
	int n, i, j, bm[101][101], a, b, c, d;
	while(scanf("%d", &n) && n!=0)
	{
		a=b=0;
		for(j=0; j<n;j++)
			bm[n][j]=0;
		for(i=0; i<n; i++)
		{
			bm[i][n]=0;
			for(j=0; j<n; j++)
			{
				scanf("%d", &bm[i][j]);
				bm[i][n]+=bm[i][j];
				bm[n][j]+=bm[i][j];
			}
		}
		for(i=0; i<n; i++)
			if(bm[i][n]%2)
			{ 
				a++; 
				c=i;
			}
		for(j=0; j<n; j++)	
			if(bm[n][j]%2)
			{ 
				b++; 
				d=j; 
			}
		if(a==0 && b==0)
			printf("OK\n");
		else if(a==1 && b==1)
			printf("Change bit (%d,%d)\n", c+1, d+1);
		else
			printf("Corrupt\n");
	}
	return 0;
}