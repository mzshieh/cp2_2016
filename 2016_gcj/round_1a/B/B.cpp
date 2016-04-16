#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ncases;
    scanf("%d",&ncases);
    for(int c = 1; c <= ncases; c++)
    {
        printf("Case #%d:", c);
        int n;
        scanf("%d",&n);
        map<int,int> cnt;
        for(int i = 1; i < n*2; i++)
            for(int j = 0; j < n; j++)
            {
                int x;
                scanf("%d", &x);
                cnt[x]++;
            }
        for(auto it: cnt)
            if(it.second&1)
                printf(" %d",it.first);
        puts("");
    }
    return 0;
}