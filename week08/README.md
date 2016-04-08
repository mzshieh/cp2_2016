## Dynamic Programming

Idea: Don't compute the same thing twice.
+   [Old slide](PSPT_lec12_dp.pdf)

### Prefix Sum

+   1D
+   2D

### Coin Exchange

+   Greedy does not always work

### Number of Combination

+   To take or not to take, that is your choice.
+   C(n,k)=C(n-1,k-1)+C(n-1,k)

### 0/1 Knapsack

+   Again, take it or leave it.
+   opt(n,w)=max(opt(n-1,w),price(n)+opt(n-1,w-weight(n)))

### Longest Common Subsequnce

+   Difference between a subsequence and a substring

### Longest Increasing Subsequence

+   Can be transformed into Longest Common Subsequnce
+   Speedup: binary search

### Stick Cutting

+   Can you build a counter example to greedy approach or not?

### Optimal Matrix Multiplication

+   Classic problem

### Tree Diameter

+   Is it DP?

### Traveling Salesperson Problem

+   NP-hard
+   Bit set trick

### Maximum Matching

+   Bit set trick again
+   Admit polynomial time algorithm
   
### 1-by-2 Grid Tiling Problem

+   More bit set trick

### Manhattan wiring

+   [ACM-ICPC Live Archive: 2006 Yokohama](https://icpcarchive.ecs.baylor.edu/external/36/3620.pdf)

### Programming assignment (Due: 23:59:59, Apr 30, 2016)

+   Problem A: [UVa 108](https://uva.onlinejudge.org/external/1/108.pdf)
+   Problem B: [UVa 562](https://uva.onlinejudge.org/external/5/562.pdf)
+   Problem C: [UVa 10154](https://uva.onlinejudge.org/external/101/10154.pdf)
+   Problem D: [NCTU OJ 10027](https://oj.nctu.me/groups/1/problems/10027/)