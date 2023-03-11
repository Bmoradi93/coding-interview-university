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

In this example, we define a Person class with name and age member variables. We then define a PersonHash struct that overloads the operator() function to define a custom hash function for the Person class. In this case, the hash function combines the hash values of the name and age member variables using the XOR operator.

We create an std::unordered_map object named my_map that maps Person objects to integers, and insert two key-value pairs into the map using brace-enclosed initializer list syntax. We retrieve and print the value associated with the Person object {"Bob", 30}, which uses the custom hash function to determine its index in the map.

## How Hash function works:
In a hash table implemented in C++, a hash value is an integer value that is computed from the key using a hash function. The hash value is then used as an index into an array of buckets, which stores the key-value pairs.

When a new key-value pair is inserted into the hash table, its key is first hashed to compute the hash value. This hash value is then used to determine the index of the corresponding bucket in the array. If the bucket is empty, the new key-value pair is inserted into the bucket. If the bucket is already occupied, a collision has occurred. In this case, the hash table uses a collision resolution strategy to handle the collision and store the new key-value pair.

To retrieve a value from the hash table using a given key, the hash table first computes the hash value for the key using the same hash function. It then uses the hash value to locate the corresponding bucket in the array. If the bucket is empty or does not contain the key, the key is not present in the hash table. If the bucket contains the key, the corresponding value is returned.

In C++, the standard hash table implementation, std::unordered_map, uses a hash function to compute a hash value for each key. It then stores the key-value pairs in an array of linked lists. If two keys have the same hash value, they are stored in the same linked list. When a key is searched for in the hash table, its hash value is used to locate the correct linked list, and then the list is searched sequentially to find the key.