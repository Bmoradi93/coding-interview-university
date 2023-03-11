## Hash Table:
In C++, a hash table is implemented using the std::unordered_map container, which is a part of the C++ Standard Library. It provides a hash-based associative container that maps unique keys to values.

Some of the key features of std::unordered_map are:

* It is a templated class, meaning that it can store elements of any data type.
* It uses a hash function to determine the index of each key-value pair in the underlying array.
* It supports efficient insertion, removal, and lookup operations with an average time complexity of O(1).
* It automatically handles collisions, where multiple keys hash to the same index, using a technique called chaining.
* It provides functions to check the size of the hash table, to iterate over its elements, and to access or modify elements by key.

Here's an example of how to use std::unordered_map:

```
#include <iostream>
#include <unordered_map>

int main() {
  std::unordered_map<std::string, int> my_map = {{"apple", 5}, {"banana", 7}, {"orange", 3}};

  std::cout << "The value of the key 'banana' is: " << my_map["banana"] << std::endl;

  my_map["banana"] = 10;

  std::cout << "The new value of the key 'banana' is: " << my_map["banana"] << std::endl;

  std::cout << "The size of the map is: " << my_map.size() << std::endl;

  return 0;
}

```

## What is the Hash function?
In C++, a hash function is a function that takes a value of a specific data type and returns a unique hash value, which is an integer that represents the original value. The hash function is used by hash-based containers, such as std::unordered_map, to determine the index of each key-value pair in the underlying array.

C++ provides a number of built-in hash functions for commonly used data types, such as std::string, int, float, and double. For other data types, you can define your own hash function by creating a function that takes the value as its argument and returns an integer hash value.

Here's an example of a custom hash function for a user-defined Person class:

```
#include <iostream>
#include <unordered_map>

class Person {
public:
  std::string name;
  int age;
};

struct PersonHash {
  std::size_t operator()(const Person& p) const {
    return std::hash<std::string>()(p.name) ^ std::hash<int>()(p.age);
  }
};

int main() {
  std::unordered_map<Person, int, PersonHash> my_map = {{{"Alice", 25}, 100}, {{"Bob", 30}, 200}};

  std::cout << "The value of the age of the person named 'Bob' is: " << my_map[{"Bob", 30}] << std::endl;

  return 0;
}

```

