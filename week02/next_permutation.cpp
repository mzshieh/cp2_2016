#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;
    for(int i = 1; i <= 5; i++)
        for(int j = 0; j < i; j++)
            a.push_back(i);
    for(int i = 0; i < a.size(); i++)
        printf("%d%c",a[i],i==a.size()-1?'\n':' ');
    next_permutation(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++)
        printf("%d%c",a[i],i==a.size()-1?'\n':' ');
    next_permutation(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++)
        printf("%d%c",a[i],i==a.size()-1?'\n':' ');
    return 0;
}