# Data Structures
- Data structure is a way to store and organize data in order to support efficient insertions, queries, searches, updates, and deletions
- Although a data structure in itself does not solve the given programming problem, the algorithm operating on it does, using the most efficient data structure for the given problem may be a difference between passing or exceeding the problem's time limit
- This chapter will be divided into two parts, section 2.2 which contains basic data structures with built-in libraries, and section 2.3 containing more advanced data structures for which we will have to build our own libraries

## 2.2 Data Structures with Built-in Libraries
### 2.2.1 Linear Data Structures
- A data structure is classified as linear if its elements for a sequence, mastery of all these basic linear structures is a must in order to do well in today's programming contests
  - Static Array in C/C++ and Java 
    - As the maximum input size is normally mentioned in a programming problem, it is used to declare the array size + a small buffer
    - Typical dimensions of the array are 1-D, 2-D, 3-D, and rarely goes beyond 4-D, typical operations for array are accessing certain indices, sorting the array, linearly scanning, or binary searching the array
  - Resizeable Array a.k.a Vector
    - All else the same as static array but has auto-resize feature
    - Using vector over array is better if array size is unknown beforehand, usually we initialize the size with some guess value for better performance
    - Typical operations are `push_back()`, `at()`, `[] operator`, `erase()`, and typically use iterator to scan the content of the vector

#### Efficient Sorting and Searching in Static/Resizeable Array
- There are two central operations commonly performed on array: sorting and searching
- There are many sorting algorithms mentioned in CS textbooks, which we classify as:
  1. `O(n²)` comparison-based sorting algorithms: Bubble/Selection/Insertion Sort
    - These algorithms are slow and usually avoided, but understanding them is important
  2. `O(nlogn)` comparison-based sorting algorithms: Merge/Heap/Random Quick Sort
     - We can use C++ STL sort, partial_sort, stable_sort, in <algorithm> to achieve this purpose, we only need to specify the required comparison function and these library routines will handle the rest
  3. `O(n)` special purpose sorting algorithms: Counting Sort, Radix Sort, Bucket Sort, these special purpose algorithms are good to know as they can speed up sorting time if the problem has certain characteristics, like a small range of integers for Counting Sort, but they rarely appear in programming contests
- However, there are only three main ways to search for an item in an Array
  1. O(n) Linear Search from index 0 to index n - 1 (avoid this in programming contests)
  2. O(logn) Binary Search: use `lower_bound` in C++ STL <algorithm>, if the input is unsorted, it is fruitful to sort it just once using an O(nlogn) sorting algorithm above in order to use Binary Search *many times*
  3. O(1) with Hashing (but we can live without hashing for most contest problems)