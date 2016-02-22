#include<bits/stdc++.h>

using namespace std;

int cnt=0;
int seq[10];

void pairing(int n, int depth)
{
    static int occupied[10]={0};
    if(n == depth)
    {
        printf("%d:",++cnt);
        for(int i = 0; i < n; i+=2)
            printf(" (%d,%d)",seq[i],seq[i+1]);
        puts("");
        return;
    }
    for(int i = 0; i < n; i++)
    {
        if(occupied[i]) continue;
        occupied[i]++;
        seq[depth]=i;
        for(int j = i; j < n; j++)
        {
            if(occupied[j]) continue;
            occupied[j]++;
            seq[depth+1]=j;
            pairing(n,depth+2);
            occupied[j]--;
        }
        occupied[i]--;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n>10) puts("too many");
    else if(n<1) puts("none");
    else if(n % 2==1) puts("odd");
    else pairing(n,0);
    return 0;
}