#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, n, x;
	int **mtx;
	int ans=0;
	scanf("%d%d",&n,&x);
    mtx = (int**) malloc(sizeof(int*)*(1+n));
	for( i = 1; i <= n; i++)
	{
	    mtx[i] = (int*) malloc(sizeof(int)*(1+n));
		for( j = 1; j <= n; j++)
		{
			mtx[i][j] = i * j;
		}
		for( j = 1; j <= n; j++)
		{
			if( mtx[i][j]==x ) ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}