#include<stdio.h>

int s[5000],t[5000],w[5000];
/* up to 1001 vertices and 5000 edges */

void solve()
{
	int n,m,i,j;
	int d[1001]={0};
	int flag=0;
	scanf("%d%d",&n,&m);
	/* n vertices {0,...,n-1} m edges */
	for(i=1;i<n;i++)
		d[i]=0x3FFFFFFF; /* initialize known min distance */
	d[0]=0; /* initialize source */
	for(i=0;i<m;i++)
		scanf("%d%d%d",&s[i],&t[i],&w[i]);
		/* i-th edge: w(s[i],t[i])=w[i] */
	for(i=1;i<n;i++) /* total: n-1 iterations */
	{
		for(j=0;j<m;j++) /* relax every edges */
			if(d[t[j]]>d[s[j]]+w[j])
				d[t[j]]=d[s[j]]+w[j];
	}
	for(j=0;j<m;j++) /* check negative cycles */
		if(d[t[j]]>d[s[j]]+w[j])
		{
			flag=1;
			break;
		}
	if(flag==0){
		for(i=0;i<n;i++)
			printf("%d\n",d[i]);
	}
	else puts("Negative cycle detected");
}

int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
		solve();	
	return 0;
}
