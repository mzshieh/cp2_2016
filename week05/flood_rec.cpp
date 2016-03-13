#include<bits/stdc++.h>

using namespace std;

int n, m;
char grid[100][101];

void flood(int x, int y)
{
    if(x<0 || x>=n || y<0 || y>=m) return;
    if(grid[x][y]!='.') return;
    grid[x][y]='@';
    flood(x+1,y);
    flood(x-1,y);
    flood(x,y+1);
    flood(x,y-1);
    return;
}

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
    grid[x][y]='.';
    flood(x,y);
    for(int i = 0; i < n; i++)
        puts(grid[i]);
    return 0;
}