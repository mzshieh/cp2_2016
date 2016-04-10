#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int K, C, S;
    scanf("%d %d %d",&K,&C,&S);
    if(C*S<K)
    {
        puts("IMPOSSIBLE");
        return;
    }
    int pos=0;
    for(int i = 0; i < S && pos < K; i++)
    {
        long long cand=0;
        for(int j = 0; j < C && pos < K; j++, pos++)
            cand = cand*K+pos;
        printf("%lld%c",cand+1,pos==K?'\n':' ');
    }
}

int main()
{
    int T;
    scanf("%d",&T);
    for(int i = 1; i <= T; i++)
    {
        printf("Case #%d: ",i);
        solve();   
    }
    return 0;
}