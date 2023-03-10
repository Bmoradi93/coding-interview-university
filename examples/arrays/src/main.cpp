#include <iostream>
#include <algorithm>

int main() {
    int myArray[5];

    // Fill the first 3 elements of the array with the value 42
    std::fill_n(myArray, 3, 42);

    // Print out the contents of the array
    for (int elem : myArray) {
        std::cout << elem << " ";
    }

    std::cout << std::endl;

    return 0;
}
