#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i = 1; i <=T; i++)
    {
        printf("Case #%d: ",i);
        long long x;
        scanf("%lld",&x);
        if(x==0LL) puts("INSOMNIA");
        else
        {
            int cnt[10]={0};
            int ok=0;
            long long ans=0;
            while(ok<10)
            {
                ans+=x;
                for(long long y = ans; y>0LL; y/=10)
                    if(cnt[y%10]==0) ok++, cnt[y%10]=1;
            }
            printf("%lld\n",ans);
        }
    }
	return 0;
}
