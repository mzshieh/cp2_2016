#include<bits/stdc++.h>

using namespace std;

int solve()
{
    char buf[128];
    int ans=0;
    scanf("%s",buf);
    buf[strlen(buf)+1]='\0';
    buf[strlen(buf)]='+';
    for(int i = 1; buf[i]; i++)
        if(buf[i]!=buf[i-1])
            ans++;
    return ans;
}

int main()
{
    int T;
    scanf("%d",&T);
    for(int i = 1; i<=T; i++)
        printf("Case #%d: %d\n",i, solve());
    return 0;
}