# Pairs
- This class couples a pair of values which may be of different types (T1 and T2)
- The individual values can be accessed through its public members `first` and `second`, pairs of a particular case of a `tuple`
- To change the values of the first and second elements simply to `pairName.first = value` and `pairName.second = value`

## Template Parameters
`T1`: Type of member `first`, aliased as `first_type`
`T2`: Type of member `second`, aliased as `second_type`

## Member Functions
- `constructor`: Constructor pair
- `pair::operator=`: Assign contents
- `pair::swap`: Swap contents

### Non-Member Function Overloads
- `relational operators (pair`: Relational operators for pair
- `swap (pair)`: Exchanges the contents of two pairs
- `get (pair)`: Get element (tuple interface), used like this `int firstElement = std::get<0>(pair);`