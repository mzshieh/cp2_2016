#include<cstdio>
#include<vector>

using namespace std;

void dfs_visit(int u, vector<vector<int> > &E, vector<bool> &discovered)
{
	int i,v;
	printf("Discover %d\n",u);
	discovered[u]=true; // mark u is discovered
	for(i=0;i<E[u].size();i++) // try all out-going edges
	{
		v=E[u][i];
		if(!discovered[v]) // explore the undiscovered vertex v by (u,v)
			dfs_visit(v,E,discovered);
	}
	printf("%d has been visited\n",u); 
}

int main()
{
	int n,m;	// n is |V|, m is |E|. V={0,...,n-1}
	int s;	// s is the starting vertex
	int i,u,v;
	vector<vector<int> > E; // here we use the adjacency list
	vector<bool> discovered;
	scanf("%d%d%d",&n,&m,&s);
	E.resize(n,vector<int>()); // initialize: empty lists
	discovered.resize(n,false); // initialize: all vertices are not discovered
	for(i=0;i<m;i++) // read the edges
	{
		scanf("%d%d",&u,&v); // read (u,v) where u,v is in {0,...,n-1}
		E[u].push_back(v); // append v to u's adjacency list
	}
	dfs_visit(s,E,discovered); // recursive visit s
	printf("The vertices reachable from %d is:",s);
	for(i=0;i<n;i++)
		if(discovered[i])
			printf(" %d",i);
	printf("\n");
	return 0;
}
