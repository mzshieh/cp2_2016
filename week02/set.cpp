#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    printf("%d\n",*s.rbegin());
    printf("%d\n",*s.begin());
    printf("%d\n",(int)s.count(2));
    s.erase(2);
    printf("%d\n",*s.begin());
    return 0;
}