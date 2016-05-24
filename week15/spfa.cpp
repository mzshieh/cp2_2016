#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
void solve()
{
	int i,j,w,n,m,ans=0;
	vector<vector<int> > e;
	vector<int> d;
	vector<bool> inQ;
	queue<int> q;
	scanf("%d%d",&n,&m);
	e.resize(n,vector<int>());
	d.resize(n,0x3FFFFFFF);
	inQ.resize(n,false);
	for(i=0;i<m;i++)
	{
		int u,v,w;
		scanf("%d%d%d",&u,&v,&w);
		e[u].push_back(v);
		e[u].push_back(w);
		/* LAZY: e[u][2*k] is the endpoint of k-th edge of u
		 *       e[u][2*k+1] is the weight of k-th edge of u */
	}
	q.push(0);  /* enqueue the source: 0 */
	d[0]=0;
	inQ[0]=true;
	while(q.size()>0)
	{
		int u=q.front(); /* process next vertex */
		q.pop();
		inQ[u]=false;
		for(i=0;i<e[u].size();i+=2) /* relax u's edges */
		{
			int v=e[u][i],w=e[u][i+1];
			if(d[u]+w<d[v]) /* check if we need to update d[v] */
			{
				d[v]=d[u]+w;
				if(inQ[v]==false) /* if v is not in Q */
				{
					inQ[v]=true;   /* enqueue v */
					q.push(v);
				}
			}
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
