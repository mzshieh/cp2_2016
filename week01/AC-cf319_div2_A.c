#include<stdio.h>

int main()
{
	int i, j;
	int n;
	int x;
	int ans=0;
	scanf("%d%d",&n,&x);
	for( i = 1; i <= n; i++)
	{
		if( x % i == 0 && x/i <= n )
		{
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}