# C++ Unordered Maps Library
- Unordered maps, better known as hash maps or dictionaries in python are associative containers that store elements formed by the combination of a key value and a mapped value, which allows for fast retrieval of individual elements based on their keys
- Unordered maps does not store elements in a completely random order, the order is just based on the values of the keys, but they are still organized in a specific data structure
- Internally, the elements in the unordered_map are not sorted in any particular order with respect to either their key or mapped values, but organized into buckets depending on their hash value (with a constant time complexity on average)
- Though each key is unique, each hash value is not, as there may be infinitely many keys but only a finite amount of hash values, elements with the same hash value are stored in the same bucket
- Unordered maps implement the direct access operator `operator[]` which allows for direct access of the mapped value using the key value as an argument

## Container Properties
- Associative: Elements in associative containers are referenced by their key and not by their absolute position in the container
- Unordered: Unordered containers organize their elements using hash tables that allow for fast access to elements by their key
- Map: Each element associates a key to a mapped value
- Unique Keys: No two elements in the container can have equivalent keys
- Allocate-aware: The container uses an allocator object to dynamically handle its storage need

## Member Functions
- `(constructor)`: Construct unordered map
- `(destructor)`: Destroy unordered map
- `operator=`: Assign content

### Capacity:
- `empty`: Test whether container is empty
- `size`: Return container size
- `max_size`: Return maximum size

### Iterators:
- `begin`: Return iterator to beginning (even though elements are not in a sorted order, this iterator allows you to iterate through all elements of the container in a defined manner)
- `end`: Return iterator to end
- `cbegin`: Return const_iterator to beginning
- `cend`: Return const_iterator to end

### Element Access:
- `operator[]`: Access element
- `at`: Access element

### Element Lookup:
- `find`: Get iterator pointing to key-value pair, if there is no key return the end() iterator
- `count`: Count elements with a specific key, it returns 1 if the key is present and 0 if they key is not present
- `equal_range`: Get range of elements with a specific key, if the key is found the first iterator points to the element with that key and the second iterator points to one position past the last element with that key, else both return the end() iterator

### Modifiers:
- `emplace`: Construct and insert element
- `emplace_hint`: Construct and insert element with hint
- `insert`: Insert elements
- `erase`: Erase elements
- `clear`: Clear content (remove all elements)
- `swap`: Swap content (exchange content between two unordered maps)

### Buckets
- `bucket_count`: Return number of buckets
- `max_bucket_count`: Return maximum number of buckets
- `bucket_size`: Return bucket size
- `bucket`: Locate element's bucket

### Hash Policy
Hash policies help control how elements are distributed in the internal data structure
- `load_factor`: Return load factor, the ratio of the number of elements in the container to the number of buckets, helps you understand how full a container is, a high load factor could lead to increased collisions and decreased performance
- `max_load_factor`: Get or set maximum load factor
- `rehash`: Set number of buckets
- `reserve`: Request a capacity change, reserving capacity in advance can reduce the need for rehashing as elements are inserted, improving performance

### Observers
- `hash_function`: Get has function
- `key_eq`: Get key equivalence predicate
- `get_allocator`: Get allocator

