#include<bits/stdc++.h>

using namespace std;

int main()
{
    // input: n a_1 a_2 ... a_n
    // output: a_1^2 + a_2^2 + ... + a_n^2
    int n;
    scanf("%d",&n);
    int a[n]; // might be illegal!
    for(int i = 0; i < n; i++) scanf("%d",&a[i]);
 
    long long ans = 0LL;
    for(int i = 0; i < n; i++) ans += a[i]*a[i];
    printf("%lld\n",ans);
    return 0;
}