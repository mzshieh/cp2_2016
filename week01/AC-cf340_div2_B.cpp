#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, previous_one=-1;
    long long ans = 1LL;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x==1)
        {
            if(previous_one >= 0) ans *= i-previous_one;
            previous_one = i;
        }
    }
    if(previous_one >= 0) cout << ans << endl;
    else cout << 0 << endl;
    return 0;
}