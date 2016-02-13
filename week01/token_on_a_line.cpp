#include<bits/stdc++.h>

using namespace std;

int main()
{
    const int buf_size = 1024; // depends on problem spec 
    static char buf[buf_size]; // use static var to avoid stack overflow

    fgets(buf, sizeof(buf), stdin);
    strtok(buf, "\n"); // BEWARE: strtok is destructive.
    
    int token_cnt = 0; // counter: line read
    
    for (char *ptr = strtok(buf, " "); ptr !=NULL; ptr = strtok(NULL, " "))
    {
        token_cnt++;
        printf("Token %d is %s\n", token_cnt, ptr);
    }

    return 0;
}