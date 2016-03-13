#include<bits/stdc++.h>

using namespace std;

int n, m;
char grid[100][101];

int main()
{
    scanf("%d%d",&n,&m);
    for(int i = 0; i < n; i++)
        scanf("%s",grid[i]);
    int x, y;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(grid[i][j]=='@')
                x = i, y = j;
    queue<pair<int,int> > q;
    q.push(make_pair(x,y));
    while(!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        grid[x][y]='@';
        if(x>0 && grid[x-1][y]=='.') q.push(make_pair(x-1,y));
        if(x<n && grid[x+1][y]=='.') q.push(make_pair(x+1,y));
        if(y>0 && grid[x][y-1]=='.') q.push(make_pair(x,y-1));
        if(y<m && grid[x][y+1]=='.') q.push(make_pair(x,y+1));
    }
    for(int i = 0; i < n; i++)
        puts(grid[i]);
    return 0;
}