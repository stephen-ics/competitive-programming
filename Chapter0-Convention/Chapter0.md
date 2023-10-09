# Convention
- Many C++ programmers will use typedefs, shortcuts, and macros to speed up coding time, a few are listed in the section below
```c++
    #define _CRT_SECURE_NO_DEPRECATE // suppress some compilation warning messages (for Microsoft VC++ users)
    
    // Shortcuts for "common" data types in contests
    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int, int> ii;
    typedef vector<ii> vii;
    typedef set<int> si;
    typedef map<string, int> msi;
    
    // To simplify repetitions/loops (define your loop style and stick with it!)
    #define REP(i, a, b) \
        for (int i = int(a); i <= int(b); i++) // a to b, variable i is local
    #define TRvi(c, it) \
        for (vi::iterator it = (c).begin(); it != (c).end(); it++)
    #define TRvii(c, it) \
        for (vii::iterator it = (c).begin(); it != (c).end(); it++)
    #define TRmsi(c, it) \
        for (msi::iterator it = (c).begin(); it != (c).end() it++
        
    #define INF 2000000000 // 2 billion
    // If you need to recall how to use memset
    #define MEMSET_INF 127 // about 2B
    #define MEMSET_HALF_INF 63 // about 1B
    //memset(dist, MEMSET_INF, sizeof dist); // useful to initialize shortest path distances
    //memset(dp_memo, -1, sizeof dp_memo); // useful to initialize DP memoization table
    //memset(arr, 0, sizeof arr); // useful to clear array integers
```
## Explanation
- Okay! So what was that huge line of code?
- `typedef` creates aliases for user-defined types (`ll`, `vi`, `msi`) based on built-in or standard library types
  - Then you would initialize it like any other variable e.g
  ```c++
    #include <iostream>

    // Typedef for long long
    typedef long long ll;
    
    int main() {
        // Initializing a variable with ll
        ll myLongLong = 123456789012345LL; // Note the 'LL' suffix to indicate a long long literal

        return 0;
    }
  ```
### Macros
- Macros simplify code length and need to be defined with the keyword `define` before it can be used in actual code
- Macros like `REP`, `TRvii`, and `TRmsi` are defined to simplify loop constructs
  - `REP(i, a, b`: This macro is used to create a for loop that iterates from `a` to `b` with a loop variable `i`
  - This is commonly used to iterate over indices or values in an array or vector, for example:
  ```c++
    #include <iostream>
  
    #define REP(i, a, b) for (int i = int(a); i <= int(b); i++) // how a macro is defined
    
    int main() {
    int a = 1;
    int b = 5;
    
        // Using the REP macro to iterate from a to b
        REP(i, a, b) {
            std::cout << "Iteration " << i << ": Hello, World!" << std::endl;
        }
    
        return 0;
    }
  ```
  - The output of this program will be 
  ```
    Iteration 1: Hello, World!
    Iteration 2: Hello, World!
    Iteration 3: Hello, World!
    Iteration 4: Hello, World!
    Iteration 5: Hello, World!
  ```
  - `TRvi(c, it)`, `TRvii(c, it)` and `TRmsi(c, it)`: These macros are used to simplify iterating over elements of vectors (`vi`, `vii`) and maps (`msi`) using iterators (`it`)
  - Iterators are usually predefined by the C++ Standard Library, one can initialize it

### Constants
- `INF`: This is a constant representing a large value (2 billion in this case) that is often used to represent infinity in algorithms
- `MEMSET_INF` and `MEMSET_HALF_TIME`: These constants are used as arguments for the `memset` function to initialize arrays with specific values

# Abbreviations
A list of important abbreviations that will be referenced throughout this repository
- ACM : Association of Computing Machinery
- AC : Accepted
- APSP : All-Pairs Shortest Paths
- AVL : Adelson-Velskii Landis (BST)
- BNF : Backus Naur Form
- BFS : Breadth First Search
- BST : Binary Search Tree
- CC : Coin Change
- CCW : Counter ClockWise
- CS : Computer Science
- DAG : Directed Acyclic Graph
- DAT : Direct Addressing Table
- D&C : Divide and Conquer
- DFS : Depth First Search
- DP : Dynamic Programming
- ED : Edit Distance
- GCD : Greatest Common Divisor
- ICPC : International Collegiate Programming
Contest
- IOI : International Olympiad in Informatics
- LA : Live Archive 
- LCA : Lowest Common Ancestor
- LCM : Lowest Common Multiple
- LCS : Longest Common Subsequence
- LIS : Longest Increasing Subsequence
- MCM : Matrix Chain Multiplication
- MCMF : Min-Cost Max-Flow
- MLE : Memory Limit Exceeded
- MST : Minimum Spanning Tree
- MWIS : Maximum Weighted Independent Set
- OJ : Online Judge
- PE : Presentation Error
- RB : Red-Black (BST)
- RMQ : Range Minimum Query
- RSQ : Range Sum Query
- RTE : Run Time Error
- SSSP : Single-Source Shortest Paths
- STL : Standard Template Library
- TLE : Time Limit Exceeded
- WA : Wrong Answer
- WF : World Finals