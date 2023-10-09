# Chapter 1 - Introduction
## General Competitve Programming Tips
- Tip 0: Type Code Faster! 
- Tip 1: Quickly Identify Problem Types
  - In ICPCs, the constants are given a set of problems of varying types, below is a table full of problem types and their rate of appearance in ICPC Regional competitions 

    | Category               | Appearance Frequency | 
    |------------------------|----------------------|
    | Ad Hoc                 | 2-3                  |                     
    | Complete Search        | 1-2                  |                    
    | Divide & Conquer       | 0-1                  |                     
    | Greedy                 | 0-1                  |                     
    | Dynamic Programming    | 2-3                  |                      
    | Graph                  | 1-2                  |                     
    | Mathematics            | 1-2                  |                     
    | String Processing      | 1                    |                     
    | Computational Geometry | 1                    |                      
    | Some Harder Problems   | 0-1                  |  
- Tip 2: Do Algorithm Analysis
  - Once you have designed a particular algorithm, you must ask yourself: Given the maximum input bound (usually given in the problem set), can the currently developed algorithm with its time/space complexity pass the tim/memory limit given for that particular problem?
  - Sometimes there is more than one way to attack a problem, however some may be incorrect and not fast enough
  - Rule of thumb: Brainstorm many possible algorithm and pick the simplest one that works (fast enough to pass the time and memory limit)
    - Scenario 1: 
      - The maximum size of input `n` is `100K` or `10^5`, and your algorithm is of order O(n^2)
      - Common sense tells you that `(100K)^2` is an extremely big number, since computers are quite fast and process `1M` in seconds, you can infer whether or not the algorithm will pass the time complexity
    - Scenario 2:
      - You can only devise an algorithm of order `O(n^4)` but the input is `n <= 10`
      - This means your algorithm is only `10^4` which is actually quite fast, which means you could already be done!
  - By analyzing the complexity of your algorithm and the given input bound and stated time/memory limit, you can judge whether or not you should try a coding algorithm
- Below is a table comprising of various time complexities and their usual Worst AC Algorithm
  
  | n                      | Worst AC Algorithm                                                |
  |------------------------|-------------------------------------------------------------------|
  | <= 10                  | O(n!), O(n^6) e.g Enumerating a Permutation                       |                     
  | <= 20                  | O(2^n), O(n^5) e.g DP + Bitmask Technique                         |                    
  | <= 50                  | O(n^4) e.g DP with 3 Dimensions + O(n) loop, Combination/Choosing |                     
  | <= 100                 | O(n^3) e.g Floyd Warshall's                                       |                     
  | <= 1K                  | O(n^2) e.g Bubble/Selection/Insertion Sort                        |                      
  | <= 100K                | O(nlog2n) e.g Merge Sort, Building Segment Tree                   |                     
  | <= 1M                  | O(n), O(log2n), O(1) (e.g to read input)                          |

## Additional rules of thumb
  ### Signed/Unsigned Integers
  - `2^10 ≈ 10^3`, `2^20 ≈ 10^6`
  - Max 32-bit signed integer: `2^23 - 1 ≈ 2 x 10^9` (or up to ≈ 9 decimal digits)
  - Max 64-bit signed integer (long long) is `2^63 - 1 ≈ 9 x 10^18` (or up to 18 digits)
  - Used 'unsigned' if positive numbers are needed `[0...2^64 - 1]`
  - If you need to store integers `n` where `n >= 2^64`, you need to use the Big Integer Technique
  ### General Time Complexity Assumptions
  - Program with nested loops of depth `k` running about `n` iterations each has `O(n^k)` complexity
  - If your program is recursive with `b` recursive calls per level and has `L` levels, the program has roughly `O(b^L)` complexity
    - This is an upperbound, the actual complexity depends on what actions are done per level and whether pruning is possible
  - Dynamic Programming algorithms which fill a 2-D matrix in `O(k)` per cell is in `O(k x n^2)`
  - The best time complexity of a comparison-based sorting algorithm is `Ω(n log2n)`
  - Most of the time, `O(nlog2n)` algorithms will be sufficient for most contest problems

