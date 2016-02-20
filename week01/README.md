## Lecture 1: Introduction

### Develop environment
The instructor recommends [Cloud 9](https://c9.io/). National Colligiate
Programming Contest (NCPC) and International Colligiate Programming Contest 
(ICPC) usually provide GNU/Linux.

### Terminal

+   Compile
    +   GNU Compiler Collection (`gcc` for C and `g++` for C++)
        +   `-o`: set output
            +   Without `-o`, the default output is `a.out`
        +   `-O2`: optimization
        +   `-std=c11`: use C11
        +   `-std=c++11`: use C++11
    +   Java: `javac` Main.java
+   Execution
    +   `./a.out`
    +   `java Main`
        +   `-Xmx=1024m`: set the maximum heap memory
        +   `-Xss=8m`: set the maximum stack memory
+   I/O redirection
    +   Input: `<`
    +   Output: `>`
    +   Error: `2>`
    +   Example: `./a.out < the.in > the.out 2> the.err`
+   Execution time measurenment
    +   Use `time`
    +   Example: `time ./a.out < the.in > the.out`
        +   Runs `a.out`
        +   Use `the.in` as the input
        +   `the.out` stores the output
        +   The terminal displays the error messages and execution time.

### I/O processing templates

+	[`eof_fgets.cpp`](eof_fgets.cpp) for line-based input terminated by End-Of-File
+	[`eof_scanf.cpp`](eof_scanf.cpp) for token-based input terminated by End-Of-File
+	[`token_on_a_line.cpp`](token_on_a_line.cpp) for variable numbers of tokens on a line

### Online judge systems

The programming assignments are selected from the first 3 of the following online judge systems

+   [UVa](https://uva.onlinejudge.org/)
+   [CodeForces](http://codeforces.com/)
+   [NCTU OJ](https://oj.nctu.me/)
    +   In order to read the problem statements, you should perform the following steps.
        1. Sign in.
        2. Click "Global" near the upper-right corner.
        3. Select group.
        4. Click the orange enter button to register PCCA group.
+   [PKU](http://poj.org/)
+   [AtCoder](http://atcoder.jp/)
+   [HDOJ](http://acm.hdu.edu.cn/)

### Judge responses

Sample problems:
[CodeForces 319 Div 2 A](http://codeforces.com/contest/577/problem/A), 
[CodeForces 340 Div 2 A](http://codeforces.com/problemset/problem/617/A), 
[CodeForces 340 Div 2 B](http://codeforces.com/problemset/problem/617/B). 

+   CE - Compilation Error

    CodeForces 340 Div 2 A: [`CE-cf340_div2_A.cpp`](CE-cf340_div2_A.cpp)
+   WA - Wrong Answer

    CodeForces 340 Div 2 A: [`WA-cf340_div2_A.cpp`](WA-cf340_div2_A.cpp)
+   RE - Rumtime Error

    CodeForces 319 Div 2 A: [`RE-cf319_div2_A.c`](RE-cf319_div2_A.c)
+   TLE - Time Limit Exceeded

    CodeForces 319 Div 2 A: [`TLE-cf319_div2_A.c`](TLE-cf319_div2_A.c)
    
    CodeForces 340 Div 2 B: [`TLE-cf340_div2_B.cpp`](TLE-cf340_div2_B.cpp)
+   MLE - Memory Limit Exceeded

    CodeForces 319 Div 2 A: [`MLE-cf319_div2_A.c`](MLE-cf319_div2_A.c)
+   AC - Accepted

    CodeForces 319 Div 2 A: [`AC-cf319_div2_A.c`](AC-cf319_div2_A.c)
    
    CodeForces 340 Div 2 A: [`AC-cf340_div2_A.cpp`](AC-cf340_div2_A.cpp)
    
    CodeForces 340 Div 2 B: [`AC-cf340_div2_B.cpp`](AC-cf340_div2_B.cpp)

### Programming Assignment (Due: 23:59:59, Mar 1, 2016)
Please do not register this course if you cannot accomplish following five problems.

+   Problem A: [NCTU OJ 10040](https://oj.nctu.me/groups/2/problems/10040/)
+   Problem B: [NCTU OJ 10041](https://oj.nctu.me/groups/2/problems/10041/)
+   Problem C: [NCTU OJ 10042](https://oj.nctu.me/groups/2/problems/10042/)
+   Problem D: [NCTU OJ 10043](https://oj.nctu.me/groups/2/problems/10043/)
+   Problem E: [NCTU OJ 10044](https://oj.nctu.me/groups/2/problems/10044/)

Remark: In order to read the problem statements, you should perform the following steps.

1. Sign in.
2. Click "Global" near the upper-right corner.
3. Select group.
4. Click the orange enter button to register PCCA group.
