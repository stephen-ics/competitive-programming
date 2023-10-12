# C++ String Library
- Strings in C++ are objects part of the string class, the constructor for `std::string` is implicitly called by the C++ compiler
- When a `std::string` object goes out of scope (when a function ends) or when it's explicitly deleted using the `delete` operator, the destructor for that `std::string` is automatically called, ensuring that any dynamically allocated memory or resources used by the string are properly deallocated and released

## Types of C++ Strings
- The C++ strings library includes support for three types of general strings
    - `std::basic_string` - a templated class designed to manipulate strings of any character value
    - `std::basic_string_view` - a lightweight non-owning read-only view into a subsequence of a string
    - `Null-terminating strings` - arrays of characters terminated by a special null character
### `std::basic_string`
- Aliased as `typedef basic_string<char> string`
- The templated class generalizes how sequences of characters are manipulated and stored
- String creation, manipulation, and destruction are all handled by a convenient set of class methods and related functions
- Several specializations of `std::basic_string` are provided for commonly-used types

  | Type                            | Definition                    |
  |---------------------------------|-------------------------------|
  | `std::string`                   | `std::basic_string<char>`     |                     
  | `std::wstring`                  | `std::basic_string<wchar_t>`  |                    
  | `std::u8string` (since C++20)   | `std::basic_string<char8_t>`  |                     
  | `std::u16string` (since C++ 11) | `std::basic_string<char16_t>` |                     
  | `std::u32string` (since C++ 11) | `std::basic_string<char32_t>` |

### `std::basic_view_string`
- The templated class `std::basic_string_view` provides a lightweight object that offers read-only access to a string or a part of a string using an interface similar to the interface of `std::basic_string`
- Several specializations of `std::basic_string_view` are provided for commonly-used types

  | Type                                | Definition                         |
  |-------------------------------------|------------------------------------|
  | `std::string_view`                  | `std::basic_string_view<char>`     |                     
  | `std::wstring_view`                 | `std::basic_string_view<wchar_t>`  |                    
  | `std::u8string_view` (since C++ 20) | `std::basic_string_view<char8_t>`  |                     
  | `std::u16string_view`               | `std::basic_string<char16_t>_view` |                     
  | `std::u32string_view`               | `std::basic_string<char32_t>_view` |

### Null-Terminated Strings
- Null-terminated strings are arrays of characters that are terminated by a special 'null' character
- C++ provides functions to create, inspect, and modify null-terminated strings
- For example `"Hello"` is represented as `{'H', 'e', 'l', 'l', 'o', '\0'}`

## String Member Functions (Methods)
A member function is a function that is associated with a class or an object and defines the behaviour or actions that objects of a class can perform
- `(constructor)`: Construct a string object
- `(destructor)`: String destructor
- `operator=`: string assignment

### Iterators
An iterator is indeed an object, and its primary purpose is to provide a way to access and traverse the elements within a container such as a vector, list, or other collection. A string iterator exhibits pointer-like behaviour, as they point to a specific element within the container, accessed with the `*` operator to dereference them
```c++
    #include <iostream>
    #include <vector>
    
    std::vector<int> values = {1, 2, 3, 4, 5};

    for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++) {
        std::cout << *it << std::endl;
    }
    // this will output each value in the vector on a separate line
    // notice how the iterator needs to be dereferenced with the * operator
```
- `begin`: Return iterator to beginning
- `end`: Return iterator to end
- `rbegin`: Return reverse iterator to reverse beginning
- `rend`: Return reverse iterator to reverse end
- `cbegin`: Return const_iterator to the beginning
- `cend`: Return const_iterator to the end
- `crbegin`: Return const_reverse iterator to reverse beginning
- `crend`: Return const_reverse_iterator to reverse end

### Capacity
- `size`: Return length of the string
- `length`: Return length of the string
- `max_size`: Return maximum size of string
- `resize`: Resize string
- `capacity`: Return size of allocated storage
- `reserve`: Request a change in capacity
- `clear`: Clear string
- `empty`: Test if string is empty
- `shrink_to_fit`: Shrink to fit

### Element Access
- `operator[]`: Get character of string
- `at`: Get character in string
- `back`: Access last character
- `front`: Access front character

### Modifiers
- `operator+=`: Append to string
- `append`: Append to string
- `push_back`: Append character to string
- `assign`: Assign content to string
- `insert`: Insert into string
- `erase`: Erase characters from string
- `replace`: Replace portion of string
- `swap`: Swap string values
- `pop_back`: pop_back

### String Operations:
- `c_str`: Get C string equivalent
- `data`: Get string data
- `get_allocator`: Get allocator
- `copy`: Copy sequence of characters from string
- `find`: Find content in string
- `rfind`: Find last occurrence of content in string
- `find_first_of`: Find character in string
- `find_last_of`: Find character in string from the end
- `find_first_not_of`: Find absence of character in string
- `find_last_not_of`: Find absence of character in string from the end
- `substr`: Generate substring
- `compare`: Compare strings

### Member Constants
- `npos`: Represents the maximum value for size_t, often used to represent the "Not found" status
```c++
    #include<iostream>
    #include<string>
    
    std::string text = "Hello World!"
    size_t position = text.find("abc") // Returns std::string::npos because "abc" is not found
    if (position == std::string::npos) {
        std::cout << "Substring not found" << std::endl;
    }
    else {
        std::cout << "Substring found at position " << position << std::endl;
    }
```

## Non-Member Function Overloads
- `operator+`: Concatenate strings
- `relational operatores`: Compare strings with another value
- `swap`: Exchange the values of two strings
- `operator>>`: Extract string from stream
- `operator<<`: Insert string into stream
- `getline`: Get line from stream into string
