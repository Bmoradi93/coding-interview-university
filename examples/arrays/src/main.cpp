#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> myVector{1, 2, 3, 4, 5};

    // Calculate the sum of the elements in the vector
    int sum = std::reduce(myVector.begin(), myVector.end(), 0, std::plus<int>());

    std::cout << "Sum of the elements: " << sum << std::endl;

    return 0;
}