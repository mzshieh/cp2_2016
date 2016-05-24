#include<cstdio>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

struct halfedge{
	int v,w; // w(?,v)=w. We don't really care where is it from.
	bool operator<(const halfedge &rhs) const{
		return this->w>rhs.w; /* priority_queue: max=first. We need min=first */
	}
};

void solve()
{
	int i,j,u,w,n,m,ans=0;
	vector<vector<halfedge> > e; /* adjacency list */
	vector<int> d; /* minimum distance */
	vector<bool> inS; /* inS[v] == extracted from pq */
	priority_queue<halfedge> pq; /* priority queue for relaxed edges */
	halfedge source; /* the first domino */
	scanf("%d%d",&n,&m); /* V={0,...,n-1}, |E|=m, Directed */
	e.resize(n,vector<halfedge>());
	d.resize(n,0x3FFFFFFF); /* initially, minimum distance = infinity */
	inS.resize(n,false); /* initially, every node is in pq */
	for(i=0;i<m;i++)  /* read edges */
	{
		halfedge in;
		scanf("%d%d%d",&u,&in.v,&in.w); /* (u,in.v) has weight in.w */
		e[u].push_back(in);
	}
	d[0]=0; /* initialize the minimum distance of source to 0 */
	source.v=0; /* prepare a virtual relaxed edge (?,s) */
	source.w=0; /* d[s]=0 */
	pq.push(source); /* put it into pq */
	while(!pq.empty()) /* iterate if pq is not empty */
	{
printf("v=%d v.d=%d inS[v]=%s\n",pq.top().v,pq.top().w,inS[pq.top().v]?"true":"false");
		u=pq.top().v;
		pq.pop();
		if(inS[u])continue; /* u is extracted, skip u */
		inS[u]=true; /* u is formally extracted */
		for(j=0;j<e[u].size();j++) /* relax u's edges */
		{
			int v=e[u][j].v,w=e[u][j].w;
			if(d[u]+w<d[v]) /* check if we need to update d[v] */
			{
				halfedge h;
				h.v=v; /* (u,v) inserts v into pq */
				h.w=d[v]=d[u]+w; /* update d[v]. v has weight h.w=d[v] */
				pq.push(h); /* put h into pq */
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
