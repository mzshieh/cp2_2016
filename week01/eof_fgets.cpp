#include<bits/stdc++.h>

using namespace std;

int main()
{
    const int buf_size = 1024; // depends on problem spec 
    static char buf[buf_size]; // use static var to avoid stack overflow
    
    int line_cnt = 0; // counter: line read
    
    while ( fgets(buf, sizeof(buf), stdin) != NULL )
    {
        line_cnt++;
    }
    
    printf("%d\n", line_cnt);
    
    return 0;
}