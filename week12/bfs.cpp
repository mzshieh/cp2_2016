#include<cstdio>
#include<vector>
#include<queue>

using namespace std;

int main()
{
	int n,m;	// n is |V|, m is |E|. V={0,...,n-1}
	int s;	// s is the starting vertex
	int i,u,v;
	vector<vector<int> > E; // here we use the adjacency list
	queue<int> Q; // BFS needs a queue
	vector<bool> enqueued;
	scanf("%d%d%d",&n,&m,&s);
	E.resize(n,vector<int>()); // initialize: empty lists
	for(i=0;i<m;i++) // read the edges
	{
		scanf("%d%d",&u,&v); // read (u,v) where u,v is in {0,...,n-1}
		E[u].push_back(v); // append v to u's adjacency list
	}
	enqueued.resize(n,false); // initialize: no vertices are visited
	Q.push(s); // put the starting vertex into Q
	enqueued[s]=true;
	printf("Vertex %d is enqueued\n",s);
	while(!Q.empty())
	{
		u=Q.front(); // visit the first element in Q
		Q.pop();     
		printf("Vertex %d is dequeued\n",u);
		for(i=0;i<E[u].size();i++) // try all edges of u
		{
			v=E[u][i]; // edge (u,v)
			if(!enqueued[v]) // if v is not enqueued, add it into Q
			{
				Q.push(v);
				enqueued[v]=true;
				printf("Vertex %d is enqueued\n",v);
			}
		}
		printf("Vertex %d is visited\n",u);
	}
	printf("The vertices reachable from %d is:",s);
	for(i=0;i<n;i++)
		if(enqueued[i]) // i is reachable iff i is enqueued
			printf(" %d",i);
	printf("\n");
	return 0;
}
