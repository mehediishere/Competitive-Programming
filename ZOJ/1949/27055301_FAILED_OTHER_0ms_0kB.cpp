# include <stdio.h>
# include <string.h>
# define min(a,b) a>b?b:a
void input()
{
	int n, i, j, r, c, ai, aj;
	int map[101][101], row[101], col[101];

	while(scanf("%d",&n)==1&&n)
	{
		r = c = 0;
		memset(col,0,sizeof(col));
		for(i = 0; i < n; i++)
		{
			row[i] = 0;
			for(j = 0; j < n; j++)
			{
				scanf("%d",&map[i][j]);
				row[i] += map[i][j];
				col[j] += map[i][j];
			}
		}
		for(i = 0; i < n; i++)
		{
			if(row[i]%2)
			{
				r++;
				ai = i;
			}
			if(col[i]%2)
			{
				aj = i;
				c++;
			}
		}
		if(r==0&&c==0)
		{
			printf("OK\n");
			continue;
		}
		if(r==1&&c==1)
		{
			printf("Change bit (%d,%d)\n",ai+1,aj+1);
			continue;
		}
		printf("Corrupt\n");
	}
}

int main()
{
	input();
	return 1;
}