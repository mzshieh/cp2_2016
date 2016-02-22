#include<bits/stdc++.h>

using namespace std;

void comb(int n, int k)
{
    for(int i = 0; i < (1<<n); i++)
    {
        vector<int> v;
        for(int j = 0; j < n; j++)
            if(i & (1<<j))
                v.push_back(j+1);
        if(v.size()==k)
            for(int j = 0; j < v.size(); j++)
                printf("%d%c",v[j],j==v.size()-1?'\n':' ');
    }
}

int main()
{
    int n, k;
    scanf("%d%d",&n,&k);
    if(n>9) puts("too many");
    else if(n<1) puts("too less");
    else comb(n,k);
    return 0;
}