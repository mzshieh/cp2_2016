#include<bits/stdc++.h>

using namespace std;

int main()
{
    const int buf_size = 1024; // depends on problem spec 
    static char buf[buf_size]; // use static var to avoid stack overflow
    
    int token_cnt = 0; // counter: line read
    
    while ( scanf("%s", buf) == 1 )
    {
        token_cnt++;
    }
    
    printf("%d\n", token_cnt);
    
    return 0;
}