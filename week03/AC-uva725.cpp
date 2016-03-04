#include<bits/stdc++.h>

using namespace std;

bool is_ok(int x, int n)
{
    char result[32];
    int cnt[10]={0};
    sprintf(result,"%05d%05d",x,x*n);
    for(int i = 0; result[i]; i++)
        cnt[result[i]-'0']++;
    for(int i = 0; i < 10; i++)
        if(cnt[i]!=1) return false;
    return true;
}

int main()
{
    int n;
    bool is_first=true;
    for(scanf("%d",&n); n; scanf("%d",&n))
    {
        int cnt=0;
        if(!is_first) puts("");
        is_first=false;
        for(int i = 1234; i <= 98765; i++)
        {
            if(is_ok(i,n))
            {
                printf("%05d / %05d = %d\n",i*n,i,n);
                cnt++;
            }
        }
        if(cnt==0) printf("There are no solutions for %d.\n",n);
    }
    return 0;
}