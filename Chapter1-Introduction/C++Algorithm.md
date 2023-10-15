# Algorithm
- The header `<algorithm>` defines a collection of functions especially designed to be used on ranges of elements
- A range is any sequence of objects that can be accessed through iterators or pointers such as an array or an instance of some of this STL containers
- Notice that algorithms operate through iterators directly on the values, not affecting in any way the structure of any possible container (it never affects the size or storage allocation of the container)

## Functions in <algorithm>
### Non-Modifiying Sequence Operations:
- `all_of`: Test condition on all elements in range
- `any_of`: Test if any elements in range fulfills condition
- `none_of`: Test if no elements fulfill condition
- `for_each`: Apply function to range
- `find`: Find value in range
- `find_if`: Find elements in range
- `find_if_not`: Find element in range (negative condition)
- `find_end`: Find last subsequence in range
- `find_first_of`: Find element from set in range
- `adjacent_find`: Find equal adjacent elements in range ()
- `count`: Count appearances of value in range
- `count_if`: Return numbers of elements in range satisfying condition
- `mismatch`: Return first position where two ranges differ
- `equal`: Test whether the elements in two ranges are equal
- `is_permutation`: Test whether range is permutation or another
- `search`: Search range for subsequence
- `search_n`: Search range for elements

### Modifying-Sequence Operations:
- `copy`: Copy range of elements
- `copy_n`: Copy elements
- `copy_if`: Copy certain elements of range
- `copy_backward`: Copy range of elements backward
- `move`: Move range of elements
- `move_backward`: Move range of elements backward
- `swap`: Exchange values of two objects
- `swap_ranges`: Exchange values of objects pointed to by two iterators
- `iter_swap`: Exchange values of objects pointed to by two iterators
- `transform`: Transform range
- `replace`: Replace value in range
- `replace_if`: Replace values in range
- `replace_copy`: Copy range replacing value
- `replace_copy_if`: Copy range replacing values
- `fill`: Fill range with value
- `fill_n`: Fill sequence with value
- `generate`: Generate values for range with function
- `generate_n`: Generate values for sequence with function
- `remove`: Remove value from range
- `remove_if`: Remove elements from range
- `remove_copy`: Copy range removing value
- `remove_copy_if`: Copy range removing values
- `unique`: Remove consecutive duplicates in range
- `unique_copy`: Copy range removing duplicates
- `reverse`: Reverse range
- `reverse_copy`: Copy range reversed
- `rotate`: Rotate left the elements in range
- `rotate_copy`: Copy range rotated left
- `random_shuffle`: Randomly rearrange elements in range
- `shuffle`: Randomly rearrange elements in range using generator