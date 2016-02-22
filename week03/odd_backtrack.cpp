#include<bits/stdc++.h>

using namespace std;

void perm(int n, int depth)
{
    static int occupied[13]={0};
    static int seq[12];
    if(n==depth)
    {
        for(int i = 0; i < n; i++)
            printf("%d%c",seq[i],i==n-1?'\n':' ');
    }
    else
    {
        for(int i = (depth%2==0)?1:2; i <= n; i+=2)
        {
            if(occupied[i]>0) continue;
            occupied[i]++;
            seq[depth]=i;
            perm(n,depth+1);
            occupied[i]--;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n>12) puts("too many");
    else if(n<1) puts("none");
    else perm(n,0);
    return 0;
}