#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int,int> mapping;
    for(int i = 0; i < 10; i++)
        mapping[i]=i*i; // map i into i*i

    // for each loop
    for(auto x: mapping)
        printf("%d %d\n",x.first,x.second);
    puts("");
    
    // reverse iterator
    for(auto it = mapping.rbegin(); it != mapping.rend(); it++)
        printf("%d %d\n",it->first,it->second);

    return 0;
}
