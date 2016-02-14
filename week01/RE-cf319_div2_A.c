#include<stdio.h>

int row[10000];

int main()
{
	int i, j;
	int n;
	int x;
	int ans=0;
	scanf("%d%d",&n,&x);
	for( i = 1; i <= n; i++)
	{
		for( j = 1; j <= n; j++)
		{
			row[j] = i * j;
		}
		for( j = 1; j <= n; j++)
		{
			if( row[j]==x ) ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}