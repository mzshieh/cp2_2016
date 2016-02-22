#include<bits/stdc++.h>

using namespace std;

bool ok(vector<int> &a)
{
    for(int i = 0; i < a.size(); i+=2)
        if(a[i]%2==0) return false;
    return true;
}

void perm(int n)
{
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        a[i]=i+1;
    do{
        if(ok(a))
            for(int i = 0; i < n; i++)
                printf("%d%c",a[i],i==n-1?'\n':' ');

    }while(next_permutation(a.begin(),a.end()));
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n>12) puts("too many");
    else if(n<1) puts("none");
    else perm(n);
    return 0;
}