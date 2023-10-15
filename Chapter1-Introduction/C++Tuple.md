# Tuples
- A tuple is an object capable to hold a collection of elements, each elements can be a different type

## Template Parameters
- A list of types used for the elements, in the same order as they are going to be ordered in the tuple, for example, `std::tuple<int, double, std::string> myTuple`

## Member Functions
- `(constructor)`: Construct tuple
- `tuple::operator=`: Assign content
- `tuple::swap`: Swap content

### Non-Member Function Overloads
- `relational operators (tuple)` Relational operators for tuple
- `swap (tuple)`: Exchanges the contents of two tuples
- `get (tuple)`: Get element

### Non-Member Class Specialization
- `uses_allocator<tuple>`: Uses allocator for tuple