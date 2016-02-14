#include<bits/stdc++.h>

using namespace std;

long long solve(int *ptr, int n)
{
    if(n==0) return 1LL;
    long long ret = 0LL;
    int acc = 0;
    for(int i = 0; i < n; i++)
    {
        if(ptr[i]==1) acc++;
        if(acc==1) ret += solve(ptr+i+1, n-i-1);
    }
    return ret;
}

int main()
{
    int n, a[100];
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("%lld\n", solve(a,n));
    return 0;
}