# C++ Vector Library
- The vector will be the only data structure covered in this section, the second section (data structures) will cover all other commonly used data structures
- Just like arrays, vectors are contiguous storage locations for their elements, this means elements can be accessed sing offsets on regular pointers to its elements just as efficiently as arrays
- However, unlike arrays, their size can change dynamically, with their storage being handled automatically by the container
- Overall, you should use the vector on general cases where you know the size (number of elements) you want to add and you want to append to the array

## Dynamic Allocation
- Dynamic allocation in the context of vectors and other data structures refers to the initial allocation of memory when a data structure is created
- This initial allocation of memory provides some capacity which is greater or equal to the size (number of elements) the vector currently holds
- The goal is to allocate enough memory to avoid frequent reallocations while still allowing the vector to grow

## Reallocations
- Reallocation occurs when the vector is already holding the maximum amount of elements the initial capacity allowed for
- When this happens, the vector dynamically allocates a new, larger block of memories and copies the existing elements from the old block to the new one, and then adds the new element
- This ensures the vector can continue to grow beyond its initial capacity, but it is quite inefficient and should ideally be avoided
- Compared to arrays, vectors consume more memory in exchange for the ability to manage storage and grow dynamically in an efficient way

## Container Properties
- Sequence: Elements in sequence containers are ordered in a strict linear sequence, this means individual elements can be accessed by their position in the sequence
- Dynamic Array: Allows direct access to any element in the sequence, even through pointer arithmetic, and provides relatively fast addition/removal of elements at the end of the sequence
- Allocator-aware: The container uses an allocator object to dynamically handle its storage needs

## Member Functions
- `(constructor)`: Construct vector
- `(destructor)`: Vector destructor
- `operator=`: Assign content

### Iterators
- `begin`: Return iterator to beginning
- `end`: Return iterator to end (represents the position after the last element when you've gone through all elements in the forward direction)
- `rbegin`: Return reverse iterator to reverse beginning
- `rend`: Return reverse iterator to reverse end (returns a reverse iterator pointing to the last element of the container, the element before end(), allows you to traverse in reverse order)
- `cbegin`: Return const_iterator to beginning (returns a constant iterator, same as begin but enforces that you won't modify the elements through the iterator)
- `cend`: Return const_iterator to end
- `crbegin`: Return const_reverse_iterator to reverse beginning
- `crend`: Return const_reverse_iterator to reverse end

### Capacity
- `size`: Return size
- `max_size`: Return maximum size --> theoretical maximum number of elements the vector can hold given memory constraints (limited by the system's memory and address space)
- `resize`: Change size
- `capacity`: Return size of allocated storage capacity --> the maximum number of elements that the vector can currently hold without the need for reallocation
- `empty`: Test whether vector is empty
- `reserve`: Request a change in capacity
- `shrink_to_fit`: Shrink to fit

### Element Access:
- `operator[]`: Access element
- `at`: Access element
- `front`: Access first element
- `back`: Access last element
- `data`: Access data

### Modifiers:
- `assign`: Assign vector content
- `push_back`: Add element at the end of the vector
- `pop_back`: Delete last element
- `insert`: Insert elements
- `erase`: Erase elements
- `swap`: Swap content
- `clear`: Clear content
- `emplace`: Construct and insert element
- `emplace_back`: Construct and insert element at the end

### Allocator:
- `get_allocator`: Get allocator

### Non-member function-overloads:
- `relational operations`: Relational operators for vectors
- `swap`: Exchange contents of vectors

### Template specialization
- `vector<bool>`: Vector of booleans