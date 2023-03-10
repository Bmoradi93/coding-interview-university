There have been several C++ features developed for working with arrays in recent years. 
Here are some of the latest features:

## std::array:
This is a container class template introduced in C++11 that provides a fixed-size array with a static size that is determined at compile time. It has many advantages over the traditional C-style array, including better type safety, bounds checking, and a consistent interface with other STL containers.

'''cpp

#include <iostream>
#include <array>

int main() {
    std::array<int, 5> myArray = {1, 2, 3, 4, 5};

    for (int i = 0; i < myArray.size(); i++) {
        std::cout << myArray[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
'''cpp


## Range-based for loops: 
This is a feature introduced in C++11 that simplifies iterating over arrays and other containers. Instead of using a traditional for loop with an index variable, you can use a range-based for loop that iterates over the elements of the container directly.

## std::size:
