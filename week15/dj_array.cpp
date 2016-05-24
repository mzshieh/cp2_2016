#include<cstdio>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

struct edge{
	int u,v,w; // w(u,v)=w
};

void solve()
{
	int i,j,w,n,m,ans=0;
	vector<vector<edge> > e; /* adjacency list */
	vector<int> d; /* minimum distance */
	vector<bool> inS; /* inS[v] == extracted from pq */
	scanf("%d%d",&n,&m); /* V={0,...,n-1}, |E|=m, Directed */
	e.resize(n,vector<edge>());
	d.resize(n,0x3FFFFFFF); /* initially, minimum distance = infinity */
	inS.resize(n,false); /* initially, every node is in pq */
	for(i=0;i<m;i++)  /* read edges */
	{
		edge in;
		scanf("%d%d%d",&in.u,&in.v,&in.w); /* (in.u,in.v) has weight in.w */
		e[in.u].push_back(in);
	}
	d[0]=0; /* initialize the minimum distance of source to 0 */
	for(i=0;i<n;i++) /* at most n iterations */
	{
		int u=-1, minD=0x3FFFFFF;
		for(j=0;j<n;j++){
			if(!inS[j] && minD>d[j]){
				u=j;
				minD=d[j];
			}
		}
		if(u==-1)break; /* if no nodes have finite min distance, then break. */
		inS[u]=true; /* u is formally extracted */
		for(j=0;j<e[u].size();j++) /* relax u's edges */
		{
			int v=e[u][j].v,w=e[u][j].w;
			if(d[u]+w<d[v]) /* check if we need to update d[v] */
				d[v]=d[u]+w;
		}
	}
	for(i=0;i<n;i++)
		printf("%d\n",d[i]);
}

int main()
{
	int nCases;
	scanf("%d",&nCases);
	while(nCases--)
		solve();
	return 0;
}
