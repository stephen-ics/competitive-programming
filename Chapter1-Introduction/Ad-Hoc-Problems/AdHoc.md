# Adhoc Problems
## What is an Adhoc Problem?
- Ad Hoc stands for "for this" or "for this situation"
- Ad Hoc problems in competitive programming typically entail problems that "cannot be classified anywhere else", where each problem description and the corresponding solution are 'unique'
- This folder contains a multitude of Ad Hoc problems and solutions that cover a wide array of possible Ad Hoc problems

## Python String Library
- Strings in C++ are objects part of the string class, the constructor for `std::string` is implicitly called by the C++ compiler
- When a `std::string` object goes out of scope (when a function ends) or when it's explicitly deleted using the `delete` operator, the destructor for that `std::string` is automatically called, ensuring that any dynamically allocated memory or resources used by the string are properly deallocated and released
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

### Member Functions (Method)
A member function is a function that is associated with a class or an object and defines the behaviour or actions that objects of a class can perform
- (constructor): Construct a string object
- (destructor): String destructor
- operator=: string assignment

### String Iterators
- begin: Return iterator to beginning
- end: Return iterator to end
- rbegin: Return reverse iterator to reverse beginning
- rend: Return reverse iterator to reverse end
