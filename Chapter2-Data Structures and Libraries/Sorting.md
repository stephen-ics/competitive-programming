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
- However, it is also important to note that these sorts take up less space than many quasilinear `O(nlogn)` searches, as these sorts allow you to sort in place

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

## `O(nlogn)` Merge/Heap/Random Quick Sort
### Merge Sort
- The merge sort algorithm recursively divides arrays into two, sorts them, and then recombines them
- The recursively dividing will be defined in one function, while the merging will be defined in another, first the array is recursively divided into its smallest parts on the left, then the left and right arrays of individuals elements are compared and sorted
- Afterwards, the recursive tree will travel upwards to split and sort the next two elements, after this is completed the two sorted arrays are compared with each other and the lower item is placed onto the above array
- This will continue until two final sorted arrays, in which they are compared with each other and a final array is sorted
- Below is the pseudocode for merge sort
  ```c++
  int[] mergeSort(int[] a) {
    if (n == 1) { return a }

    arrayOne = a[0]...a[n/2]
    arrayTwo = a[n/2+1]...a[n]
    
    arrayOne = mergeSort(arrayOne)
    arrayTwo = mergeSort(arrayTwo)
    
    return merge(arrayOne, arrayTwo)
  }
  
  int[] merge(int[] a, int[] b) {
    int[] c;
    
    while(a and b have elements) {
      if(a[0] > b[0] {
        add [b] to the end of c;
        remove b[0] from b;
      } else {
        add [0] to the end of c;
        remove a[0] from a;
      }
    }
  
    // At this point either a or b is empty
    while(a has elements) {
      add [0] to the end of c;
      remove a[0] from a;
    }
    while(b has elements) {
      add b[0] to the end of c;
      remove b[0] from b;
    }

    return c;
  }
  ```
- This algorithm is of time complexity `O(nlogn)`, the merge step visits `n` items when comparing each value of the array, the `logn` comes from the maximum height of the binary tree created, which is on the order of `logn`

### Heaps
#### What is a Heap?
- It is important to know what a heap is before learning about the heapsort
- Heaps, also known as binary heaps are ordered binary trees whos levels are completely filled except for the bottom
- The bottom is filled from left to right and do not need to be completely filled
- There are two types of heaps **max heaps** and **min heaps**
  - Max heaps: value of the node `i <= parent`, max heaps are used for **heap sorts**
  - Min heaps: value of the node `i >= parents`, min heaps are great for **priority queues**
- Heaps can be represented as arrays, where the root of the tree is at index `0` of the array, to get the nodes left child take `index * 2`, to get the nodes right child take `index * 2 + 1`, the nodes parent is `floor(i/2)`
#### Heap Sort!
- A few functions will be utilized when running heap sort
- `build-max-heap`: creates a max-heap from an unsorted array
- `heapify`: similar to build-max-heap, but assumes part of the array is already sorted and therefore is faster (only the first item is out of place, the max heap will repeatedly be compared to its left child until it reaches the bottom and the heap is sorted)
- Heap sort works by creating a max heap, then removing its largest item, and placing the item in a sorted partition, after the max heap is built, heapify is repeatedly called and the max value from the max heap is placed into the sorted partition
- Below is the pseudocode for heap sort
  ```c++
  int[] Heapsort(int[] A) {
    BuildMaxHeap(A)
    for(int i=n, i>1; i--) {
      swap(A[1],A[i]);
      n = n - 1;
      Heapify(A, 1);
    }
  
    return A;
  }
  
   BuildMaxHeap(int[] A) {
    n = elements_in(A)
    for (int i = floor(n/2); i > 1; i--) {
      Heapify(A, i);
    }
  }
  
  Heapify(int[] A, int i) {
    left = 2i;
    right = 2i+1;
    
    if((left <= n) && (A[left] > A[i])) {
      max = left;
    } else {
      max = i;
    }
  
    if((right <= n) && (A[right] > A[max])) {
      max = right;
    }
    
    if(max != i) {
      swap(A[i], A[max]);
      Heapify(A,max);
    }
  }
  ```
- The time complexity of heap sort is `O(nlogn)`, build max heap takes `O(n)` time, heapify runs in `O(logn)` time, but we end up calling it `n-1` times, hence `O(nlogn)` 

### Quick Sort
- When one thinks of quick sort, they should think of the word `pivot`
- A pivot is any item in the array that meets the following three conditions after the array has been sorted
  1. Pivot is in the correct position in the final, sorted array
  2. Items to the left are smaller
  3. Items to the right are larger
- First, the chosen pivot is moved to the end of the array, next two items will be looked for `itemFromLeft`, the first item starting from the left that is larger than the pivot and `itemFromRight`, the first item from the right smaller than the pivot
- Item from left is swapped from item from right, stop when the index of `itemFromLeft` > index of `itemFromRight`, then the `itemFromLeft` is swapped with the pivot, now our pivot is in the correct spot
- The same operation is now performed on the two separate partitions, quick sort is a recursive process
- One popular pivot choosing method is called the "mean of three", where these three items are sorted and the middle item is chosen as the pivot
- Below is the pseudocode for quicksort
  ```c++
  Partition(int[] A, int low, int high) {
    pivot = A[low];
    leftwall = low;
  
    for(int i = low + 1; i < high; i++) {
      if(A[i] < pivot) {
        swap(A[i], A[leftwall]);
        leftwall++
      }
    }
  
    swap(pivot, A[leftwall]);
  
    return leftwall;
  }
  
  Quicksort(int[] A, int low, int high) {
    if (low < high) {
      pivotLocation = Parition(A, low, high);
      Quicksort(A, low, pivot_location);
      Quicksort(A, pivot_location + 1, high;
    }
  }
  ```
- Quicksort has a worst case time complexity of `O(n²)`, but if the pivot is chosen properly, it can be shown to have an average case of `O(nlogn)`

