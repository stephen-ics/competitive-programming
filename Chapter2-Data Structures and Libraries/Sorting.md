# Sorting
- A brief introduction to all linear-sorting algorithms applied to arrays and vectors, these searches will be classified by their time complexity
- The `O(n²)` are usually not recommended to be used in competitive programming problems, and it is usually worth sorting the algorithm once if it will be needed to searched upon multiple times (so we can use binary search)

## `O(n²)` Bubble/Selection/Insertion
### Bubble Sort
- Assume we are aiming to sort the array from smallest to largest
- In bubble sort, two consecutive items will be compared, the items will be swapped if they are out of order, the highest number will *bubble* its way to the top
- Below is the pseudocode for bubble sort
  ```c++
  for(i from 1 to N) {
    for(j from 0 to N-1) {
        if a[j] > a[j + 1] {
            swap (a[j], a[j + 1]);
        }
    }
  }
  ```
- As evident in the two nested for loops, the worst case time complexity is `O(n²)`, in fact, this is the worst sort in this section as you are making every possible comparison

### Selection Sort
- Assume we are aiming to sort the array from smallest to largest
- In selection sort, during each iteration we'll select the smallest item from the unsorted partition and move it to the sorted partition
- The current minimum is kept track of as the array is traversed, the search area decreases as the algorithm plays out
- Below is the pseudocode for selection sort
  ```c++
  for(int j = 0; j < n-1; j++) {
    int iMin = j;
    for (i = j+1; j < n; i++) {
        if(a[i] < a[iMin]) {
        iMin = i;  
      } 
    }
  
    if (iMin != j) {
      swap(a[j], a[iMin]);
    }
  }
  ```
- As it is also in a nested for loop, selection sort also has a time complexity of `O(n²)`

### Insertion Sort
- Assume we are aiming to sort the array from smallest to largest
- In insertion sort, we start from the left and work to the right, examining each item and comparing it to the items on its left
- We then *insert* the item inside its correct position in the array
- Below is the pseudocode for insertion sort
  ```c++
  for (int i = 1; i < length(A)-1) {
    int j = i;
    while j > 0 and A[j-1] > A[j] {
        swap(A[j], A[j-1]);
        j--;
    };
  }
  ```
- Again, as a for loop is nested inside of the while loop, the worst case time complexity is `O(n²)`

