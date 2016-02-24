#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    for(int i = 0; i < 10; i++)
        s.insert(i*i); // make s = {0,1,4,9,16,25,36,49,64,81}

    // for each loop
    for(auto x: s)
        printf("%d\n",x);
    puts("");
    
    // reverse iterator
    for(auto it = s.rbegin(); it != s.rend(); it++)
        printf("%d\n",*it);

    return 0;
}
