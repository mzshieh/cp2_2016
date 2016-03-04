#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    for(scanf("%d%d",&n,&m); n; scanf("%d%d",&n,&m))
    {
        vector<int> a(n), x(m), y(m), z(m);
        for(int i = 0; i < n; i++) a[i]=i;
        for(int i = 0; i < m; i++) scanf("%d%d%d",&x[i],&y[i],&z[i]);
        int ans = 0;
        do{
            int cnt=0;
            for(int i = 0; i < m; i++)
            {
                if(z[i]>0)
                {
                    if(abs(a[x[i]]-a[y[i]])<=z[i]) cnt++;
                }
                else if(z[i]<0)
                {
                    if(abs(a[x[i]]-a[y[i]])>=-z[i]) cnt++;
                }
            }
            if(cnt==m) ans++;
        }while(next_permutation(a.begin(),a.end()));
        printf("%d\n",ans);
    }
    return 0;
}