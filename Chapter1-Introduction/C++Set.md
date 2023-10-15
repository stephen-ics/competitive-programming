# Set
- Sets are containers that store **unique** elements following a **specific** order
- In a set, the value of an element also identifies it (the value is itself the key), and each value must be unique
- The value of the elements in a set cannot be modified once in the container, but they can be inserted or removed from the container
- Internally, the elements in a set are always sorted following a specific **strict weak ordering** criterion indicated by its internal comparison object (of type `compare`)
- Set containers are generally slower than `unordered_set` containers to access individual elements by their key, but they allow the direct iteration on subsets based on their order
- Sets are typically as **binary search elements**

## Set Container Properties
- Associative: Elements in associative containers are referenced by their keys and not by their absolute position in the container
- Ordered: The elements in the container follow a strict order at all times, all inserted elements are given a position in this order
- Set: The value of an element is also the key used to identify it
- Unique keys: No two elements i n the container can have equivalent keys
- Allocator-aware: The container uses an allocator object to dynamically handle its storage needs

## Template Parameters
- `T` (Type of element you want to store in the set)
- `Compare` (Binary Predicate)
  - A binary predicate that takes two arguments of the same type of the same type as the elements and returns a `bool`
  - The set uses this expression to establish the order of elements in the container and to check if two element keys are equivalent
  - This can be a function pointer or a function object
  - By default it uses `std::less<T>`, which uses the less-than operator`(a < b)` to establish the order
  - Aliases as member types are `set::key_compare` and `set::value_compare`
- `Alloc` (Type of the Allocator)
  - This parameter specifies the type of the allocator object used to define the storage allocation model
  - You can provide a custom allocator if you have specific memory management requirements for the set

## Member Functions
- `constructor`: Constructor set
- `destructor`: Set destructor
- `operators=`: Copy container content

### Iterators
- `begin`: Return iterator to beginning
- `end`: Return iterator to end
- `rbegin`: Return reverse iterator to reverse beginning
- `rend`: Return reverse iterator to reverse end
- `cbegin`: Return const_iterator to beginning
- `cend`: Return const_iterator to end
- `crbegin`: Return const_iterator to reverse beginning
- `crend`: Return const_reverse_iterator to reverse end

### Capacity
- `empty`: Test whether container is empty
- `size`: Return container size
- `max_size`: Return maximum size

### Modifiers
- `insert`: Insert element
- `erase`: Erase element
- `swap`: Swap content
- `clear`: Clear content
- `emplace`: Construct and insert element
- `emplace_hint`: Construct and insert element with hint

### Observers
- `key_comp`: Return comparison object
- `value_comp`: Return comparison object

### Operations
- `find`: Get iterator to element (get an iterator of the object, if the iterator is not set.end(), it means the object is found/exists in the set, use `*` to unwrap the iterator and return the value found)
- `count`: Count elements with a specific value
- `lower_bound`: Return iterator to lower bound (this function returns an iterator pointing to the first element in the set that is greater than or equal to the given value (first element >= value), if no such element exists, it returns end())
- `upper_bound`: Return iterator to upper bound (this function returns an iterator pointing to the first element in the set that is greater than the given value (first element > value, if no such element exists, it returns end())
- `equal_range`: Get range of equal elements (this function returns a pair of iterators, the first iterator is equivalent to `lower bound` and the second iterator is equivalent to `upper_bound`, this represents the range of elements in the set that have the same value as the one specified)

### Allocator
- `get_allocator`: Get allocator